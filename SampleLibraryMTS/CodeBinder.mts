import napi_ from './NAPISampleLibrary.mjs';
let napi: any = napi_;

export class NativeHandle
{
    #address: number;

    constructor(address: number)
    {
        this.#address = address;
    }

    get address(): number
    {
        return this.#address;
    }

    get target(): object
    {
        return napi.NativeHandleGetTarget(this.#address);
    }
}

export class BinderUtils
{
    private static _registry : FinalizationRegistry<IObjectFinalizer>;

    private constructor() { }

    static
    {
        BinderUtils._registry = new FinalizationRegistry<IObjectFinalizer>((finalizer: IObjectFinalizer) => {
          finalizer.finalize();
        });
    }

    static as<T>(n: any, type: any): T
    {
        if (n instanceof type)
            return n as T;
        else
            return null as any;
    }

    static cast<T>(n: any, type: any): T
    {
        if (n instanceof type)
            return n as T;
        else
            throw new Error(`Could not cast input to type ${typeof type}`);
    }

    static createNativeHandle(obj: object): NativeHandle
    {
        return new NativeHandle(napi.CreateNativeHandle(obj));
    }

    static createWeakNativeHandle(obj: object): NativeHandle
    {
        return new NativeHandle(napi.CreateWeakNativeHandle(obj));
    }

    static freeNativeHandle(nativeHandle: NativeHandle): void
    {
        napi.FreeNativeHandle(nativeHandle.address);
    }

    static keepAlive(obj: object): void
    {
        // Do nothing
    }

    // FIXME: This is garbage, this should replaced by proper AST manipulation
    static clear(arr: { set length(count: number); }): { (): void; }
    {
        arr.length = 0;
        // Returns a callable do nothing function, so it will be
        // compatible with Clear() signature
        return function (): void { };
    }

    /** @internal */
    static registerForFinalization(obj: object, finalizer: IObjectFinalizer): void
    {
        BinderUtils._registry.register(obj, finalizer);
    }
}

// This is just for compatibility with .NET System.Object
export class ObjectTS
{
    equals(lhs: object| null): boolean
    {
        throw new Error(`Not implemented`);
    }

    getHashCode(): number
    {
        throw new Error(`Not implemented`);
    }
}

// This is just for compatibility with .NET System.Exception
export class Exception extends Error
{
    constructor(
        message?: string
    )
    {
        super(message!);
    }
}

// https://docs.microsoft.com/en-us/dotnet/api/system.runtime.interopservices.handleref
export class HandleRef extends ObjectTS
{
    wrapper: object | null;
    handle: number;

    constructor(wrapper?: object | null, handle?: number)
    {
        super();
        this.wrapper = wrapper ?? null;
        this.handle = handle ?? 0;
    }
}

export class BooleanRefBox extends ObjectTS
{
    value: boolean;

    constructor(value?: boolean)
    {
        super();
        this.value = value ?? false;
    }
}

export class NumberRefBox extends ObjectTS
{
    value: number;

    constructor(value?: number)
    {
        super();
        this.value = value ?? 0;
    }
}

export class BigIntRefBox extends ObjectTS
{
    value: bigint;

    constructor(value?: bigint)
    {
        super();
        this.value = value ?? 0n;
    }
}

export class StringRefBox extends ObjectTS
{
    value: string | null;

    constructor(value?: string)
    {
        super();
        this.value = value ?? null;
    }
}

export interface IObjectFinalizer
{
    finalize(): void;
}

export abstract class HandledObjectFinalizer extends ObjectTS implements IObjectFinalizer
{
    handle: number = 0;

    finalize(): void
    {
        this.freeHandle(this.handle);
    }

    abstract freeHandle(handle: number): void;
}

export class FinalizableObject extends ObjectTS
{
    protected constructor()
    {
        super();
    }

    protected registerFinalizer(finalizer: IObjectFinalizer): void
    {
        BinderUtils.registerForFinalization(this, finalizer);
    }
}


export class HandledObjectBase extends FinalizableObject
{
    #_handle : number;

    protected constructor(handle: number, handled: boolean)
    {
        super();
        this.#_handle = handle;
        if (handled)
        {
            let finalizer = this.createFinalizer();
            finalizer!.handle = handle;
            super.registerFinalizer(finalizer!);
        }
    }

    protected createFinalizer(): HandledObjectFinalizer | null
    {
        throw new Error(`Not implemented`);
    }

    get unsafeHandle(): number
    {
        return this.#_handle;
    }

    get handle(): HandleRef
    {
        return new HandleRef(this, this.#_handle);
    }

    get managed(): boolean
    {
        return true;
    }

    override equals(obj: object| null): boolean
    {
        if (obj === null)
            return false;

        var other: HandledObjectBase = BinderUtils.as<HandledObjectBase>(obj, HandledObjectBase);
        return this.referenceHandle === other.referenceHandle;
    }

    override getHashCode(): number
    {
        return this.referenceHandle;
    }

    protected get referenceHandle(): number
    {
        return this.unsafeHandle;
    }
}

export class HandledObject <BaseT extends HandledObject<BaseT>> extends HandledObjectBase
{
    protected constructor(handle: number, handled: boolean)
    {
        super(handle, handled);
    }

    equals(other: BaseT): boolean
    {
        return super.equals(other);
    }
}

export interface IDisposable {
    dispose(): void;
}

export interface IReadOnlyList<T> extends Iterable<T>
{
    count:number;
    getAt(index: number): T | null;
}

export class KeyValuePair<TKey, TValue> extends ObjectTS
{
    key:TKey;
    value:TValue;

    constructor(key?: TKey, value?: TValue)
    {
        super();
        this.key = key ?? null!;
        this.value = value ?? null!;
    }
}

export interface IEqualityComparer <T> 
{
}


export class NotImplementedException extends Error
{

}

export class BooleanArray
{
    #actualArray: Uint8ClampedArray;

    [index: number]: boolean;

    constructor(length? : number)
    {
        this.#actualArray = new Uint8ClampedArray(length ?? 0);
        return new Proxy(this, BooleanArray.indexedHandler);
    }

    get length(): number
    {
        return this.#actualArray.length;
    }

    private static indexedHandler: ProxyHandler<BooleanArray> =
    {
        get(target, prop)
        {
            switch (prop)
            {
                case 'length':
                    return target.length;
                default:
                    return target.#actualArray[Number(prop)] !== 0;
            }
        },
        set(target, index, value): boolean
        {
            target.#actualArray[Number(index)] = value ? 1 : 0;
            return true;
        }
    }
}



import { NativeHandle, BinderUtils, ObjectTS, Exception, HandleRef, BooleanRefBox, NumberRefBox, BigIntRefBox, StringRefBox, IObjectFinalizer, HandledObjectFinalizer, FinalizableObject, HandledObjectBase, HandledObject, IDisposable, IReadOnlyList, KeyValuePair, IEqualityComparer, NotImplementedException, BooleanArray } from './CodeBinder.mjs';
import napi_ from './NAPIENLibPdf.mjs';
let napi: any = napi_;

// Enums

export const enum AnnotationType 
{
    Unknown = 0,
    Link = 1,
    Popup = 2,
    Any = -1,
}

export const enum DocVersion 
{
    Unknown = 0,
    v1_0 = 10,
    v2_0 = 20,
}

// Interfaces

// Finalizers

class DocumentFinalizer extends HandledObjectFinalizer
{
    override freeHandle(handle: number): void
    {
        napi.SLFreeDocument(handle);
    }
}

// Classes

export class Annotation extends HandledObject<Annotation>
{
    private _type: AnnotationType = null!;

    private _page: Page = null!;

    protected constructor(
        type: AnnotationType,
        page: Page,
        annot: number
    )
    {
        super(annot, false);
        this._type = type;
        this._page = page;
    }
    /** @internal */

    static createAnnotation(
        annot: number,
        page: Page
    ): Annotation
    {
        let type: AnnotationType = napi.SLAnnotGetType(annot);
        return Annotation.createAnnotationWithType(annot, type, page);
    }
    /** @internal */

    static createAnnotationWithType(
        annot: number,
        type: AnnotationType,
        page: Page
    ): Annotation
    {
        switch (type)
        {
            case AnnotationType.Link:
                return new AnnotationLink(page, annot);
            case AnnotationType.Popup:
                return new AnnotationPopup(page, annot);
            default:
                throw new Exception("Unknown annotation type");
        }
    }

    get rect(): Rect
    {
        let array: Float64Array | null = new Float64Array(4);
        napi.SLAnnotGetRect(this.handle, array);
        return Rect.create(array);
    }

    get page(): Page
    {
        return this._page;
    }

    get type(): AnnotationType
    {
        return this._type;
    }
}

export class AnnotationLink extends Annotation
{
    /** @internal */
    constructor(
        page: Page,
        annot: number
    )
    {
        super(AnnotationType.Link, page, annot);

    }
}

export class AnnotationPopup extends Annotation
{
    /** @internal */
    constructor(
        page: Page,
        annot: number
    )
    {
        super(AnnotationType.Popup, page, annot);

    }
}

export abstract class AnnotationCollection extends ObjectTS
{
    getAll(type?: AnnotationType): Array<Annotation>
    {
        type = type ?? AnnotationType.Any;
        let ret: Array<Annotation> | null = new Array<Annotation>();
        this.getAllPrivate(ret, type);
        return ret;
    }

    private getAllPrivate<TAnnotation extends Annotation>(
        annots: Array<TAnnotation>,
        targetType: AnnotationType
    ): void
    {
        this.getAllInternal(annots, new PdfAnnotationPredicate(targetType));
    }

    protected abstract getAllInternal<TAnnotation extends Annotation>(
        annots: Array<TAnnotation>,
        predicate: PdfAnnotationPredicate
    ): void;
}

export class PdfAnnotationPredicate extends ObjectTS
{
    private _targetType: AnnotationType = null!;

    constructor(targetType: AnnotationType)
    {
        super();
        this._targetType = targetType;
    }

    p(annot: Annotation): boolean
    {
        if (this._targetType !== AnnotationType.Any && annot.type !== this._targetType)
            return false;
        return true;
    }
}

export class Common extends ObjectTS
{
    private static _init: boolean = false;

    static initLibrary(): void
    {
        if (Common._init)
            return;
        napi.SLInit();
        ;
    }
}

export class Document extends HandledObject<Document>
{
    private _pages: PageCollection = null!;

    private _metadata: Metadata = null!;

    static
    {
        Common.initLibrary();
    }

    static new()
    {
        return new Document(napi.SLCreateDocument());

    }

    private constructor(ptr: number)
    {
        super(ptr, true);
        this._pages = new PageCollection(this);
        this._metadata = new Metadata(this);
    }

    protected override createFinalizer(): HandledObjectFinalizer | null
    {
        return new DocumentFinalizer();
    }

    static createWithFile(
        filename: string,
        password?: string | null
    ): Document
    {
        password = password ?? null;
        let ptr: number = napi.SLPdfLoadFile(filename, password);
        let doc: Document | null = new Document(ptr);
        return doc;
    }

    static createWithArray(
        bytes: Uint8ClampedArray,
        password?: string | null
    ): Document
    {
        password = password ?? null;
        let ptr: number = napi.SLPdfLoadBuffer(bytes, 0, bytes.length, password);
        return new Document(ptr);
    }

    get pages(): PageCollection
    {
        return this._pages;
    }

    get metadata(): Metadata
    {
        return this._metadata;
    }
}

export class PageCollection extends ObjectTS implements Iterable<Page>
{
    private _doc: Document = null!;
    /** @internal */

    constructor(doc: Document)
    {
        super();
        this._doc = doc;
    }

    newPage(size?: Rect | null): Page
    {
        size = size ?? null;
        let page: number = napi.SLDocNewPage(this._doc.handle, size === null ? null : size.toArray());
        return new Page(this._doc, page);
        ;
    }

    newPageAt(
        atIndex: number,
        size?: Rect | null
    ): Page
    {
        size = size ?? null;
        let page: number = napi.SLDocNewPageAt(this._doc.handle, atIndex, size === null ? null : size.toArray());
        return new Page(this._doc, page);
    }

    toList(): Array<Page>
    {
        let pageCount: number = napi.SLDocGetPageCount(this._doc.handle);
        let pages: Float64Array | null = new Float64Array(pageCount);
        napi.SLDocGetPages(this._doc.handle, pages);
        let ret: Array<Page> | null = new Array<Page>(pageCount);
        for (let i: number = 0; i < pages.length; i++)
        {
            let page: number = pages[i];
            ret.push(new Page(this._doc, page));
        }
        return ret;
    }

    *[Symbol.iterator](): Iterator<Page>
    {
        let count: number = this.count;
        for (let i: number = 0; i < count; i++)
            yield this.getAt(i);
    }

    getAt(index: number): Page
    {
        let page: number = napi.SLDocGetPage(this._doc.handle, index);
        return new Page(this._doc, page);
    }

    get count(): number
    {
        return napi.SLDocGetPageCount(this._doc.handle);
    }
}

export class Metadata extends ObjectTS
{
    private _doc: Document = null!;
    /** @internal */

    constructor(doc: Document)
    {
        super();
        this._doc = doc;
    }

    get title(): string | null
    {
        return napi.SLDocGetTitle(this._doc.handle);
    }

    get docVersion(): DocVersion
    {
        return napi.SLDocGetVersion(this._doc.handle);
    }
}

export class Page extends HandledObject<Page>
{
    private _annotations: PageAnnotationCollection = null!;

    private __document: Document = null!;
    get document(): Document
    {
        return this.__document;
    }
    private set document(value: Document)
    {
        this.__document = value;
    }
    /** @internal */

    constructor(
        doc: Document,
        page: number
    )
    {
        super(page, false);
        this._annotations = new PageAnnotationCollection(this);
        this.document = doc;
    }
    /** @internal */

    getAnnotationCount(): number
    {
        return napi.SLPageGetAnnotationCount(this.handle);
    }
    /** @internal */

    getAnnotations<TAnnotation extends Annotation>(
        annotations: Array<TAnnotation>,
        predicate: PdfAnnotationPredicate
    ): void
    {
        let annotPtrs: Float64Array | null = new Float64Array(this.getAnnotationCount());
        napi.SLPageGetAnnotations(this.handle, annotPtrs);
        for (let i: number = 0; i < annotPtrs.length; i++)
        {
            let annotPtr: number = annotPtrs[i];
            let annot: Annotation | null = Annotation.createAnnotation(annotPtr, this);
            if (predicate.p(annot))
                annotations.push(annot as TAnnotation);
        }
    }

    get index(): number
    {
        return napi.SLPageGetIndex(this.handle);
    }

    get rect(): Rect
    {
        let array: Float64Array | null = new Float64Array(4);
        napi.SLPageGetRect(this.handle, array);
        return Rect.create(array);
    }

    get annotations(): PageAnnotationCollection
    {
        return this._annotations;
    }
}

export class PageAnnotationCollection extends AnnotationCollection
{
    private _page: Page = null!;
    /** @internal */

    constructor(page: Page)
    {
        super();
        this._page = page;
    }

    get count(): number
    {
        return this._page.getAnnotationCount();
    }

    protected override getAllInternal<TAnnotation extends Annotation>(
        annots: Array<TAnnotation>,
        predicate: PdfAnnotationPredicate
    ): void
    {
        this._page.getAnnotations(annots, predicate);
    }
}

export class Rect extends ObjectTS
{
    constructor()
    {
        super();
    }

    X: number = 0;

    Y: number = 0;

    Width: number = 0;

    Height: number = 0;

    static createWithWidthHeight(
        x: number,
        y: number,
        width: number,
        height: number
    )
    {
        let ret = new Rect();
        ret.__createWithWidthHeight(x, y, width, height);
        return ret;
    }

    private __createWithWidthHeight(
        x: number,
        y: number,
        width: number,
        height: number
    )
    {
        this.X = x;
        this.Y = y;
        this.Width = width;
        this.Height = height;
    }

    static create(array: Float64Array): Rect
    {
        return Rect.createWithWidthHeight(array[0], array[1], array[2], array[3]);
    }

    toArray(): Float64Array
    {
        return new Float64Array([this.left, this.bottom, this.Width, this.Height]);
    }

    get left(): number
    {
        return this.X;
    }
    set left(value: number)
    {
        this.X = value;
    }

    get bottom(): number
    {
        return this.Y;
    }
    set bottom(value: number)
    {
        this.Y = value;
    }

    get right(): number
    {
        return this.left + this.Width;
    }

    get top(): number
    {
        return this.bottom + this.Height;
    }
}


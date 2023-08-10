import * as proc from 'node:process';
import * as CodeBinder from './CodeBinder.mjs';
import { fileURLToPath } from 'node:url';

let shext = 'so';
switch (proc.platform)
{
    case 'win32':
    {
        shext = 'dll'
        break;
    }
    case 'darwin':
    {
        shext = 'dylib'
        break;
    }
}

const mod = { exports: {} };
// https://github.com/DefinitelyTyped/DefinitelyTyped/discussions/65252
(proc as any).dlopen(mod, fileURLToPath(new URL(`SampleLibrary.${shext}`, import.meta.url)));
let napi = (mod.exports as any)(CodeBinder);
export default napi;

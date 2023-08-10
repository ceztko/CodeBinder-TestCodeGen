import * as proc from 'node:process';
import * as CodeBinder from './CodeBinder';
import * as path from 'path';

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
(proc as any).dlopen(mod, path.join(__dirname, `SampleLibrary.${shext}`));
let napi = (mod.exports as any)(CodeBinder);
export default napi;

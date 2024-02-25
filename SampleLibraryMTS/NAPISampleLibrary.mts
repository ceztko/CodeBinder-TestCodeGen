import * as proc from 'node:process';
import * as CodeBinder from './CodeBinder.mjs';
import * as path from 'path';
import * as fs from 'fs';
import { fileURLToPath } from 'node:url';

const archsMap: { [key: string]: any } = {
    'win32|x86': 'Win32',
    'win32|x64': 'Win64',
    'linux|x64': 'linux-x86_64',
    'darwin|x64': 'macos-x86_64',
    'darwin|arm64': 'macos-arm64',
  };

let narch = `${proc.platform}|${proc.arch}`
let arch = archsMap[narch];
if (arch === undefined)
    throw new Error(`Unsupported architecture ${narch}`);

let shprefix = 'lib';
let shext = 'so';
switch (proc.platform)
{
    case 'win32':
    {
        shprefix = '';
        shext = 'dll'
        break;
    }
    case 'darwin':
    {
        shext = 'dylib'
        break;
    }
}

function getLibraryPath(libFileName: string): string
{
    return fileURLToPath(new URL(path.join(arch, libFileName), import.meta.url));
}

function loadLibrary(exports: object, libName: string): void
{
    let libpath = getLibraryPath(`${libName}.${shext}`);
    if (!fs.existsSync(libpath))
    {
        libpath = getLibraryPath(`${shprefix}${libName}.${shext}`);
        if (!fs.existsSync(libpath))
           throw new Error(`Could not find library ${libName}`); 
    }

    // https://github.com/DefinitelyTyped/DefinitelyTyped/discussions/65252
    (proc as any).dlopen(exports, libpath);
}

const mod = { exports: {} };
loadLibrary(mod, 'SampleLibrary');
let napi = (mod.exports as any)(CodeBinder);
export default napi;

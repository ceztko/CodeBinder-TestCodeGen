/* This file was generated. DO NOT EDIT! */

partial class Document
{
    // Partial method declarations

    [UnmanagedCallersOnly(EntryPoint = "SLFreeDocument", CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial void SLFreeDocument(
        SLDocument* doc);

    [UnmanagedCallersOnly(EntryPoint = "SLCreateDocument", CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial SLDocument* SLCreateDocument(
        );

    [UnmanagedCallersOnly(EntryPoint = "SLPdfLoadBuffer", CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial SLDocument* SLPdfLoadBuffer(
        byte* buffer, int offset, int size, CodeBinder.cbstring password);

    [UnmanagedCallersOnly(EntryPoint = "SLPdfLoadFile", CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial SLDocument* SLPdfLoadFile(
        CodeBinder.cbstring filename, CodeBinder.cbstring password);

    [UnmanagedCallersOnly(EntryPoint = "SLIsPdfDocument", CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial cbbool SLIsPdfDocument(
        CodeBinder.cbstring filename, SLDocVersion * version);

    [UnmanagedCallersOnly(EntryPoint = "SLIsPdfDocumentBuffer", CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial cbbool SLIsPdfDocumentBuffer(
        byte* buffer, int size, SLDocVersion * version);

    [UnmanagedCallersOnly(EntryPoint = "SLDocGetPageCount", CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial int SLDocGetPageCount(
        SLDocument* doc);

    [UnmanagedCallersOnly(EntryPoint = "SLDocGetPages", CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial void SLDocGetPages(
        SLDocument* doc, SLPdfPage** pages);

    [UnmanagedCallersOnly(EntryPoint = "SLDocGetPage", CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial SLPdfPage* SLDocGetPage(
        SLDocument* doc, int index);

    [UnmanagedCallersOnly(EntryPoint = "SLDocAppendPage", CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial void SLDocAppendPage(
        SLDocument* doc, SLDocument* srcdoc, int pageIndex);

    [UnmanagedCallersOnly(EntryPoint = "SLDocNewPageAt", CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial SLPdfPage* SLDocNewPageAt(
        SLDocument* doc, int atIndex, double* rect);

    [UnmanagedCallersOnly(EntryPoint = "SLDocNewPage", CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial SLPdfPage* SLDocNewPage(
        SLDocument* doc, double* rect);

    [UnmanagedCallersOnly(EntryPoint = "SLDocGetVersion", CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial SLDocVersion SLDocGetVersion(
        SLDocument* doc);

    [UnmanagedCallersOnly(EntryPoint = "SLDocGetTitle", CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial CodeBinder.cbstring SLDocGetTitle(
        SLDocument* doc);

}

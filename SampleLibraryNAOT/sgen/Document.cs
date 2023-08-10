/* This file was generated. DO NOT EDIT! */

partial class Document
{
    // Partial method declarations

    [UnmanagedCallersOnly(CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial void SLFreeDocument(
        SLDocument* doc);

    [UnmanagedCallersOnly(CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial SLDocument* SLCreateDocument(
        );

    [UnmanagedCallersOnly(CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial SLDocument* SLPdfLoadBuffer(
        byte* buffer, int offset, int size, CodeBinder.cbstring password);

    [UnmanagedCallersOnly(CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial SLDocument* SLPdfLoadFile(
        CodeBinder.cbstring filename, CodeBinder.cbstring password);

    [UnmanagedCallersOnly(CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial cbbool SLIsPdfDocument(
        CodeBinder.cbstring filename, SLDocVersion * version);

    [UnmanagedCallersOnly(CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial cbbool SLIsPdfDocumentBuffer(
        byte* buffer, int size, SLDocVersion * version);

    [UnmanagedCallersOnly(CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial int SLDocGetPageCount(
        SLDocument* doc);

    [UnmanagedCallersOnly(CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial void SLDocGetPages(
        SLDocument* doc, SLPdfPage** pages);

    [UnmanagedCallersOnly(CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial SLPdfPage* SLDocGetPage(
        SLDocument* doc, int index);

    [UnmanagedCallersOnly(CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial void SLDocAppendPage(
        SLDocument* doc, SLDocument* srcdoc, int pageIndex);

    [UnmanagedCallersOnly(CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial SLPdfPage* SLDocNewPageAt(
        SLDocument* doc, int atIndex, double* rect);

    [UnmanagedCallersOnly(CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial SLPdfPage* SLDocNewPage(
        SLDocument* doc, double* rect);

    [UnmanagedCallersOnly(CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial SLDocVersion SLDocGetVersion(
        SLDocument* doc);

    [UnmanagedCallersOnly(CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial CodeBinder.cbstring SLDocGetTitle(
        SLDocument* doc);

}

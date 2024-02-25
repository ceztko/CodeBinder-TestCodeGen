/* This file was generated. DO NOT EDIT! */

partial class Page
{
    // Partial method declarations

    [UnmanagedCallersOnly(EntryPoint = "SLPageGetAnnotations", CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial void SLPageGetAnnotations(
        SLPdfPage* page, SLAnnotation** annots);

    [UnmanagedCallersOnly(EntryPoint = "SLPageGetAnnotationCount", CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial int SLPageGetAnnotationCount(
        SLPdfPage* page);

    [UnmanagedCallersOnly(EntryPoint = "SLPageGetIndex", CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial int SLPageGetIndex(
        SLPdfPage* page);

    [UnmanagedCallersOnly(EntryPoint = "SLPageGetRect", CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial void SLPageGetRect(
        SLPdfPage* page, double* rect);

}

/* This file was generated. DO NOT EDIT! */

partial class Page
{
    // Partial method declarations

    [UnmanagedCallersOnly(CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial void SLPageGetAnnotations(
        SLPdfPage* page, SLAnnotation** annots);

    [UnmanagedCallersOnly(CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial int SLPageGetAnnotationCount(
        SLPdfPage* page);

    [UnmanagedCallersOnly(CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial int SLPageGetIndex(
        SLPdfPage* page);

    [UnmanagedCallersOnly(CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial void SLPageGetRect(
        SLPdfPage* page, double* rect);

}

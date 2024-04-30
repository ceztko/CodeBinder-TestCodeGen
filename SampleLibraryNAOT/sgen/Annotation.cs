/* This file was generated. DO NOT EDIT! */

partial class Annotation
{
    // Partial method declarations

    [UnmanagedCallersOnly(EntryPoint = "SLAnnotGetType", CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial AnnotationType SLAnnotGetType(
        SLAnnotation* annot);

    [UnmanagedCallersOnly(EntryPoint = "SLAnnotGetRect", CallConvs = new[] { typeof(CallConvCdecl) })]
    public static unsafe partial void SLAnnotGetRect(
        SLAnnotation* annot, double* rect);

}

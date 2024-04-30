partial class Document
{
    public static unsafe partial void SLFreeDocument(
        SLDocument* doc)
    {
    }

    public static unsafe partial SLDocument* SLCreateDocument(
        )
    {
        return default;
    }

    public static unsafe partial SLDocument* SLPdfLoadBuffer(
        byte* buffer, int offset, int size, CodeBinder.cbstring password)
    {
        return default;
    }

    public static unsafe partial SLDocument* SLPdfLoadFile(
        CodeBinder.cbstring filename, CodeBinder.cbstring password)
    {
        return default;
    }

    public static unsafe partial cbbool SLIsPdfDocument(
        CodeBinder.cbstring filename, DocVersion * version)
    {
        return default;
    }

    public static unsafe partial cbbool SLIsPdfDocumentBuffer(
        byte* buffer, int size, DocVersion * version)
    {
        return default;
    }

    public static unsafe partial int SLDocGetPageCount(
        SLDocument* doc)
    {
        return default;
    }

    public static unsafe partial void SLDocGetPages(
        SLDocument* doc, SLPdfPage** pages)
    {
    }

    public static unsafe partial SLPdfPage* SLDocGetPage(
        SLDocument* doc, int index)
    {
        return default;
    }

    public static unsafe partial void SLDocAppendPage(
        SLDocument* doc, SLDocument* srcdoc, int pageIndex)
    {
    }

    public static unsafe partial SLPdfPage* SLDocNewPageAt(
        SLDocument* doc, int atIndex, double* rect)
    {
        return default;
    }

    public static unsafe partial SLPdfPage* SLDocNewPage(
        SLDocument* doc, double* rect)
    {
        return default;
    }

    public static unsafe partial DocVersion SLDocGetVersion(
        SLDocument* doc)
    {
        return default;
    }

    public static unsafe partial CodeBinder.cbstring SLDocGetTitle(
        SLDocument* doc)
    {
        return default;
    }

}

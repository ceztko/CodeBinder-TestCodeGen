/* This file was generated. DO NOT EDIT! */
package SampleLibrary;

import java.util.*;
import CodeBinder.*;

public class Document extends HandledObject<Document>
{
    PageCollection _pages;

    Metadata _metadata;

    static
    {
        Common.initLibrary();
    }

    public Document()
    {
        this(SLCreateDocument());

    }

    private Document(long ptr)
    {
        super(ptr, true);
        _pages = new PageCollection(this);
        _metadata = new Metadata(this);
    }

    protected HandledObjectFinalizer createFinalizer()
    {
        return new DocumentFinalizer();
    }

    static class DocumentFinalizer extends HandledObjectFinalizer
    {
        public void freeHandle(long handle)
        {
            SLFreeDocument(handle);
        }
    }

    public static Document create(String filename)
    {
        return create(filename, (String)null);
    }

    public static Document create(
            String filename,
            String password
        )
    {
        long ptr = SLPdfLoadFile(filename, password);
        Document doc = new Document(ptr);
        return doc;
    }

    public static Document create(byte[] bytes)
    {
        return create(bytes, (String)null);
    }

    public static Document create(
            byte[] bytes,
            String password
        )
    {
        long ptr = SLPdfLoadBuffer(bytes, 0, bytes.length, password);
        return new Document(ptr);
    }

    public PageCollection getPages()
    {
        return _pages;
    }

    public Metadata getMetadata()
    {
        return _metadata;
    }

    private static native void SLFreeDocument(long doc);

    private static native long SLCreateDocument();

    private static native long SLPdfLoadBuffer(
            byte[] buffer,
            int offset,
            int size,
            String password
        );

    private static native long SLPdfLoadFile(
            String filename,
            String password
        );

    private static native boolean SLIsPdfDocument(
            String filename,
            IntegerBox version
        );

    private static native boolean SLIsPdfDocumentBuffer(
            byte[] buffer,
            int size,
            IntegerBox version
        );
}

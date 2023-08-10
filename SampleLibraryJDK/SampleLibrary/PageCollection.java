/* This file was generated. DO NOT EDIT! */
package SampleLibrary;

import java.util.*;
import CodeBinder.*;

public class PageCollection implements Iterable<Page>
{
    Document _doc;

    PageCollection(Document doc)
    {
        _doc = doc;
    }

    public Page newPage()
    {
        return newPage(null);
    }

    public Page newPage(Rect size)
    {
        long page = SLDocNewPage(_doc.getHandle(), size == null ? null : size.toArray());
        return new Page(_doc, page);
        ;
    }

    public Page newPageAt(int atIndex)
    {
        return newPageAt(atIndex, null);
    }

    public Page newPageAt(
            int atIndex,
            Rect size
        )
    {
        long page = SLDocNewPageAt(_doc.getHandle(), atIndex, size == null ? null : size.toArray());
        return new Page(_doc, page);
    }

    public ArrayList<Page> toList()
    {
        int pageCount = SLDocGetPageCount(_doc.getHandle());
        long[] pages = new long[pageCount];
        SLDocGetPages(_doc.getHandle(), pages);
        ArrayList<Page> ret = new ArrayList<Page>(pageCount);
        for (int i = 0; i < pages.length; i++)
        {
            long page = pages[i];
            ret.add(new Page(_doc, page));
        }
        return ret;
    }

    public Page get(int index)
    {
        long page = SLDocGetPage(_doc.getHandle(), index);
        return new Page(_doc, page);
    }

    public int getCount()
    {
        return SLDocGetPageCount(_doc.getHandle());
    }

    private static native int SLDocGetPageCount(HandleRef doc);

    private static native void SLDocGetPages(
            HandleRef doc,
            long[] pages
        );

    private static native long SLDocGetPage(
            HandleRef doc,
            int index
        );

    private static native void SLDocAppendPage(
            HandleRef doc,
            HandleRef srcdoc,
            int pageIndex
        );

    private static native long SLDocNewPageAt(
            HandleRef doc,
            int atIndex,
            double[] rect
        );

    private static native long SLDocNewPage(
            HandleRef doc,
            double[] rect
        );
}

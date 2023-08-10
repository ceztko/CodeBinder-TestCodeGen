/* This file was generated. DO NOT EDIT! */
package SampleLibrary;

import java.util.*;
import CodeBinder.*;

public class Metadata
{
    Document _doc;

    Metadata(Document doc)
    {
        _doc = doc;
    }

    public String getTitle()
    {
        return SLDocGetTitle(_doc.getHandle());
    }

    public DocVersion getDocVersion()
    {
        return DocVersion.fromValue(SLDocGetVersion(_doc.getHandle()));
    }

    private static native int SLDocGetVersion(HandleRef doc);

    private static native String SLDocGetTitle(HandleRef doc);
}

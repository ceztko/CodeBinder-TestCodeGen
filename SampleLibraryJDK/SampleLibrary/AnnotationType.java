/* This file was generated. DO NOT EDIT! */
package SampleLibrary;

import java.util.*;
import CodeBinder.*;

public enum AnnotationType
{
    Unknown(0),
    Link(1),
    Popup(2),
    Any(-1);

    public final int value;

    AnnotationType(int value)
    {
        this.value = value;
    }

    public static AnnotationType fromValue(int value)
    {
        switch (value)
        {
            case 0:
                return AnnotationType.Unknown;
            case 1:
                return AnnotationType.Link;
            case 2:
                return AnnotationType.Popup;
            case -1:
                return AnnotationType.Any;
            default:
                throw new RuntimeException("Invalid value " + value + " for enum AnnotationType");
        }
    }
}

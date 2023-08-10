/* This file was generated. DO NOT EDIT! */
package SampleLibrary;

import java.util.*;
import CodeBinder.*;

public enum DocVersion
{
    Unknown(0),
    v1_0(10),
    v2_0(20);

    public final int value;

    DocVersion(int value)
    {
        this.value = value;
    }

    public static DocVersion fromValue(int value)
    {
        switch (value)
        {
            case 0:
                return DocVersion.Unknown;
            case 10:
                return DocVersion.v1_0;
            case 20:
                return DocVersion.v2_0;
            default:
                throw new RuntimeException("Invalid value " + value + " for enum DocVersion");
        }
    }
}

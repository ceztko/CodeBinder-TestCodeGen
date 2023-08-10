/* This file was generated. DO NOT EDIT! */
package SampleLibrary;

import java.util.*;
import CodeBinder.*;

public class Rect
{
    public Rect() { }

    public double X;

    public double Y;

    public double Width;

    public double Height;

    public Rect(
            double x,
            double y,
            double width,
            double height
        )
    {
        X = x;
        Y = y;
        Width = width;
        Height = height;
    }

    public static Rect create(double[] array)
    {
        return new Rect(array[0], array[1], array[2], array[3]);
    }

    public double[] toArray()
    {
        return new double[]{getLeft(), getBottom(), Width, Height};
    }

    public double getLeft()
    {
        return X;
    }
    public void setLeft(double value)
    {
        X = value;
    }

    public double getBottom()
    {
        return Y;
    }
    public void setBottom(double value)
    {
        Y = value;
    }

    public double getRight()
    {
        return getLeft() + Width;
    }

    public double getTop()
    {
        return getBottom() + Height;
    }
}

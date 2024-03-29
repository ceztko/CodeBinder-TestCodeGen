﻿/* This file was generated. DO NOT EDIT! */
/**
 * SPDX-FileCopyrightText: (C) 2021 Francesco Pretto <ceztko@gmail.com>
 * SPDX-License-Identifier: MIT-0
 */

#pragma once

#include "JNITypes.h"

 // https://artificial-mind.net/blog/2020/10/03/always-false
template <class... T>
constexpr bool always_false = false;

#undef jBooleanBox
#undef jByteBox
#undef jShortBox
#undef jIntegerBox
#undef jLongBox
#undef jFloatBox
#undef jDoubleBox
#undef jStringBox
#undef jHandleRef

// Template for box types
template <typename BaseT>
class _jTypeBox : public BaseT
{
public:
    typename BaseT::ValueType GetValue(JNIEnv* env) const;
    void SetValue(JNIEnv* env, typename BaseT::ValueType value);
private:
    jfieldID getFieldId(JNIEnv* env) const;
};

// Base box types

// Forward declarations for box type classes
class _jBooleanBox;
class _jByteBox;
class _jShortBox;
class _jIntegerBox;
class _jLongBox;
class _jFloatBox;
class _jDoubleBox;
class _jStringBox;
class _jHandleRef;

// Typedef for box type pointers
typedef _jBooleanBox* jBooleanBox;
typedef _jByteBox* jByteBox;
typedef _jShortBox* jShortBox;
typedef _jIntegerBox* jIntegerBox;
typedef _jLongBox* jLongBox;
typedef _jFloatBox* jFloatBox;
typedef _jDoubleBox* jDoubleBox;
typedef _jStringBox* jStringBox;
typedef _jHandleRef* jHandleRef;

class _jBooleanBoxBase : public _jobject
{
public:
    typedef jBooleanBox BoxPtr;
    typedef jboolean ValueType;
protected:
    static const char* getFieldIdSignature();
    ValueType getValue(JNIEnv* env, jfieldID field) const;
    void setValue(JNIEnv* env, jfieldID field, ValueType value);
};

class _jByteBoxBase : public _jobject
{
public:
    typedef jByteBox BoxPtr;
    typedef jbyte ValueType;
protected:
    static const char* getFieldIdSignature();
    ValueType getValue(JNIEnv* env, jfieldID field) const;
    void setValue(JNIEnv* env, jfieldID field, ValueType value);
};

class _jShortBoxBase : public _jobject
{
public:
    typedef jShortBox BoxPtr;
    typedef jshort ValueType;
protected:
    static const char* getFieldIdSignature();
    ValueType getValue(JNIEnv* env, jfieldID field) const;
    void setValue(JNIEnv* env, jfieldID field, ValueType value);
};

class _jIntegerBoxBase : public _jobject
{
public:
    typedef jIntegerBox BoxPtr;
    typedef jint ValueType;
protected:
    static const char* getFieldIdSignature();
    ValueType getValue(JNIEnv* env, jfieldID field) const;
    void setValue(JNIEnv* env, jfieldID field, ValueType value);
};

class _jLongBoxBase : public _jobject
{
public:
    typedef jLongBox BoxPtr;
    typedef jlong ValueType;
protected:
    static const char* getFieldIdSignature();
    ValueType getValue(JNIEnv* env, jfieldID field) const;
    void setValue(JNIEnv* env, jfieldID field, ValueType value);
};

class _jFloatBoxBase : public _jobject
{
public:
    typedef jFloatBox BoxPtr;
    typedef jfloat ValueType;
protected:
    static const char* getFieldIdSignature();
    ValueType getValue(JNIEnv* env, jfieldID field) const;
    void setValue(JNIEnv* env, jfieldID field, ValueType value);
};

class _jDoubleBoxBase : public _jobject
{
public:
    typedef jDoubleBox BoxPtr;
    typedef jdouble ValueType;
protected:
    static const char* getFieldIdSignature();
    ValueType getValue(JNIEnv* env, jfieldID field) const;
    void setValue(JNIEnv* env, jfieldID field, ValueType  value);
};

class _jStringBoxBase : public _jobject
{
public:
    typedef jStringBox BoxPtr;
    typedef jstring ValueType;
protected:
    static const char* getFieldIdSignature();
    ValueType getValue(JNIEnv* env, jfieldID field) const;
    void setValue(JNIEnv* env, jfieldID field, ValueType  value);
};

// Typedef for box types
class _jBooleanBox : public _jTypeBox<_jBooleanBoxBase> { };
class _jByteBox : public _jTypeBox<_jByteBoxBase> { };
class _jShortBox : public _jTypeBox<_jShortBoxBase> { };
class _jIntegerBox : public _jTypeBox<_jIntegerBoxBase> { };
class _jLongBox : public _jTypeBox<_jLongBoxBase> { };
class _jFloatBox : public _jTypeBox<_jFloatBoxBase> { };
class _jDoubleBox : public _jTypeBox<_jDoubleBoxBase> { };
class _jStringBox : public _jTypeBox<_jStringBoxBase> { };

template<typename BaseT>
typename BaseT::ValueType _jTypeBox<BaseT>::GetValue(JNIEnv* env) const
{
    return this->getValue(env, getFieldId(env));
}

template<typename BaseT>
void _jTypeBox<BaseT>::SetValue(JNIEnv* env, typename BaseT::ValueType value)
{
    this->setValue(env, getFieldId(env), value);
}

template<typename BaseT>
jfieldID _jTypeBox<BaseT>::getFieldId(JNIEnv* env) const
{
    auto cls = env->GetObjectClass((jobject)this);
    return env->GetFieldID(cls, "value", this->getFieldIdSignature());
}

class _jHandleRef : public _jobject
{
public:
    template <typename T>
    inline T* GetHandle(JNIEnv* env);
private:
    jlong getHandle(JNIEnv* env);
};

template <typename T>
T* _jHandleRef::GetHandle(JNIEnv* env)
{
    return (T*)getHandle(env);
}

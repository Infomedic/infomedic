// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.24.5\Targets\CPlusPlus\Android\Uno\Base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.JNI.h>
#include <android/log.h>
#include <jni.h>
#include <Uno.h>
#include <XliPlatform/PlatformSpecific/Android.h>
namespace g{namespace Android{namespace Base{namespace Types{struct Arrays;}}}}

namespace g{
namespace Android{
namespace Base{
namespace Types{

// public static extern class Arrays :2424
// {
uClassType* Arrays_typeof();
void Arrays__JavaToUnoByteArray_fn(jobject* arr_, int64_t* len_, uArray** __retval);
void Arrays__JavaToUnoFloatArray_fn(jobject* arr, uArray** __retval);
void Arrays__JavaToUnoFloatArray1_fn(jobject* arr_, int64_t* len_, uArray** __retval);

struct Arrays : uObject
{
    static uArray* JavaToUnoByteArray(jobject arr_, int64_t len_);
    static uArray* JavaToUnoFloatArray(jobject arr);
    static uArray* JavaToUnoFloatArray1(jobject arr_, int64_t len_);
};
// }

}}}} // ::g::Android::Base::Types

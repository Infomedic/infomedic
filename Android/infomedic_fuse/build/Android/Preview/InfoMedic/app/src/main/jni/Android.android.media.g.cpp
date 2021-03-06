// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.media.AudioManager.h>
#include <Android.android.media.AudioManagerDLROnAudioFocusChangeListener.h>
#include <Android.android.media.MediaPlayer.h>
#include <Android.android.media.MediaPlayerDLROnBufferingUpdateListener.h>
#include <Android.android.media.MediaPlayerDLROnCompletionListener.h>
#include <Android.android.media.MediaPlayerDLROnErrorListener.h>
#include <Android.android.media.MediaPlayerDLROnPreparedListener.h>
#include <Android.android.media.MediaPlayerDLROnSeekCompleteListener.h>
#include <Android.android.media.MediaPlayerDLROnVideoSizeChangedListener.h>
#include <Android.android.view.Surface.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jfieldID.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_android_media_AudioManagerDLROnAudioF-b4dcb473.h>
#include <Android.Fallbacks.Android_android_media_MediaPlayerDLROnBufferi-a11a3e5b.h>
#include <Android.Fallbacks.Android_android_media_MediaPlayerDLROnComplet-64af01f3.h>
#include <Android.Fallbacks.Android_android_media_MediaPlayerDLROnErrorListener.h>
#include <Android.Fallbacks.Android_android_media_MediaPlayerDLROnPreparedListener.h>
#include <Android.Fallbacks.Android_android_media_MediaPlayerDLROnSeekCom-79a19ba7.h>
#include <Android.Fallbacks.Android_android_media_MediaPlayerDLROnVideoSi-169f5c77.h>
#include <Android.java.io.FileDescriptor.h>
#include <Android.java.lang.String.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Type.h>
static uType* TYPES[2];

namespace g{
namespace Android{
namespace android{
namespace media{

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\Android\android\media\$.uno(1192)
// -------------------------------------------------------------------------------

// public sealed extern class AudioManager :1192
// {
::g::Android::java::lang::Object_type* AudioManager_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(AudioManager);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.media.AudioManager", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::media::AudioManager::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::media::AudioManager::abandonAudioFocus_8799_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::media::AudioManager::AUDIOFOCUS_GAIN_8748_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::media::AudioManager::requestAudioFocus_8798_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::media::AudioManager::STREAM_MUSIC_8695_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(7,
        new uFunction("_Init", NULL, (void*)AudioManager___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("abandonAudioFocus", NULL, (void*)AudioManager__abandonAudioFocus_fn, 0, false, ::g::Uno::Int_typeof(), 1, ::g::Android::android::media::AudioManagerDLROnAudioFocusChangeListener_typeof()),
        new uFunction("abandonAudioFocus_IMPL_8799", NULL, (void*)AudioManager__abandonAudioFocus_IMPL_8799_fn, 0, true, ::g::Uno::Int_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("get_AUDIOFOCUS_GAIN", NULL, (void*)AudioManager__get_AUDIOFOCUS_GAIN_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("requestAudioFocus", NULL, (void*)AudioManager__requestAudioFocus_fn, 0, false, ::g::Uno::Int_typeof(), 3, ::g::Android::android::media::AudioManagerDLROnAudioFocusChangeListener_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("requestAudioFocus_IMPL_8798", NULL, (void*)AudioManager__requestAudioFocus_IMPL_8798_fn, 0, true, ::g::Uno::Int_typeof(), 5, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("get_STREAM_MUSIC", NULL, (void*)AudioManager__get_STREAM_MUSIC_fn, 0, true, ::g::Uno::Int_typeof(), 0));
    return type;
}

// public static extern new void _Init() :1196
void AudioManager___Init2_fn()
{
    AudioManager::_Init2();
}

// public int abandonAudioFocus(Android.android.media.AudioManagerDLROnAudioFocusChangeListener arg0) :2674
void AudioManager__abandonAudioFocus_fn(AudioManager* __this, uObject* arg0, int* __retval)
{
    *__retval = __this->abandonAudioFocus(arg0);
}

// public static extern int abandonAudioFocus_IMPL_8799(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :2852
void AudioManager__abandonAudioFocus_IMPL_8799_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* __retval)
{
    *__retval = AudioManager::abandonAudioFocus_IMPL_8799(*arg0_, *arg1_, arg2_);
}

// public static int get_AUDIOFOCUS_GAIN() :2255
void AudioManager__get_AUDIOFOCUS_GAIN_fn(int* __retval)
{
    *__retval = AudioManager::AUDIOFOCUS_GAIN();
}

// public int requestAudioFocus(Android.android.media.AudioManagerDLROnAudioFocusChangeListener arg0, int arg1, int arg2) :2668
void AudioManager__requestAudioFocus_fn(AudioManager* __this, uObject* arg0, int* arg1, int* arg2, int* __retval)
{
    *__retval = __this->requestAudioFocus(arg0, *arg1, *arg2);
}

// public static extern int requestAudioFocus_IMPL_8798(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, int arg4) :2849
void AudioManager__requestAudioFocus_IMPL_8798_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int* arg3_, int* arg4_, int* __retval)
{
    *__retval = AudioManager::requestAudioFocus_IMPL_8798(*arg0_, *arg1_, arg2_, *arg3_, *arg4_);
}

// public static int get_STREAM_MUSIC() :1354
void AudioManager__get_STREAM_MUSIC_fn(int* __retval)
{
    *__retval = AudioManager::STREAM_MUSIC();
}

jclass AudioManager::_javaClass2_;
jmethodID AudioManager::abandonAudioFocus_8799_ID_;
jfieldID AudioManager::AUDIOFOCUS_GAIN_8748_ID_;
jmethodID AudioManager::requestAudioFocus_8798_ID_;
jfieldID AudioManager::STREAM_MUSIC_8695_ID_;

// public int abandonAudioFocus(Android.android.media.AudioManagerDLROnAudioFocusChangeListener arg0) [instance] :2674
int AudioManager::abandonAudioFocus(uObject* arg0)
{
    uStackFrame __("Android.android.media.AudioManager", "abandonAudioFocus(Android.android.media.AudioManagerDLROnAudioFocusChangeListener)");
    return AudioManager::abandonAudioFocus_IMPL_8799(_subclassed, _javaObject, arg0);
}

// public int requestAudioFocus(Android.android.media.AudioManagerDLROnAudioFocusChangeListener arg0, int arg1, int arg2) [instance] :2668
int AudioManager::requestAudioFocus(uObject* arg0, int arg1, int arg2)
{
    uStackFrame __("Android.android.media.AudioManager", "requestAudioFocus(Android.android.media.AudioManagerDLROnAudioFocusChangeListener,int,int)");
    int arg1_ = arg1;
    int arg2_ = arg2;
    return AudioManager::requestAudioFocus_IMPL_8798(_subclassed, _javaObject, arg0, arg1_, arg2_);
}

// public static extern new void _Init() [static] :1196
void AudioManager::_Init2()
{
    uStackFrame __("Android.android.media.AudioManager", "_Init()");
    if (AudioManager::_javaClass2()) { return; }
    INIT_JNI;
    AudioManager::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/media/AudioManager"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!AudioManager::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.media.AudioManager'", 50);; }
}

// public static extern int abandonAudioFocus_IMPL_8799(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :2852
int AudioManager::abandonAudioFocus_IMPL_8799(bool arg0_, jobject arg1_, uObject* arg2_)
{
    uStackFrame __("Android.android.media.AudioManager", "abandonAudioFocus_IMPL_8799(bool,Android.Base.Primitives.ujobject,Android.Base.Wrappers.IJWrapper)");
    INIT_JNI;
    CLASS_INIT(AudioManager::_javaClass2(),AudioManager::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    CACHE_METHOD(AudioManager::abandonAudioFocus_8799_ID(),AudioManager::_javaClass2(),"abandonAudioFocus","(Landroid/media/AudioManager$OnAudioFocusChangeListener;)I",GetMethodID,"Id for fallback method android.media.AudioManager.abandonAudioFocus could not be cached",87);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, AudioManager::_javaClass2(), AudioManager::abandonAudioFocus_8799_ID(), _obArg2));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, AudioManager::abandonAudioFocus_8799_ID(), _obArg2));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int requestAudioFocus_IMPL_8798(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, int arg3, int arg4) [static] :2849
int AudioManager::requestAudioFocus_IMPL_8798(bool arg0_, jobject arg1_, uObject* arg2_, int arg3_, int arg4_)
{
    uStackFrame __("Android.android.media.AudioManager", "requestAudioFocus_IMPL_8798(bool,Android.Base.Primitives.ujobject,Android.Base.Wrappers.IJWrapper,int,int)");
    INIT_JNI;
    CLASS_INIT(AudioManager::_javaClass2(),AudioManager::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    int result;
    CACHE_METHOD(AudioManager::requestAudioFocus_8798_ID(),AudioManager::_javaClass2(),"requestAudioFocus","(Landroid/media/AudioManager$OnAudioFocusChangeListener;II)I",GetMethodID,"Id for fallback method android.media.AudioManager.requestAudioFocus could not be cached",87);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, AudioManager::_javaClass2(), AudioManager::requestAudioFocus_8798_ID(), _obArg2, ((jint)arg3_), ((jint)arg4_)));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, AudioManager::requestAudioFocus_8798_ID(), _obArg2, ((jint)arg3_), ((jint)arg4_)));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static int get_AUDIOFOCUS_GAIN() [static] :2255
int AudioManager::AUDIOFOCUS_GAIN()
{
    uStackFrame __("Android.android.media.AudioManager", "get_AUDIOFOCUS_GAIN()");
    INIT_JNI;
    CLASS_INIT(AudioManager::_javaClass2(),AudioManager::_Init2());
    if (::uEnterCriticalIfNull(&AudioManager::AUDIOFOCUS_GAIN_8748_ID())) {;
    CACHE_FIELD(AudioManager::AUDIOFOCUS_GAIN_8748_ID(),AudioManager::_javaClass2(),"AUDIOFOCUS_GAIN","I",GetStaticFieldID,"Id for field AudioManager.AUDIOFOCUS_GAIN could not be cached",61);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(AudioManager::_javaClass2(), AudioManager::AUDIOFOCUS_GAIN_8748_ID()));;
    return result;
}

// public static int get_STREAM_MUSIC() [static] :1354
int AudioManager::STREAM_MUSIC()
{
    uStackFrame __("Android.android.media.AudioManager", "get_STREAM_MUSIC()");
    INIT_JNI;
    CLASS_INIT(AudioManager::_javaClass2(),AudioManager::_Init2());
    if (::uEnterCriticalIfNull(&AudioManager::STREAM_MUSIC_8695_ID())) {;
    CACHE_FIELD(AudioManager::STREAM_MUSIC_8695_ID(),AudioManager::_javaClass2(),"STREAM_MUSIC","I",GetStaticFieldID,"Id for field AudioManager.STREAM_MUSIC could not be cached",58);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(AudioManager::_javaClass2(), AudioManager::STREAM_MUSIC_8695_ID()));;
    return result;
}
// }

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\Android\android\media\$.uno(18605)
// --------------------------------------------------------------------------------

// public abstract extern interface AudioManagerDLROnAudioFocusChangeListener :18605
// {
uInterfaceType* AudioManagerDLROnAudioFocusChangeListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.media.AudioManagerDLROnAudioFocusChangeListener", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("onAudioFocusChange", NULL, NULL, offsetof(AudioManagerDLROnAudioFocusChangeListener, fp_onAudioFocusChange), false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()));
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\Android\android\media\$.uno(11834)
// --------------------------------------------------------------------------------

// public sealed extern class MediaPlayer :11834
// {
::g::Android::java::lang::Object_type* MediaPlayer_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 36;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(MediaPlayer);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.media.MediaPlayer", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_ctor_ = (void*)MediaPlayer__New5_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::TYPES[0] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[1] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::media::MediaPlayer::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::media::MediaPlayer::getCurrentPosition_9497_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::media::MediaPlayer::getDuration_9498_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::media::MediaPlayer::getVideoHeight_9494_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::media::MediaPlayer::getVideoWidth_9493_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::media::MediaPlayer::isPlaying_9495_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::media::MediaPlayer::MEDIA_ERROR_IO_9460_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::media::MediaPlayer::MEDIA_ERROR_MALFORMED_9461_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::media::MediaPlayer::MEDIA_ERROR_SERVER_DIED_9458_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::media::MediaPlayer::MEDIA_ERROR_TIMED_OUT_9463_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::media::MediaPlayer::MEDIA_ERROR_UNKNOWN_9457_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::media::MediaPlayer::MEDIA_ERROR_UNSUPPORTED_9462_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::media::MediaPlayer::MediaPlayer_9474_ID_c_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::media::MediaPlayer::pause_9490_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::media::MediaPlayer::prepareAsync_9487_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::media::MediaPlayer::release_9500_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::media::MediaPlayer::reset_9501_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::media::MediaPlayer::seekTo_9496_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::media::MediaPlayer::setAudioStreamType_9502_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::media::MediaPlayer::setDataSource_9483_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::media::MediaPlayer::setDataSource_9485_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::media::MediaPlayer::setOnBufferingUpdateListener_9520_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::media::MediaPlayer::setOnCompletionListener_9519_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::media::MediaPlayer::setOnErrorListener_9524_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::media::MediaPlayer::setOnPreparedListener_9518_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::media::MediaPlayer::setOnSeekCompleteListener_9521_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::media::MediaPlayer::setOnVideoSizeChangedListener_9522_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::media::MediaPlayer::setSurface_9476_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::media::MediaPlayer::setVolume_9505_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::media::MediaPlayer::start_9488_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::media::MediaPlayer::stop_9489_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(54,
        new uFunction("_Init", NULL, (void*)MediaPlayer___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("getCurrentPosition", NULL, (void*)MediaPlayer__getCurrentPosition_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("getCurrentPosition_IMPL_9497", NULL, (void*)MediaPlayer__getCurrentPosition_IMPL_9497_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getDuration", NULL, (void*)MediaPlayer__getDuration_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("getDuration_IMPL_9498", NULL, (void*)MediaPlayer__getDuration_IMPL_9498_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getVideoHeight", NULL, (void*)MediaPlayer__getVideoHeight_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("getVideoHeight_IMPL_9494", NULL, (void*)MediaPlayer__getVideoHeight_IMPL_9494_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("getVideoWidth", NULL, (void*)MediaPlayer__getVideoWidth_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("getVideoWidth_IMPL_9493", NULL, (void*)MediaPlayer__getVideoWidth_IMPL_9493_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("isPlaying", NULL, (void*)MediaPlayer__isPlaying_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("isPlaying_IMPL_9495", NULL, (void*)MediaPlayer__isPlaying_IMPL_9495_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("get_MEDIA_ERROR_IO", NULL, (void*)MediaPlayer__get_MEDIA_ERROR_IO_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_MEDIA_ERROR_MALFORMED", NULL, (void*)MediaPlayer__get_MEDIA_ERROR_MALFORMED_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_MEDIA_ERROR_SERVER_DIED", NULL, (void*)MediaPlayer__get_MEDIA_ERROR_SERVER_DIED_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_MEDIA_ERROR_TIMED_OUT", NULL, (void*)MediaPlayer__get_MEDIA_ERROR_TIMED_OUT_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_MEDIA_ERROR_UNKNOWN", NULL, (void*)MediaPlayer__get_MEDIA_ERROR_UNKNOWN_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_MEDIA_ERROR_UNSUPPORTED", NULL, (void*)MediaPlayer__get_MEDIA_ERROR_UNSUPPORTED_fn, 0, true, ::g::Uno::Int_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)MediaPlayer__New5_fn, 0, true, MediaPlayer_typeof(), 0),
        new uFunction("pause", NULL, (void*)MediaPlayer__pause_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("pause_IMPL_9490", NULL, (void*)MediaPlayer__pause_IMPL_9490_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("prepareAsync", NULL, (void*)MediaPlayer__prepareAsync_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("prepareAsync_IMPL_9487", NULL, (void*)MediaPlayer__prepareAsync_IMPL_9487_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("release", NULL, (void*)MediaPlayer__release_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("release_IMPL_9500", NULL, (void*)MediaPlayer__release_IMPL_9500_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("reset", NULL, (void*)MediaPlayer__reset_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("reset_IMPL_9501", NULL, (void*)MediaPlayer__reset_IMPL_9501_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("seekTo", NULL, (void*)MediaPlayer__seekTo_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("seekTo_IMPL_9496", NULL, (void*)MediaPlayer__seekTo_IMPL_9496_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("setAudioStreamType", NULL, (void*)MediaPlayer__setAudioStreamType_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("setAudioStreamType_IMPL_9502", NULL, (void*)MediaPlayer__setAudioStreamType_IMPL_9502_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("setDataSource", NULL, (void*)MediaPlayer__setDataSource3_fn, 0, false, uVoid_typeof(), 3, ::g::Android::java::io::FileDescriptor_typeof(), ::g::Uno::Long_typeof(), ::g::Uno::Long_typeof()),
        new uFunction("setDataSource", NULL, (void*)MediaPlayer__setDataSource4_fn, 0, false, uVoid_typeof(), 1, ::g::Android::java::lang::String_typeof()),
        new uFunction("setDataSource_IMPL_9483", NULL, (void*)MediaPlayer__setDataSource_IMPL_9483_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("setDataSource_IMPL_9485", NULL, (void*)MediaPlayer__setDataSource_IMPL_9485_fn, 0, true, uVoid_typeof(), 5, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof(), ::g::Uno::Long_typeof(), ::g::Uno::Long_typeof()),
        new uFunction("setOnBufferingUpdateListener", NULL, (void*)MediaPlayer__setOnBufferingUpdateListener_fn, 0, false, uVoid_typeof(), 1, ::g::Android::android::media::MediaPlayerDLROnBufferingUpdateListener_typeof()),
        new uFunction("setOnBufferingUpdateListener_IMPL_9520", NULL, (void*)MediaPlayer__setOnBufferingUpdateListener_IMPL_9520_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("setOnCompletionListener", NULL, (void*)MediaPlayer__setOnCompletionListener_fn, 0, false, uVoid_typeof(), 1, ::g::Android::android::media::MediaPlayerDLROnCompletionListener_typeof()),
        new uFunction("setOnCompletionListener_IMPL_9519", NULL, (void*)MediaPlayer__setOnCompletionListener_IMPL_9519_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("setOnErrorListener", NULL, (void*)MediaPlayer__setOnErrorListener_fn, 0, false, uVoid_typeof(), 1, ::g::Android::android::media::MediaPlayerDLROnErrorListener_typeof()),
        new uFunction("setOnErrorListener_IMPL_9524", NULL, (void*)MediaPlayer__setOnErrorListener_IMPL_9524_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("setOnPreparedListener", NULL, (void*)MediaPlayer__setOnPreparedListener_fn, 0, false, uVoid_typeof(), 1, ::g::Android::android::media::MediaPlayerDLROnPreparedListener_typeof()),
        new uFunction("setOnPreparedListener_IMPL_9518", NULL, (void*)MediaPlayer__setOnPreparedListener_IMPL_9518_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("setOnSeekCompleteListener", NULL, (void*)MediaPlayer__setOnSeekCompleteListener_fn, 0, false, uVoid_typeof(), 1, ::g::Android::android::media::MediaPlayerDLROnSeekCompleteListener_typeof()),
        new uFunction("setOnSeekCompleteListener_IMPL_9521", NULL, (void*)MediaPlayer__setOnSeekCompleteListener_IMPL_9521_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("setOnVideoSizeChangedListener", NULL, (void*)MediaPlayer__setOnVideoSizeChangedListener_fn, 0, false, uVoid_typeof(), 1, ::g::Android::android::media::MediaPlayerDLROnVideoSizeChangedListener_typeof()),
        new uFunction("setOnVideoSizeChangedListener_IMPL_9522", NULL, (void*)MediaPlayer__setOnVideoSizeChangedListener_IMPL_9522_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("setSurface", NULL, (void*)MediaPlayer__setSurface_fn, 0, false, uVoid_typeof(), 1, ::g::Android::android::view::Surface_typeof()),
        new uFunction("setSurface_IMPL_9476", NULL, (void*)MediaPlayer__setSurface_IMPL_9476_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Android::Base::Wrappers::IJWrapper_typeof()),
        new uFunction("setVolume", NULL, (void*)MediaPlayer__setVolume_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("setVolume_IMPL_9505", NULL, (void*)MediaPlayer__setVolume_IMPL_9505_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("start", NULL, (void*)MediaPlayer__start_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("start_IMPL_9488", NULL, (void*)MediaPlayer__start_IMPL_9488_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()),
        new uFunction("stop", NULL, (void*)MediaPlayer__stop_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("stop_IMPL_9489", NULL, (void*)MediaPlayer__stop_IMPL_9489_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()));
    return type;
}

// public MediaPlayer() :12181
void MediaPlayer__ctor_5_fn(MediaPlayer* __this)
{
    __this->ctor_5();
}

// public static extern new void _Init() :11838
void MediaPlayer___Init2_fn()
{
    MediaPlayer::_Init2();
}

// public int getCurrentPosition() :12328
void MediaPlayer__getCurrentPosition_fn(MediaPlayer* __this, int* __retval)
{
    *__retval = __this->getCurrentPosition();
}

// public static extern int getCurrentPosition_IMPL_9497(bool arg0, Android.Base.Primitives.ujobject arg1) :12570
void MediaPlayer__getCurrentPosition_IMPL_9497_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = MediaPlayer::getCurrentPosition_IMPL_9497(*arg0_, *arg1_);
}

// public int getDuration() :12334
void MediaPlayer__getDuration_fn(MediaPlayer* __this, int* __retval)
{
    *__retval = __this->getDuration();
}

// public static extern int getDuration_IMPL_9498(bool arg0, Android.Base.Primitives.ujobject arg1) :12573
void MediaPlayer__getDuration_IMPL_9498_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = MediaPlayer::getDuration_IMPL_9498(*arg0_, *arg1_);
}

// public int getVideoHeight() :12310
void MediaPlayer__getVideoHeight_fn(MediaPlayer* __this, int* __retval)
{
    *__retval = __this->getVideoHeight();
}

// public static extern int getVideoHeight_IMPL_9494(bool arg0, Android.Base.Primitives.ujobject arg1) :12561
void MediaPlayer__getVideoHeight_IMPL_9494_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = MediaPlayer::getVideoHeight_IMPL_9494(*arg0_, *arg1_);
}

// public int getVideoWidth() :12304
void MediaPlayer__getVideoWidth_fn(MediaPlayer* __this, int* __retval)
{
    *__retval = __this->getVideoWidth();
}

// public static extern int getVideoWidth_IMPL_9493(bool arg0, Android.Base.Primitives.ujobject arg1) :12558
void MediaPlayer__getVideoWidth_IMPL_9493_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = MediaPlayer::getVideoWidth_IMPL_9493(*arg0_, *arg1_);
}

// public bool isPlaying() :12316
void MediaPlayer__isPlaying_fn(MediaPlayer* __this, bool* __retval)
{
    *__retval = __this->isPlaying();
}

// public static extern bool isPlaying_IMPL_9495(bool arg0, Android.Base.Primitives.ujobject arg1) :12564
void MediaPlayer__isPlaying_IMPL_9495_fn(bool* arg0_, jobject* arg1_, bool* __retval)
{
    *__retval = MediaPlayer::isPlaying_IMPL_9495(*arg0_, *arg1_);
}

// public static int get_MEDIA_ERROR_IO() :11945
void MediaPlayer__get_MEDIA_ERROR_IO_fn(int* __retval)
{
    *__retval = MediaPlayer::MEDIA_ERROR_IO();
}

// public static int get_MEDIA_ERROR_MALFORMED() :11962
void MediaPlayer__get_MEDIA_ERROR_MALFORMED_fn(int* __retval)
{
    *__retval = MediaPlayer::MEDIA_ERROR_MALFORMED();
}

// public static int get_MEDIA_ERROR_SERVER_DIED() :11911
void MediaPlayer__get_MEDIA_ERROR_SERVER_DIED_fn(int* __retval)
{
    *__retval = MediaPlayer::MEDIA_ERROR_SERVER_DIED();
}

// public static int get_MEDIA_ERROR_TIMED_OUT() :11996
void MediaPlayer__get_MEDIA_ERROR_TIMED_OUT_fn(int* __retval)
{
    *__retval = MediaPlayer::MEDIA_ERROR_TIMED_OUT();
}

// public static int get_MEDIA_ERROR_UNKNOWN() :11894
void MediaPlayer__get_MEDIA_ERROR_UNKNOWN_fn(int* __retval)
{
    *__retval = MediaPlayer::MEDIA_ERROR_UNKNOWN();
}

// public static int get_MEDIA_ERROR_UNSUPPORTED() :11979
void MediaPlayer__get_MEDIA_ERROR_UNSUPPORTED_fn(int* __retval)
{
    *__retval = MediaPlayer::MEDIA_ERROR_UNSUPPORTED();
}

// public MediaPlayer New() :12181
void MediaPlayer__New5_fn(MediaPlayer** __retval)
{
    *__retval = MediaPlayer::New5();
}

// public void pause() :12286
void MediaPlayer__pause_fn(MediaPlayer* __this)
{
    __this->pause();
}

// public static extern void pause_IMPL_9490(bool arg0, Android.Base.Primitives.ujobject arg1) :12549
void MediaPlayer__pause_IMPL_9490_fn(bool* arg0_, jobject* arg1_)
{
    MediaPlayer::pause_IMPL_9490(*arg0_, *arg1_);
}

// public void prepareAsync() :12268
void MediaPlayer__prepareAsync_fn(MediaPlayer* __this)
{
    __this->prepareAsync();
}

// public static extern void prepareAsync_IMPL_9487(bool arg0, Android.Base.Primitives.ujobject arg1) :12540
void MediaPlayer__prepareAsync_IMPL_9487_fn(bool* arg0_, jobject* arg1_)
{
    MediaPlayer::prepareAsync_IMPL_9487(*arg0_, *arg1_);
}

// public void release() :12346
void MediaPlayer__release_fn(MediaPlayer* __this)
{
    __this->release();
}

// public static extern void release_IMPL_9500(bool arg0, Android.Base.Primitives.ujobject arg1) :12579
void MediaPlayer__release_IMPL_9500_fn(bool* arg0_, jobject* arg1_)
{
    MediaPlayer::release_IMPL_9500(*arg0_, *arg1_);
}

// public void reset() :12352
void MediaPlayer__reset_fn(MediaPlayer* __this)
{
    __this->reset();
}

// public static extern void reset_IMPL_9501(bool arg0, Android.Base.Primitives.ujobject arg1) :12582
void MediaPlayer__reset_IMPL_9501_fn(bool* arg0_, jobject* arg1_)
{
    MediaPlayer::reset_IMPL_9501(*arg0_, *arg1_);
}

// public void seekTo(int arg0) :12322
void MediaPlayer__seekTo_fn(MediaPlayer* __this, int* arg0)
{
    __this->seekTo(*arg0);
}

// public static extern void seekTo_IMPL_9496(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :12567
void MediaPlayer__seekTo_IMPL_9496_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    MediaPlayer::seekTo_IMPL_9496(*arg0_, *arg1_, *arg2_);
}

// public void setAudioStreamType(int arg0) :12358
void MediaPlayer__setAudioStreamType_fn(MediaPlayer* __this, int* arg0)
{
    __this->setAudioStreamType(*arg0);
}

// public static extern void setAudioStreamType_IMPL_9502(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :12585
void MediaPlayer__setAudioStreamType_IMPL_9502_fn(bool* arg0_, jobject* arg1_, int* arg2_)
{
    MediaPlayer::setAudioStreamType_IMPL_9502(*arg0_, *arg1_, *arg2_);
}

// public void setDataSource(Android.java.io.FileDescriptor arg0, long arg1, long arg2) :12256
void MediaPlayer__setDataSource3_fn(MediaPlayer* __this, ::g::Android::java::io::FileDescriptor* arg0, int64_t* arg1, int64_t* arg2)
{
    __this->setDataSource3(arg0, *arg1, *arg2);
}

// public void setDataSource(Android.java.lang.String arg0) :12244
void MediaPlayer__setDataSource4_fn(MediaPlayer* __this, ::g::Android::java::lang::String* arg0)
{
    __this->setDataSource4(arg0);
}

// public static extern void setDataSource_IMPL_9483(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :12528
void MediaPlayer__setDataSource_IMPL_9483_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    MediaPlayer::setDataSource_IMPL_9483(*arg0_, *arg1_, arg2_);
}

// public static extern void setDataSource_IMPL_9485(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, long arg3, long arg4) :12534
void MediaPlayer__setDataSource_IMPL_9485_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, int64_t* arg3_, int64_t* arg4_)
{
    MediaPlayer::setDataSource_IMPL_9485(*arg0_, *arg1_, arg2_, *arg3_, *arg4_);
}

// public void setOnBufferingUpdateListener(Android.android.media.MediaPlayerDLROnBufferingUpdateListener arg0) :12466
void MediaPlayer__setOnBufferingUpdateListener_fn(MediaPlayer* __this, uObject* arg0)
{
    __this->setOnBufferingUpdateListener(arg0);
}

// public static extern void setOnBufferingUpdateListener_IMPL_9520(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :12639
void MediaPlayer__setOnBufferingUpdateListener_IMPL_9520_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    MediaPlayer::setOnBufferingUpdateListener_IMPL_9520(*arg0_, *arg1_, arg2_);
}

// public void setOnCompletionListener(Android.android.media.MediaPlayerDLROnCompletionListener arg0) :12460
void MediaPlayer__setOnCompletionListener_fn(MediaPlayer* __this, uObject* arg0)
{
    __this->setOnCompletionListener(arg0);
}

// public static extern void setOnCompletionListener_IMPL_9519(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :12636
void MediaPlayer__setOnCompletionListener_IMPL_9519_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    MediaPlayer::setOnCompletionListener_IMPL_9519(*arg0_, *arg1_, arg2_);
}

// public void setOnErrorListener(Android.android.media.MediaPlayerDLROnErrorListener arg0) :12490
void MediaPlayer__setOnErrorListener_fn(MediaPlayer* __this, uObject* arg0)
{
    __this->setOnErrorListener(arg0);
}

// public static extern void setOnErrorListener_IMPL_9524(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :12651
void MediaPlayer__setOnErrorListener_IMPL_9524_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    MediaPlayer::setOnErrorListener_IMPL_9524(*arg0_, *arg1_, arg2_);
}

// public void setOnPreparedListener(Android.android.media.MediaPlayerDLROnPreparedListener arg0) :12454
void MediaPlayer__setOnPreparedListener_fn(MediaPlayer* __this, uObject* arg0)
{
    __this->setOnPreparedListener(arg0);
}

// public static extern void setOnPreparedListener_IMPL_9518(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :12633
void MediaPlayer__setOnPreparedListener_IMPL_9518_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    MediaPlayer::setOnPreparedListener_IMPL_9518(*arg0_, *arg1_, arg2_);
}

// public void setOnSeekCompleteListener(Android.android.media.MediaPlayerDLROnSeekCompleteListener arg0) :12472
void MediaPlayer__setOnSeekCompleteListener_fn(MediaPlayer* __this, uObject* arg0)
{
    __this->setOnSeekCompleteListener(arg0);
}

// public static extern void setOnSeekCompleteListener_IMPL_9521(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :12642
void MediaPlayer__setOnSeekCompleteListener_IMPL_9521_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    MediaPlayer::setOnSeekCompleteListener_IMPL_9521(*arg0_, *arg1_, arg2_);
}

// public void setOnVideoSizeChangedListener(Android.android.media.MediaPlayerDLROnVideoSizeChangedListener arg0) :12478
void MediaPlayer__setOnVideoSizeChangedListener_fn(MediaPlayer* __this, uObject* arg0)
{
    __this->setOnVideoSizeChangedListener(arg0);
}

// public static extern void setOnVideoSizeChangedListener_IMPL_9522(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :12645
void MediaPlayer__setOnVideoSizeChangedListener_IMPL_9522_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    MediaPlayer::setOnVideoSizeChangedListener_IMPL_9522(*arg0_, *arg1_, arg2_);
}

// public void setSurface(Android.android.view.Surface arg0) :12202
void MediaPlayer__setSurface_fn(MediaPlayer* __this, ::g::Android::android::view::Surface* arg0)
{
    __this->setSurface(arg0);
}

// public static extern void setSurface_IMPL_9476(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) :12507
void MediaPlayer__setSurface_IMPL_9476_fn(bool* arg0_, jobject* arg1_, uObject* arg2_)
{
    MediaPlayer::setSurface_IMPL_9476(*arg0_, *arg1_, arg2_);
}

// public void setVolume(float arg0, float arg1) :12376
void MediaPlayer__setVolume_fn(MediaPlayer* __this, float* arg0, float* arg1)
{
    __this->setVolume(*arg0, *arg1);
}

// public static extern void setVolume_IMPL_9505(bool arg0, Android.Base.Primitives.ujobject arg1, float arg2, float arg3) :12594
void MediaPlayer__setVolume_IMPL_9505_fn(bool* arg0_, jobject* arg1_, float* arg2_, float* arg3_)
{
    MediaPlayer::setVolume_IMPL_9505(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public void start() :12274
void MediaPlayer__start_fn(MediaPlayer* __this)
{
    __this->start();
}

// public static extern void start_IMPL_9488(bool arg0, Android.Base.Primitives.ujobject arg1) :12543
void MediaPlayer__start_IMPL_9488_fn(bool* arg0_, jobject* arg1_)
{
    MediaPlayer::start_IMPL_9488(*arg0_, *arg1_);
}

// public void stop() :12280
void MediaPlayer__stop_fn(MediaPlayer* __this)
{
    __this->stop();
}

// public static extern void stop_IMPL_9489(bool arg0, Android.Base.Primitives.ujobject arg1) :12546
void MediaPlayer__stop_IMPL_9489_fn(bool* arg0_, jobject* arg1_)
{
    MediaPlayer::stop_IMPL_9489(*arg0_, *arg1_);
}

jclass MediaPlayer::_javaClass2_;
jmethodID MediaPlayer::getCurrentPosition_9497_ID_;
jmethodID MediaPlayer::getDuration_9498_ID_;
jmethodID MediaPlayer::getVideoHeight_9494_ID_;
jmethodID MediaPlayer::getVideoWidth_9493_ID_;
jmethodID MediaPlayer::isPlaying_9495_ID_;
jfieldID MediaPlayer::MEDIA_ERROR_IO_9460_ID_;
jfieldID MediaPlayer::MEDIA_ERROR_MALFORMED_9461_ID_;
jfieldID MediaPlayer::MEDIA_ERROR_SERVER_DIED_9458_ID_;
jfieldID MediaPlayer::MEDIA_ERROR_TIMED_OUT_9463_ID_;
jfieldID MediaPlayer::MEDIA_ERROR_UNKNOWN_9457_ID_;
jfieldID MediaPlayer::MEDIA_ERROR_UNSUPPORTED_9462_ID_;
jmethodID MediaPlayer::MediaPlayer_9474_ID_c_;
jmethodID MediaPlayer::pause_9490_ID_;
jmethodID MediaPlayer::prepareAsync_9487_ID_;
jmethodID MediaPlayer::release_9500_ID_;
jmethodID MediaPlayer::reset_9501_ID_;
jmethodID MediaPlayer::seekTo_9496_ID_;
jmethodID MediaPlayer::setAudioStreamType_9502_ID_;
jmethodID MediaPlayer::setDataSource_9483_ID_;
jmethodID MediaPlayer::setDataSource_9485_ID_;
jmethodID MediaPlayer::setOnBufferingUpdateListener_9520_ID_;
jmethodID MediaPlayer::setOnCompletionListener_9519_ID_;
jmethodID MediaPlayer::setOnErrorListener_9524_ID_;
jmethodID MediaPlayer::setOnPreparedListener_9518_ID_;
jmethodID MediaPlayer::setOnSeekCompleteListener_9521_ID_;
jmethodID MediaPlayer::setOnVideoSizeChangedListener_9522_ID_;
jmethodID MediaPlayer::setSurface_9476_ID_;
jmethodID MediaPlayer::setVolume_9505_ID_;
jmethodID MediaPlayer::start_9488_ID_;
jmethodID MediaPlayer::stop_9489_ID_;

// public MediaPlayer() [instance] :12181
void MediaPlayer::ctor_5()
{
    uStackFrame __("Android.android.media.MediaPlayer", ".ctor()");
    ctor_4(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);
    INIT_JNI;;
    CLASS_INIT(MediaPlayer::_javaClass2(),MediaPlayer::_Init2());;
    CACHE_METHOD(MediaPlayer::MediaPlayer_9474_ID_c(),MediaPlayer::_javaClass2(),"<init>","()V",GetMethodID,"Id for fallback method android.media.MediaPlayer.<init> could not be cached",75);;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(MediaPlayer::_javaClass2(), MediaPlayer::MediaPlayer_9474_ID_c());;
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);;
    _javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

// public int getCurrentPosition() [instance] :12328
int MediaPlayer::getCurrentPosition()
{
    uStackFrame __("Android.android.media.MediaPlayer", "getCurrentPosition()");
    return MediaPlayer::getCurrentPosition_IMPL_9497(_subclassed, _javaObject);
}

// public int getDuration() [instance] :12334
int MediaPlayer::getDuration()
{
    uStackFrame __("Android.android.media.MediaPlayer", "getDuration()");
    return MediaPlayer::getDuration_IMPL_9498(_subclassed, _javaObject);
}

// public int getVideoHeight() [instance] :12310
int MediaPlayer::getVideoHeight()
{
    uStackFrame __("Android.android.media.MediaPlayer", "getVideoHeight()");
    return MediaPlayer::getVideoHeight_IMPL_9494(_subclassed, _javaObject);
}

// public int getVideoWidth() [instance] :12304
int MediaPlayer::getVideoWidth()
{
    uStackFrame __("Android.android.media.MediaPlayer", "getVideoWidth()");
    return MediaPlayer::getVideoWidth_IMPL_9493(_subclassed, _javaObject);
}

// public bool isPlaying() [instance] :12316
bool MediaPlayer::isPlaying()
{
    uStackFrame __("Android.android.media.MediaPlayer", "isPlaying()");
    return MediaPlayer::isPlaying_IMPL_9495(_subclassed, _javaObject);
}

// public void pause() [instance] :12286
void MediaPlayer::pause()
{
    uStackFrame __("Android.android.media.MediaPlayer", "pause()");
    MediaPlayer::pause_IMPL_9490(_subclassed, _javaObject);
}

// public void prepareAsync() [instance] :12268
void MediaPlayer::prepareAsync()
{
    uStackFrame __("Android.android.media.MediaPlayer", "prepareAsync()");
    MediaPlayer::prepareAsync_IMPL_9487(_subclassed, _javaObject);
}

// public void release() [instance] :12346
void MediaPlayer::release()
{
    uStackFrame __("Android.android.media.MediaPlayer", "release()");
    MediaPlayer::release_IMPL_9500(_subclassed, _javaObject);
}

// public void reset() [instance] :12352
void MediaPlayer::reset()
{
    uStackFrame __("Android.android.media.MediaPlayer", "reset()");
    MediaPlayer::reset_IMPL_9501(_subclassed, _javaObject);
}

// public void seekTo(int arg0) [instance] :12322
void MediaPlayer::seekTo(int arg0)
{
    uStackFrame __("Android.android.media.MediaPlayer", "seekTo(int)");
    int arg0_ = arg0;
    MediaPlayer::seekTo_IMPL_9496(_subclassed, _javaObject, arg0_);
}

// public void setAudioStreamType(int arg0) [instance] :12358
void MediaPlayer::setAudioStreamType(int arg0)
{
    uStackFrame __("Android.android.media.MediaPlayer", "setAudioStreamType(int)");
    int arg0_ = arg0;
    MediaPlayer::setAudioStreamType_IMPL_9502(_subclassed, _javaObject, arg0_);
}

// public void setDataSource(Android.java.io.FileDescriptor arg0, long arg1, long arg2) [instance] :12256
void MediaPlayer::setDataSource3(::g::Android::java::io::FileDescriptor* arg0, int64_t arg1, int64_t arg2)
{
    uStackFrame __("Android.android.media.MediaPlayer", "setDataSource(Android.java.io.FileDescriptor,long,long)");
    int64_t arg1_ = arg1;
    int64_t arg2_ = arg2;
    MediaPlayer::setDataSource_IMPL_9485(_subclassed, _javaObject, (uObject*)arg0, arg1_, arg2_);
}

// public void setDataSource(Android.java.lang.String arg0) [instance] :12244
void MediaPlayer::setDataSource4(::g::Android::java::lang::String* arg0)
{
    uStackFrame __("Android.android.media.MediaPlayer", "setDataSource(Android.java.lang.String)");
    MediaPlayer::setDataSource_IMPL_9483(_subclassed, _javaObject, (uObject*)arg0);
}

// public void setOnBufferingUpdateListener(Android.android.media.MediaPlayerDLROnBufferingUpdateListener arg0) [instance] :12466
void MediaPlayer::setOnBufferingUpdateListener(uObject* arg0)
{
    uStackFrame __("Android.android.media.MediaPlayer", "setOnBufferingUpdateListener(Android.android.media.MediaPlayerDLROnBufferingUpdateListener)");
    MediaPlayer::setOnBufferingUpdateListener_IMPL_9520(_subclassed, _javaObject, arg0);
}

// public void setOnCompletionListener(Android.android.media.MediaPlayerDLROnCompletionListener arg0) [instance] :12460
void MediaPlayer::setOnCompletionListener(uObject* arg0)
{
    uStackFrame __("Android.android.media.MediaPlayer", "setOnCompletionListener(Android.android.media.MediaPlayerDLROnCompletionListener)");
    MediaPlayer::setOnCompletionListener_IMPL_9519(_subclassed, _javaObject, arg0);
}

// public void setOnErrorListener(Android.android.media.MediaPlayerDLROnErrorListener arg0) [instance] :12490
void MediaPlayer::setOnErrorListener(uObject* arg0)
{
    uStackFrame __("Android.android.media.MediaPlayer", "setOnErrorListener(Android.android.media.MediaPlayerDLROnErrorListener)");
    MediaPlayer::setOnErrorListener_IMPL_9524(_subclassed, _javaObject, arg0);
}

// public void setOnPreparedListener(Android.android.media.MediaPlayerDLROnPreparedListener arg0) [instance] :12454
void MediaPlayer::setOnPreparedListener(uObject* arg0)
{
    uStackFrame __("Android.android.media.MediaPlayer", "setOnPreparedListener(Android.android.media.MediaPlayerDLROnPreparedListener)");
    MediaPlayer::setOnPreparedListener_IMPL_9518(_subclassed, _javaObject, arg0);
}

// public void setOnSeekCompleteListener(Android.android.media.MediaPlayerDLROnSeekCompleteListener arg0) [instance] :12472
void MediaPlayer::setOnSeekCompleteListener(uObject* arg0)
{
    uStackFrame __("Android.android.media.MediaPlayer", "setOnSeekCompleteListener(Android.android.media.MediaPlayerDLROnSeekCompleteListener)");
    MediaPlayer::setOnSeekCompleteListener_IMPL_9521(_subclassed, _javaObject, arg0);
}

// public void setOnVideoSizeChangedListener(Android.android.media.MediaPlayerDLROnVideoSizeChangedListener arg0) [instance] :12478
void MediaPlayer::setOnVideoSizeChangedListener(uObject* arg0)
{
    uStackFrame __("Android.android.media.MediaPlayer", "setOnVideoSizeChangedListener(Android.android.media.MediaPlayerDLROnVideoSizeChangedListener)");
    MediaPlayer::setOnVideoSizeChangedListener_IMPL_9522(_subclassed, _javaObject, arg0);
}

// public void setSurface(Android.android.view.Surface arg0) [instance] :12202
void MediaPlayer::setSurface(::g::Android::android::view::Surface* arg0)
{
    uStackFrame __("Android.android.media.MediaPlayer", "setSurface(Android.android.view.Surface)");
    MediaPlayer::setSurface_IMPL_9476(_subclassed, _javaObject, (uObject*)arg0);
}

// public void setVolume(float arg0, float arg1) [instance] :12376
void MediaPlayer::setVolume(float arg0, float arg1)
{
    uStackFrame __("Android.android.media.MediaPlayer", "setVolume(float,float)");
    float arg0_ = arg0;
    float arg1_ = arg1;
    MediaPlayer::setVolume_IMPL_9505(_subclassed, _javaObject, arg0_, arg1_);
}

// public void start() [instance] :12274
void MediaPlayer::start()
{
    uStackFrame __("Android.android.media.MediaPlayer", "start()");
    MediaPlayer::start_IMPL_9488(_subclassed, _javaObject);
}

// public void stop() [instance] :12280
void MediaPlayer::stop()
{
    uStackFrame __("Android.android.media.MediaPlayer", "stop()");
    MediaPlayer::stop_IMPL_9489(_subclassed, _javaObject);
}

// public static extern new void _Init() [static] :11838
void MediaPlayer::_Init2()
{
    uStackFrame __("Android.android.media.MediaPlayer", "_Init()");
    if (MediaPlayer::_javaClass2()) { return; }
    INIT_JNI;
    MediaPlayer::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/media/MediaPlayer"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!MediaPlayer::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.media.MediaPlayer'", 49);; }
}

// public static extern int getCurrentPosition_IMPL_9497(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :12570
int MediaPlayer::getCurrentPosition_IMPL_9497(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.media.MediaPlayer", "getCurrentPosition_IMPL_9497(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(MediaPlayer::_javaClass2(),MediaPlayer::_Init2());
    
    int result;
    CACHE_METHOD(MediaPlayer::getCurrentPosition_9497_ID(),MediaPlayer::_javaClass2(),"getCurrentPosition","()I",GetMethodID,"Id for fallback method android.media.MediaPlayer.getCurrentPosition could not be cached",87);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, MediaPlayer::_javaClass2(), MediaPlayer::getCurrentPosition_9497_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, MediaPlayer::getCurrentPosition_9497_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getDuration_IMPL_9498(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :12573
int MediaPlayer::getDuration_IMPL_9498(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.media.MediaPlayer", "getDuration_IMPL_9498(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(MediaPlayer::_javaClass2(),MediaPlayer::_Init2());
    
    int result;
    CACHE_METHOD(MediaPlayer::getDuration_9498_ID(),MediaPlayer::_javaClass2(),"getDuration","()I",GetMethodID,"Id for fallback method android.media.MediaPlayer.getDuration could not be cached",80);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, MediaPlayer::_javaClass2(), MediaPlayer::getDuration_9498_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, MediaPlayer::getDuration_9498_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getVideoHeight_IMPL_9494(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :12561
int MediaPlayer::getVideoHeight_IMPL_9494(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.media.MediaPlayer", "getVideoHeight_IMPL_9494(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(MediaPlayer::_javaClass2(),MediaPlayer::_Init2());
    
    int result;
    CACHE_METHOD(MediaPlayer::getVideoHeight_9494_ID(),MediaPlayer::_javaClass2(),"getVideoHeight","()I",GetMethodID,"Id for fallback method android.media.MediaPlayer.getVideoHeight could not be cached",83);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, MediaPlayer::_javaClass2(), MediaPlayer::getVideoHeight_9494_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, MediaPlayer::getVideoHeight_9494_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int getVideoWidth_IMPL_9493(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :12558
int MediaPlayer::getVideoWidth_IMPL_9493(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.media.MediaPlayer", "getVideoWidth_IMPL_9493(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(MediaPlayer::_javaClass2(),MediaPlayer::_Init2());
    
    int result;
    CACHE_METHOD(MediaPlayer::getVideoWidth_9493_ID(),MediaPlayer::_javaClass2(),"getVideoWidth","()I",GetMethodID,"Id for fallback method android.media.MediaPlayer.getVideoWidth could not be cached",82);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, MediaPlayer::_javaClass2(), MediaPlayer::getVideoWidth_9493_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, MediaPlayer::getVideoWidth_9493_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern bool isPlaying_IMPL_9495(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :12564
bool MediaPlayer::isPlaying_IMPL_9495(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.media.MediaPlayer", "isPlaying_IMPL_9495(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(MediaPlayer::_javaClass2(),MediaPlayer::_Init2());
    
    bool result;
    CACHE_METHOD(MediaPlayer::isPlaying_9495_ID(),MediaPlayer::_javaClass2(),"isPlaying","()Z",GetMethodID,"Id for fallback method android.media.MediaPlayer.isPlaying could not be cached",78);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, MediaPlayer::_javaClass2(), MediaPlayer::isPlaying_9495_ID()));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, MediaPlayer::isPlaying_9495_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public MediaPlayer New() [static] :12181
MediaPlayer* MediaPlayer::New5()
{
    MediaPlayer* obj2 = (MediaPlayer*)uNew(MediaPlayer_typeof());
    obj2->ctor_5();
    return obj2;
}

// public static extern void pause_IMPL_9490(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :12549
void MediaPlayer::pause_IMPL_9490(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.media.MediaPlayer", "pause_IMPL_9490(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(MediaPlayer::_javaClass2(),MediaPlayer::_Init2());
    
    CACHE_METHOD(MediaPlayer::pause_9490_ID(),MediaPlayer::_javaClass2(),"pause","()V",GetMethodID,"Id for fallback method android.media.MediaPlayer.pause could not be cached",74);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, MediaPlayer::_javaClass2(), MediaPlayer::pause_9490_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, MediaPlayer::pause_9490_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void prepareAsync_IMPL_9487(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :12540
void MediaPlayer::prepareAsync_IMPL_9487(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.media.MediaPlayer", "prepareAsync_IMPL_9487(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(MediaPlayer::_javaClass2(),MediaPlayer::_Init2());
    
    CACHE_METHOD(MediaPlayer::prepareAsync_9487_ID(),MediaPlayer::_javaClass2(),"prepareAsync","()V",GetMethodID,"Id for fallback method android.media.MediaPlayer.prepareAsync could not be cached",81);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, MediaPlayer::_javaClass2(), MediaPlayer::prepareAsync_9487_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, MediaPlayer::prepareAsync_9487_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void release_IMPL_9500(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :12579
void MediaPlayer::release_IMPL_9500(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.media.MediaPlayer", "release_IMPL_9500(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(MediaPlayer::_javaClass2(),MediaPlayer::_Init2());
    
    CACHE_METHOD(MediaPlayer::release_9500_ID(),MediaPlayer::_javaClass2(),"release","()V",GetMethodID,"Id for fallback method android.media.MediaPlayer.release could not be cached",76);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, MediaPlayer::_javaClass2(), MediaPlayer::release_9500_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, MediaPlayer::release_9500_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void reset_IMPL_9501(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :12582
void MediaPlayer::reset_IMPL_9501(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.media.MediaPlayer", "reset_IMPL_9501(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(MediaPlayer::_javaClass2(),MediaPlayer::_Init2());
    
    CACHE_METHOD(MediaPlayer::reset_9501_ID(),MediaPlayer::_javaClass2(),"reset","()V",GetMethodID,"Id for fallback method android.media.MediaPlayer.reset could not be cached",74);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, MediaPlayer::_javaClass2(), MediaPlayer::reset_9501_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, MediaPlayer::reset_9501_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void seekTo_IMPL_9496(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :12567
void MediaPlayer::seekTo_IMPL_9496(bool arg0_, jobject arg1_, int arg2_)
{
    uStackFrame __("Android.android.media.MediaPlayer", "seekTo_IMPL_9496(bool,Android.Base.Primitives.ujobject,int)");
    INIT_JNI;
    CLASS_INIT(MediaPlayer::_javaClass2(),MediaPlayer::_Init2());
    
    CACHE_METHOD(MediaPlayer::seekTo_9496_ID(),MediaPlayer::_javaClass2(),"seekTo","(I)V",GetMethodID,"Id for fallback method android.media.MediaPlayer.seekTo could not be cached",75);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, MediaPlayer::_javaClass2(), MediaPlayer::seekTo_9496_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, MediaPlayer::seekTo_9496_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setAudioStreamType_IMPL_9502(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :12585
void MediaPlayer::setAudioStreamType_IMPL_9502(bool arg0_, jobject arg1_, int arg2_)
{
    uStackFrame __("Android.android.media.MediaPlayer", "setAudioStreamType_IMPL_9502(bool,Android.Base.Primitives.ujobject,int)");
    INIT_JNI;
    CLASS_INIT(MediaPlayer::_javaClass2(),MediaPlayer::_Init2());
    
    CACHE_METHOD(MediaPlayer::setAudioStreamType_9502_ID(),MediaPlayer::_javaClass2(),"setAudioStreamType","(I)V",GetMethodID,"Id for fallback method android.media.MediaPlayer.setAudioStreamType could not be cached",87);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, MediaPlayer::_javaClass2(), MediaPlayer::setAudioStreamType_9502_ID(), ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, MediaPlayer::setAudioStreamType_9502_ID(), ((jint)arg2_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setDataSource_IMPL_9483(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :12528
void MediaPlayer::setDataSource_IMPL_9483(bool arg0_, jobject arg1_, uObject* arg2_)
{
    uStackFrame __("Android.android.media.MediaPlayer", "setDataSource_IMPL_9483(bool,Android.Base.Primitives.ujobject,Android.Base.Wrappers.IJWrapper)");
    INIT_JNI;
    CLASS_INIT(MediaPlayer::_javaClass2(),MediaPlayer::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(MediaPlayer::setDataSource_9483_ID(),MediaPlayer::_javaClass2(),"setDataSource","(Ljava/lang/String;)V",GetMethodID,"Id for fallback method android.media.MediaPlayer.setDataSource could not be cached",82);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, MediaPlayer::_javaClass2(), MediaPlayer::setDataSource_9483_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, MediaPlayer::setDataSource_9483_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setDataSource_IMPL_9485(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2, long arg3, long arg4) [static] :12534
void MediaPlayer::setDataSource_IMPL_9485(bool arg0_, jobject arg1_, uObject* arg2_, int64_t arg3_, int64_t arg4_)
{
    uStackFrame __("Android.android.media.MediaPlayer", "setDataSource_IMPL_9485(bool,Android.Base.Primitives.ujobject,Android.Base.Wrappers.IJWrapper,long,long)");
    INIT_JNI;
    CLASS_INIT(MediaPlayer::_javaClass2(),MediaPlayer::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(MediaPlayer::setDataSource_9485_ID(),MediaPlayer::_javaClass2(),"setDataSource","(Ljava/io/FileDescriptor;JJ)V",GetMethodID,"Id for fallback method android.media.MediaPlayer.setDataSource could not be cached",82);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, MediaPlayer::_javaClass2(), MediaPlayer::setDataSource_9485_ID(), _obArg2, ((jlong)arg3_), ((jlong)arg4_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, MediaPlayer::setDataSource_9485_ID(), _obArg2, ((jlong)arg3_), ((jlong)arg4_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setOnBufferingUpdateListener_IMPL_9520(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :12639
void MediaPlayer::setOnBufferingUpdateListener_IMPL_9520(bool arg0_, jobject arg1_, uObject* arg2_)
{
    uStackFrame __("Android.android.media.MediaPlayer", "setOnBufferingUpdateListener_IMPL_9520(bool,Android.Base.Primitives.ujobject,Android.Base.Wrappers.IJWrapper)");
    INIT_JNI;
    CLASS_INIT(MediaPlayer::_javaClass2(),MediaPlayer::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(MediaPlayer::setOnBufferingUpdateListener_9520_ID(),MediaPlayer::_javaClass2(),"setOnBufferingUpdateListener","(Landroid/media/MediaPlayer$OnBufferingUpdateListener;)V",GetMethodID,"Id for fallback method android.media.MediaPlayer.setOnBufferingUpdateListener could not be cached",97);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, MediaPlayer::_javaClass2(), MediaPlayer::setOnBufferingUpdateListener_9520_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, MediaPlayer::setOnBufferingUpdateListener_9520_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setOnCompletionListener_IMPL_9519(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :12636
void MediaPlayer::setOnCompletionListener_IMPL_9519(bool arg0_, jobject arg1_, uObject* arg2_)
{
    uStackFrame __("Android.android.media.MediaPlayer", "setOnCompletionListener_IMPL_9519(bool,Android.Base.Primitives.ujobject,Android.Base.Wrappers.IJWrapper)");
    INIT_JNI;
    CLASS_INIT(MediaPlayer::_javaClass2(),MediaPlayer::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(MediaPlayer::setOnCompletionListener_9519_ID(),MediaPlayer::_javaClass2(),"setOnCompletionListener","(Landroid/media/MediaPlayer$OnCompletionListener;)V",GetMethodID,"Id for fallback method android.media.MediaPlayer.setOnCompletionListener could not be cached",92);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, MediaPlayer::_javaClass2(), MediaPlayer::setOnCompletionListener_9519_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, MediaPlayer::setOnCompletionListener_9519_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setOnErrorListener_IMPL_9524(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :12651
void MediaPlayer::setOnErrorListener_IMPL_9524(bool arg0_, jobject arg1_, uObject* arg2_)
{
    uStackFrame __("Android.android.media.MediaPlayer", "setOnErrorListener_IMPL_9524(bool,Android.Base.Primitives.ujobject,Android.Base.Wrappers.IJWrapper)");
    INIT_JNI;
    CLASS_INIT(MediaPlayer::_javaClass2(),MediaPlayer::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(MediaPlayer::setOnErrorListener_9524_ID(),MediaPlayer::_javaClass2(),"setOnErrorListener","(Landroid/media/MediaPlayer$OnErrorListener;)V",GetMethodID,"Id for fallback method android.media.MediaPlayer.setOnErrorListener could not be cached",87);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, MediaPlayer::_javaClass2(), MediaPlayer::setOnErrorListener_9524_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, MediaPlayer::setOnErrorListener_9524_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setOnPreparedListener_IMPL_9518(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :12633
void MediaPlayer::setOnPreparedListener_IMPL_9518(bool arg0_, jobject arg1_, uObject* arg2_)
{
    uStackFrame __("Android.android.media.MediaPlayer", "setOnPreparedListener_IMPL_9518(bool,Android.Base.Primitives.ujobject,Android.Base.Wrappers.IJWrapper)");
    INIT_JNI;
    CLASS_INIT(MediaPlayer::_javaClass2(),MediaPlayer::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(MediaPlayer::setOnPreparedListener_9518_ID(),MediaPlayer::_javaClass2(),"setOnPreparedListener","(Landroid/media/MediaPlayer$OnPreparedListener;)V",GetMethodID,"Id for fallback method android.media.MediaPlayer.setOnPreparedListener could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, MediaPlayer::_javaClass2(), MediaPlayer::setOnPreparedListener_9518_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, MediaPlayer::setOnPreparedListener_9518_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setOnSeekCompleteListener_IMPL_9521(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :12642
void MediaPlayer::setOnSeekCompleteListener_IMPL_9521(bool arg0_, jobject arg1_, uObject* arg2_)
{
    uStackFrame __("Android.android.media.MediaPlayer", "setOnSeekCompleteListener_IMPL_9521(bool,Android.Base.Primitives.ujobject,Android.Base.Wrappers.IJWrapper)");
    INIT_JNI;
    CLASS_INIT(MediaPlayer::_javaClass2(),MediaPlayer::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(MediaPlayer::setOnSeekCompleteListener_9521_ID(),MediaPlayer::_javaClass2(),"setOnSeekCompleteListener","(Landroid/media/MediaPlayer$OnSeekCompleteListener;)V",GetMethodID,"Id for fallback method android.media.MediaPlayer.setOnSeekCompleteListener could not be cached",94);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, MediaPlayer::_javaClass2(), MediaPlayer::setOnSeekCompleteListener_9521_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, MediaPlayer::setOnSeekCompleteListener_9521_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setOnVideoSizeChangedListener_IMPL_9522(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :12645
void MediaPlayer::setOnVideoSizeChangedListener_IMPL_9522(bool arg0_, jobject arg1_, uObject* arg2_)
{
    uStackFrame __("Android.android.media.MediaPlayer", "setOnVideoSizeChangedListener_IMPL_9522(bool,Android.Base.Primitives.ujobject,Android.Base.Wrappers.IJWrapper)");
    INIT_JNI;
    CLASS_INIT(MediaPlayer::_javaClass2(),MediaPlayer::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(MediaPlayer::setOnVideoSizeChangedListener_9522_ID(),MediaPlayer::_javaClass2(),"setOnVideoSizeChangedListener","(Landroid/media/MediaPlayer$OnVideoSizeChangedListener;)V",GetMethodID,"Id for fallback method android.media.MediaPlayer.setOnVideoSizeChangedListener could not be cached",98);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, MediaPlayer::_javaClass2(), MediaPlayer::setOnVideoSizeChangedListener_9522_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, MediaPlayer::setOnVideoSizeChangedListener_9522_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setSurface_IMPL_9476(bool arg0, Android.Base.Primitives.ujobject arg1, Android.Base.Wrappers.IJWrapper arg2) [static] :12507
void MediaPlayer::setSurface_IMPL_9476(bool arg0_, jobject arg1_, uObject* arg2_)
{
    uStackFrame __("Android.android.media.MediaPlayer", "setSurface_IMPL_9476(bool,Android.Base.Primitives.ujobject,Android.Base.Wrappers.IJWrapper)");
    INIT_JNI;
    CLASS_INIT(MediaPlayer::_javaClass2(),MediaPlayer::_Init2());
    jobject _obArg2 = ((!arg2_) ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(arg2_, ::g::Android::Base::Wrappers::IJWrapper_typeof())));
    CACHE_METHOD(MediaPlayer::setSurface_9476_ID(),MediaPlayer::_javaClass2(),"setSurface","(Landroid/view/Surface;)V",GetMethodID,"Id for fallback method android.media.MediaPlayer.setSurface could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, MediaPlayer::_javaClass2(), MediaPlayer::setSurface_9476_ID(), _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, MediaPlayer::setSurface_9476_ID(), _obArg2);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void setVolume_IMPL_9505(bool arg0, Android.Base.Primitives.ujobject arg1, float arg2, float arg3) [static] :12594
void MediaPlayer::setVolume_IMPL_9505(bool arg0_, jobject arg1_, float arg2_, float arg3_)
{
    uStackFrame __("Android.android.media.MediaPlayer", "setVolume_IMPL_9505(bool,Android.Base.Primitives.ujobject,float,float)");
    INIT_JNI;
    CLASS_INIT(MediaPlayer::_javaClass2(),MediaPlayer::_Init2());
    
    CACHE_METHOD(MediaPlayer::setVolume_9505_ID(),MediaPlayer::_javaClass2(),"setVolume","(FF)V",GetMethodID,"Id for fallback method android.media.MediaPlayer.setVolume could not be cached",78);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, MediaPlayer::_javaClass2(), MediaPlayer::setVolume_9505_ID(), ((jfloat)arg2_), ((jfloat)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, MediaPlayer::setVolume_9505_ID(), ((jfloat)arg2_), ((jfloat)arg3_));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void start_IMPL_9488(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :12543
void MediaPlayer::start_IMPL_9488(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.media.MediaPlayer", "start_IMPL_9488(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(MediaPlayer::_javaClass2(),MediaPlayer::_Init2());
    
    CACHE_METHOD(MediaPlayer::start_9488_ID(),MediaPlayer::_javaClass2(),"start","()V",GetMethodID,"Id for fallback method android.media.MediaPlayer.start could not be cached",74);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, MediaPlayer::_javaClass2(), MediaPlayer::start_9488_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, MediaPlayer::start_9488_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static extern void stop_IMPL_9489(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :12546
void MediaPlayer::stop_IMPL_9489(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.media.MediaPlayer", "stop_IMPL_9489(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(MediaPlayer::_javaClass2(),MediaPlayer::_Init2());
    
    CACHE_METHOD(MediaPlayer::stop_9489_ID(),MediaPlayer::_javaClass2(),"stop","()V",GetMethodID,"Id for fallback method android.media.MediaPlayer.stop could not be cached",73);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, MediaPlayer::_javaClass2(), MediaPlayer::stop_9489_ID());
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, MediaPlayer::stop_9489_ID());
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
}

// public static int get_MEDIA_ERROR_IO() [static] :11945
int MediaPlayer::MEDIA_ERROR_IO()
{
    uStackFrame __("Android.android.media.MediaPlayer", "get_MEDIA_ERROR_IO()");
    INIT_JNI;
    CLASS_INIT(MediaPlayer::_javaClass2(),MediaPlayer::_Init2());
    if (::uEnterCriticalIfNull(&MediaPlayer::MEDIA_ERROR_IO_9460_ID())) {;
    CACHE_FIELD(MediaPlayer::MEDIA_ERROR_IO_9460_ID(),MediaPlayer::_javaClass2(),"MEDIA_ERROR_IO","I",GetStaticFieldID,"Id for field MediaPlayer.MEDIA_ERROR_IO could not be cached",59);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(MediaPlayer::_javaClass2(), MediaPlayer::MEDIA_ERROR_IO_9460_ID()));;
    return result;
}

// public static int get_MEDIA_ERROR_MALFORMED() [static] :11962
int MediaPlayer::MEDIA_ERROR_MALFORMED()
{
    uStackFrame __("Android.android.media.MediaPlayer", "get_MEDIA_ERROR_MALFORMED()");
    INIT_JNI;
    CLASS_INIT(MediaPlayer::_javaClass2(),MediaPlayer::_Init2());
    if (::uEnterCriticalIfNull(&MediaPlayer::MEDIA_ERROR_MALFORMED_9461_ID())) {;
    CACHE_FIELD(MediaPlayer::MEDIA_ERROR_MALFORMED_9461_ID(),MediaPlayer::_javaClass2(),"MEDIA_ERROR_MALFORMED","I",GetStaticFieldID,"Id for field MediaPlayer.MEDIA_ERROR_MALFORMED could not be cached",66);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(MediaPlayer::_javaClass2(), MediaPlayer::MEDIA_ERROR_MALFORMED_9461_ID()));;
    return result;
}

// public static int get_MEDIA_ERROR_SERVER_DIED() [static] :11911
int MediaPlayer::MEDIA_ERROR_SERVER_DIED()
{
    uStackFrame __("Android.android.media.MediaPlayer", "get_MEDIA_ERROR_SERVER_DIED()");
    INIT_JNI;
    CLASS_INIT(MediaPlayer::_javaClass2(),MediaPlayer::_Init2());
    if (::uEnterCriticalIfNull(&MediaPlayer::MEDIA_ERROR_SERVER_DIED_9458_ID())) {;
    CACHE_FIELD(MediaPlayer::MEDIA_ERROR_SERVER_DIED_9458_ID(),MediaPlayer::_javaClass2(),"MEDIA_ERROR_SERVER_DIED","I",GetStaticFieldID,"Id for field MediaPlayer.MEDIA_ERROR_SERVER_DIED could not be cached",68);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(MediaPlayer::_javaClass2(), MediaPlayer::MEDIA_ERROR_SERVER_DIED_9458_ID()));;
    return result;
}

// public static int get_MEDIA_ERROR_TIMED_OUT() [static] :11996
int MediaPlayer::MEDIA_ERROR_TIMED_OUT()
{
    uStackFrame __("Android.android.media.MediaPlayer", "get_MEDIA_ERROR_TIMED_OUT()");
    INIT_JNI;
    CLASS_INIT(MediaPlayer::_javaClass2(),MediaPlayer::_Init2());
    if (::uEnterCriticalIfNull(&MediaPlayer::MEDIA_ERROR_TIMED_OUT_9463_ID())) {;
    CACHE_FIELD(MediaPlayer::MEDIA_ERROR_TIMED_OUT_9463_ID(),MediaPlayer::_javaClass2(),"MEDIA_ERROR_TIMED_OUT","I",GetStaticFieldID,"Id for field MediaPlayer.MEDIA_ERROR_TIMED_OUT could not be cached",66);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(MediaPlayer::_javaClass2(), MediaPlayer::MEDIA_ERROR_TIMED_OUT_9463_ID()));;
    return result;
}

// public static int get_MEDIA_ERROR_UNKNOWN() [static] :11894
int MediaPlayer::MEDIA_ERROR_UNKNOWN()
{
    uStackFrame __("Android.android.media.MediaPlayer", "get_MEDIA_ERROR_UNKNOWN()");
    INIT_JNI;
    CLASS_INIT(MediaPlayer::_javaClass2(),MediaPlayer::_Init2());
    if (::uEnterCriticalIfNull(&MediaPlayer::MEDIA_ERROR_UNKNOWN_9457_ID())) {;
    CACHE_FIELD(MediaPlayer::MEDIA_ERROR_UNKNOWN_9457_ID(),MediaPlayer::_javaClass2(),"MEDIA_ERROR_UNKNOWN","I",GetStaticFieldID,"Id for field MediaPlayer.MEDIA_ERROR_UNKNOWN could not be cached",64);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(MediaPlayer::_javaClass2(), MediaPlayer::MEDIA_ERROR_UNKNOWN_9457_ID()));;
    return result;
}

// public static int get_MEDIA_ERROR_UNSUPPORTED() [static] :11979
int MediaPlayer::MEDIA_ERROR_UNSUPPORTED()
{
    uStackFrame __("Android.android.media.MediaPlayer", "get_MEDIA_ERROR_UNSUPPORTED()");
    INIT_JNI;
    CLASS_INIT(MediaPlayer::_javaClass2(),MediaPlayer::_Init2());
    if (::uEnterCriticalIfNull(&MediaPlayer::MEDIA_ERROR_UNSUPPORTED_9462_ID())) {;
    CACHE_FIELD(MediaPlayer::MEDIA_ERROR_UNSUPPORTED_9462_ID(),MediaPlayer::_javaClass2(),"MEDIA_ERROR_UNSUPPORTED","I",GetStaticFieldID,"Id for field MediaPlayer.MEDIA_ERROR_UNSUPPORTED could not be cached",68);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(MediaPlayer::_javaClass2(), MediaPlayer::MEDIA_ERROR_UNSUPPORTED_9462_ID()));;
    return result;
}
// }

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\Android\android\media\$.uno(18717)
// --------------------------------------------------------------------------------

// public abstract extern interface MediaPlayerDLROnBufferingUpdateListener :18717
// {
uInterfaceType* MediaPlayerDLROnBufferingUpdateListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.media.MediaPlayerDLROnBufferingUpdateListener", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("onBufferingUpdate", NULL, NULL, offsetof(MediaPlayerDLROnBufferingUpdateListener, fp_onBufferingUpdate), false, uVoid_typeof(), 2, ::g::Android::android::media::MediaPlayer_typeof(), ::g::Uno::Int_typeof()));
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\Android\android\media\$.uno(18734)
// --------------------------------------------------------------------------------

// public abstract extern interface MediaPlayerDLROnCompletionListener :18734
// {
uInterfaceType* MediaPlayerDLROnCompletionListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.media.MediaPlayerDLROnCompletionListener", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("onCompletion", NULL, NULL, offsetof(MediaPlayerDLROnCompletionListener, fp_onCompletion), false, uVoid_typeof(), 1, ::g::Android::android::media::MediaPlayer_typeof()));
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\Android\android\media\$.uno(18751)
// --------------------------------------------------------------------------------

// public abstract extern interface MediaPlayerDLROnErrorListener :18751
// {
uInterfaceType* MediaPlayerDLROnErrorListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.media.MediaPlayerDLROnErrorListener", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("onError", NULL, NULL, offsetof(MediaPlayerDLROnErrorListener, fp_onError), false, ::g::Uno::Bool_typeof(), 3, ::g::Android::android::media::MediaPlayer_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()));
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\Android\android\media\$.uno(18785)
// --------------------------------------------------------------------------------

// public abstract extern interface MediaPlayerDLROnPreparedListener :18785
// {
uInterfaceType* MediaPlayerDLROnPreparedListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.media.MediaPlayerDLROnPreparedListener", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("onPrepared", NULL, NULL, offsetof(MediaPlayerDLROnPreparedListener, fp_onPrepared), false, uVoid_typeof(), 1, ::g::Android::android::media::MediaPlayer_typeof()));
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\Android\android\media\$.uno(18802)
// --------------------------------------------------------------------------------

// public abstract extern interface MediaPlayerDLROnSeekCompleteListener :18802
// {
uInterfaceType* MediaPlayerDLROnSeekCompleteListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.media.MediaPlayerDLROnSeekCompleteListener", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("onSeekComplete", NULL, NULL, offsetof(MediaPlayerDLROnSeekCompleteListener, fp_onSeekComplete), false, uVoid_typeof(), 1, ::g::Android::android::media::MediaPlayer_typeof()));
    return type;
}
// }

// ..\..\ProgramData\Uno\Packages\Android\0.24.0\Android\android\media\$.uno(18836)
// --------------------------------------------------------------------------------

// public abstract extern interface MediaPlayerDLROnVideoSizeChangedListener :18836
// {
uInterfaceType* MediaPlayerDLROnVideoSizeChangedListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.media.MediaPlayerDLROnVideoSizeChangedListener", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("onVideoSizeChanged", NULL, NULL, offsetof(MediaPlayerDLROnVideoSizeChangedListener, fp_onVideoSizeChanged), false, uVoid_typeof(), 3, ::g::Android::android::media::MediaPlayer_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()));
    return type;
}
// }

}}}} // ::g::Android::android::media

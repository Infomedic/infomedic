// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.24.7\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.IPulseTrigger.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Uno.Bool.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileFalse;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileFalse :1376
// {
::g::Fuse::Triggers::WhileValue_type* WhileFalse_typeof();
void WhileFalse__ctor_5_fn(WhileFalse* __this);
void WhileFalse__get_IsOn_fn(WhileFalse* __this, bool* __retval);
void WhileFalse__New1_fn(WhileFalse** __retval);

struct WhileFalse : ::g::Fuse::Triggers::WhileBool
{
    void ctor_5();
    static WhileFalse* New1();
};
// }

}}} // ::g::Fuse::Triggers

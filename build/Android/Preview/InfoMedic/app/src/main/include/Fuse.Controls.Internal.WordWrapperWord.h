// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.24.7\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Internal{struct WordWrapperWord;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Internal{

// internal sealed class WordWrapperWord :272
// {
uType* WordWrapperWord_typeof();
void WordWrapperWord__ctor__fn(WordWrapperWord* __this, uString* contents, uString* whitespace, int* startIndex, float* contentsWidth, float* totalContentsWidth);
void WordWrapperWord__get_EndIndex_fn(WordWrapperWord* __this, int* __retval);
void WordWrapperWord__New1_fn(uString* contents, uString* whitespace, int* startIndex, float* contentsWidth, float* totalContentsWidth, WordWrapperWord** __retval);

struct WordWrapperWord : uObject
{
    uStrong<uString*> Contents;
    float ContentsWidth;
    int StartIndex;
    uStrong<uString*> TotalContents;
    float TotalContentsWidth;
    uStrong<uString*> Whitespace;

    void ctor_(uString* contents, uString* whitespace, int startIndex, float contentsWidth, float totalContentsWidth);
    int EndIndex();
    static WordWrapperWord* New1(uString* contents, uString* whitespace, int startIndex, float contentsWidth, float totalContentsWidth);
};
// }

}}}} // ::g::Fuse::Controls::Internal

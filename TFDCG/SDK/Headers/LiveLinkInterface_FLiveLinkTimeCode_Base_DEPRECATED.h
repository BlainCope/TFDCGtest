#pragma once

/**
 * ----------------------------------------
 * |        Generated By CheatGear        |
 * ----------------------------------------
 * | Game:    TFDCG                       |
 * | Version: 1                           |
 * | Date:    08/22/2024                  |
 * ----------------------------------------
 */

#include <cstdint>
#include <vector>
#include <string>
#include "LiveLinkInterface_FLiveLinkFrameRate.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::LiveLinkInterface
{
    /**
     * ScriptStruct /Script/LiveLinkInterface.LiveLinkTimeCode_Base_DEPRECATED
     * Size -> 0x0010
     */
    struct FLiveLinkTimeCode_Base_DEPRECATED
    {
    public:
        int32_t                                                      Seconds;                                                 //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      Frames;                                                  //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        LiveLinkInterface::FLiveLinkFrameRate                        FrameRate;                                               //  NoDestructor, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

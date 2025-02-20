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

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::MotionWarping { class UAnimNotifyState_MotionWarping; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MotionWarping
{
    /**
     * ScriptStruct /Script/MotionWarping.MotionWarpingWindowData
     * Size -> 0x0010
     */
    struct FMotionWarpingWindowData
    {
    public:
        MotionWarping::UAnimNotifyState_MotionWarping*               AnimNotify;                                              //  Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        StartTime;                                               //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        EndTime;                                                 //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

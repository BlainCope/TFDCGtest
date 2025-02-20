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
#include "Engine_FBoneReference.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AnimationWarpingRuntime
{
    /**
     * ScriptStruct /Script/AnimationWarpingRuntime.SlopeWarpingFootDefinition
     * Size -> 0x0028
     */
    struct FSlopeWarpingFootDefinition
    {
    public:
        Engine::FBoneReference                                       IKFootBone;                                              //  Edit, NoDestructor, NativeAccessSpecifierPublic
        Engine::FBoneReference                                       FKFootBone;                                              //  Edit, NoDestructor, NativeAccessSpecifierPublic
        int32_t                                                      NumBonesInLimb;                                          //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        FootSize;                                                //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

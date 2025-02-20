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
#include "BasicTypes_TArray.h"
#include "AnimGraphRuntime_FAnimNode_SkeletalControlBase.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AnimGraphRuntime
{
    /**
     * ScriptStruct /Script/AnimGraphRuntime.AnimNode_HandIKRetargeting
     * Size -> 0x0058 (FullSize[0x0120] - InheritedSize[0x00C8])
     */
    struct FAnimNode_HandIKRetargeting : public AnimGraphRuntime::FAnimNode_SkeletalControlBase
    {
    public:
        Engine::FBoneReference                                       RightHandFK;                                             //  Edit, NoDestructor, NativeAccessSpecifierPublic
        Engine::FBoneReference                                       LeftHandFK;                                              //  Edit, NoDestructor, NativeAccessSpecifierPublic
        Engine::FBoneReference                                       RightHandIK;                                             //  Edit, NoDestructor, NativeAccessSpecifierPublic
        Engine::FBoneReference                                       LeftHandIK;                                              //  Edit, NoDestructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::FBoneReference>                   IKBonesToMove;                                           //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        float                                                        HandFKWeight;                                            //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

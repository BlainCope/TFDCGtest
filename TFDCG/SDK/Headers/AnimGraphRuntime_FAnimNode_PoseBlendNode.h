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
#include "Engine_FPoseLink.h"
#include "Engine_ENUMS.h"
#include "AnimGraphRuntime_FAnimNode_PoseHandler.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UCurveFloat; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AnimGraphRuntime
{
    /**
     * ScriptStruct /Script/AnimGraphRuntime.AnimNode_PoseBlendNode
     * Size -> 0x0020 (FullSize[0x00B8] - InheritedSize[0x0098])
     */
    struct FAnimNode_PoseBlendNode : public AnimGraphRuntime::FAnimNode_PoseHandler
    {
    public:
        Engine::FPoseLink                                            SourcePose;                                              //  Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic
        Engine::EAlphaBlendOption                                    BlendOption;                                             //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UCurveFloat*                                         CustomCurve;                                             //  Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

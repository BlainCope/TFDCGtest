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
#include "Engine_FComponentSpacePoseLink.h"
#include "Engine_ENUMS.h"
#include "Engine_FInputScaleBias.h"
#include "Engine_FInputAlphaBoolBlend.h"
#include "BasicTypes_FName.h"
#include "Engine_FInputScaleBiasClamp.h"
#include "Engine_FAnimNode_Base.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AnimGraphRuntime
{
    /**
     * ScriptStruct /Script/AnimGraphRuntime.AnimNode_SkeletalControlBase
     * Size -> 0x00B8 (FullSize[0x00C8] - InheritedSize[0x0010])
     */
    struct FAnimNode_SkeletalControlBase : public Engine::FAnimNode_Base
    {
    public:
        Engine::FComponentSpacePoseLink                              ComponentPose;                                           //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        int32_t                                                      LODThreshold;                                            //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        ActualAlpha;                                             //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::EAnimAlphaInputType                                  AlphaInputType;                                          //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bAlphaBoolEnabled;                                       //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x2];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        Alpha;                                                   //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::FInputScaleBias                                      AlphaScaleBias;                                          //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        Engine::FInputAlphaBoolBlend                                 AlphaBoolBlend;                                          //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        BasicTypes::FName                                            AlphaCurveName;                                          //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::FInputScaleBiasClamp                                 AlphaScaleBiasClamp;                                     //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x10];                                  //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

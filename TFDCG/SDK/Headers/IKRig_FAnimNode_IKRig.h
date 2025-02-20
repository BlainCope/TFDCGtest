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
#include "BasicTypes_TArray.h"
#include "IKRig_FIKRigGoal.h"
#include "Engine_ENUMS.h"
#include "Engine_FInputScaleBias.h"
#include "Engine_FInputAlphaBoolBlend.h"
#include "BasicTypes_FName.h"
#include "Engine_FInputScaleBiasClamp.h"
#include "Engine_FAnimNode_CustomProperty.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::IKRig { class UIKRigDefinition; };
namespace CG::IKRig { class UIKRigProcessor; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::IKRig
{
    /**
     * ScriptStruct /Script/IKRig.AnimNode_IKRig
     * Size -> 0x0188 (FullSize[0x01E0] - InheritedSize[0x0058])
     */
    struct FAnimNode_IKRig : public Engine::FAnimNode_CustomProperty
    {
    public:
        Engine::FPoseLink                                            Source;                                                  //  Edit, NoDestructor, NativeAccessSpecifierPublic
        IKRig::UIKRigDefinition*                                     RigDefinitionAsset;                                      //  Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<IKRig::FIKRigGoal>                        Goals;                                                   //  Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
        bool                                                         bStartFromRefPose;                                       //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::EAnimAlphaInputType                                  AlphaInputType;                                          //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bAlphaBoolEnabled;                                       //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x1];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        Alpha;                                                   //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::FInputScaleBias                                      AlphaScaleBias;                                          //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        Engine::FInputAlphaBoolBlend                                 AlphaBoolBlend;                                          //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        BasicTypes::FName                                            AlphaCurveName;                                          //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::FInputScaleBiasClamp                                 AlphaScaleBiasClamp;                                     //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        IKRig::UIKRigProcessor*                                      IKRigProcessor;                                          //  ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0001[0xC0];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        ActualAlpha;                                             //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0002[0x4];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

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
#include "CoreUObject_ENUMS.h"
#include "Engine_FRuntimeFloatCurve.h"
#include "Engine_FInputScaleBiasClamp.h"
#include "BasicTypes_TArray.h"
#include "AnimGraphRuntime_FRotationLimit.h"
#include "CoreUObject_FVector.h"
#include "AnimGraphRuntime_FAnimPhysPlanarLimit.h"
#include "AnimGraphRuntime_FAnimNode_SkeletalControlBase.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AnimGraphRuntime
{
    /**
     * ScriptStruct /Script/AnimGraphRuntime.AnimNode_Trail
     * Size -> 0x0198 (FullSize[0x0260] - InheritedSize[0x00C8])
     */
    struct FAnimNode_Trail : public AnimGraphRuntime::FAnimNode_SkeletalControlBase
    {
    public:
        uint8_t                                                      UnknownData_0000[0x38];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::FBoneReference                                       TrailBone;                                               //  Edit, NoDestructor, NativeAccessSpecifierPublic
        int32_t                                                      ChainLength;                                             //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::EAxis                                           ChainBoneAxis;                                           //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bInvertChainBoneAxis : 1;                                //  BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bLimitStretch : 1;                                       //  BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bLimitRotation : 1;                                      //  BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bUsePlanarLimit : 1;                                     //  BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bActorSpaceFakeVel : 1;                                  //  BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bReorientParentToChild : 1;                              //  BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x2];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        MaxDeltaTime;                                            //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        RelaxationSpeedScale;                                    //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::FRuntimeFloatCurve                                   TrailRelaxationSpeed;                                    //  Edit, NativeAccessSpecifierPublic
        Engine::FInputScaleBiasClamp                                 RelaxationSpeedScaleInputProcessor;                      //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<AnimGraphRuntime::FRotationLimit>         RotationLimits;                                          //  Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<CoreUObject::FVector>                     RotationOffsets;                                         //  Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<AnimGraphRuntime::FAnimPhysPlanarLimit>   PlanarLimits;                                            //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        float                                                        StretchLimit;                                            //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FVector                                         FakeVelocity;                                            //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::FBoneReference                                       BaseJoint;                                               //  Edit, NoDestructor, NativeAccessSpecifierPublic
        float                                                        LastBoneRotationAnimAlphaBlend;                          //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x34];                                  //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

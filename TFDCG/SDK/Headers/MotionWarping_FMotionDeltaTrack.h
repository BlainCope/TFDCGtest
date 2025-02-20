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
#include "BasicTypes_TArray.h"
#include "CoreUObject_FTransform.h"
#include "CoreUObject_FVector.h"
#include "CoreUObject_FRotator.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MotionWarping
{
    /**
     * ScriptStruct /Script/MotionWarping.MotionDeltaTrack
     * Size -> 0x0048
     */
    struct FMotionDeltaTrack
    {
    public:
        BasicTypes::TArray<CoreUObject::FTransform>                  BoneTransformTrack;                                      //  ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<CoreUObject::FVector>                     DeltaTranslationTrack;                                   //  ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<CoreUObject::FRotator>                    DeltaRotationTrack;                                      //  ZeroConstructor, NativeAccessSpecifierPublic
        CoreUObject::FVector                                         TotalTranslation;                                        //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FRotator                                        TotalRotation;                                           //  ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

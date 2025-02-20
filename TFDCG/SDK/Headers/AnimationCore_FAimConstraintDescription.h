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
#include "AnimationCore_FAxis.h"
#include "CoreUObject_FVector.h"
#include "AnimationCore_FConstraintDescriptionEx.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AnimationCore
{
    /**
     * ScriptStruct /Script/AnimationCore.AimConstraintDescription
     * Size -> 0x0030 (FullSize[0x0040] - InheritedSize[0x0010])
     */
    struct FAimConstraintDescription : public AnimationCore::FConstraintDescriptionEx
    {
    public:
        AnimationCore::FAxis                                         LookAt_Axis;                                             //  Edit, NoDestructor, NativeAccessSpecifierPublic
        AnimationCore::FAxis                                         LookUp_Axis;                                             //  Edit, NoDestructor, NativeAccessSpecifierPublic
        bool                                                         bUseLookUp;                                              //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FVector                                         LookUpTarget;                                            //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

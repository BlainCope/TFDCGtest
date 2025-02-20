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
#include "AnimationCore_ENUMS.h"
#include "AnimationCore_FConstraintDescriptionEx.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AnimationCore
{
    /**
     * ScriptStruct /Script/AnimationCore.TransformConstraintDescription
     * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
     */
    struct FTransformConstraintDescription : public AnimationCore::FConstraintDescriptionEx
    {
    public:
        AnimationCore::ETransformConstraintType                      TransformType;                                           //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

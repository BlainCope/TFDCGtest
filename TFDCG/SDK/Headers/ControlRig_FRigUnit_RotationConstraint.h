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
#include "ControlRig_FRigElementKey.h"
#include "AnimationCore_FFilterOptionPerAxis.h"
#include "BasicTypes_TArray.h"
#include "ControlRig_FConstraintParent.h"
#include "ControlRig_FRigUnit_RotationConstraint_AdvancedSettings.h"
#include "ControlRig_FRigUnit_HighlevelBaseMutable.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::ControlRig
{
    /**
     * ScriptStruct /Script/ControlRig.RigUnit_RotationConstraint
     * Size -> 0x0030 (FullSize[0x0130] - InheritedSize[0x0100])
     */
    struct FRigUnit_RotationConstraint : public ControlRig::FRigUnit_HighlevelBaseMutable
    {
    public:
        ControlRig::FRigElementKey                                   Child;                                                   //  Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bMaintainOffset;                                         //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        AnimationCore::FFilterOptionPerAxis                          Filter;                                                  //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<ControlRig::FConstraintParent>            Parents;                                                 //  Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
        ControlRig::FRigUnit_RotationConstraint_AdvancedSettings     AdvancedSettings;                                        //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x2];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        Weight;                                                  //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x8];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

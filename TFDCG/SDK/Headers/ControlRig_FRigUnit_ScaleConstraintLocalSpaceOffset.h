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
#include "ControlRig_FCachedRigElement.h"
#include "ControlRig_FRigUnit_HighlevelBaseMutable.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::ControlRig
{
    /**
     * ScriptStruct /Script/ControlRig.RigUnit_ScaleConstraintLocalSpaceOffset
     * Size -> 0x0060 (FullSize[0x0160] - InheritedSize[0x0100])
     */
    struct FRigUnit_ScaleConstraintLocalSpaceOffset : public ControlRig::FRigUnit_HighlevelBaseMutable
    {
    public:
        ControlRig::FRigElementKey                                   Child;                                                   //  Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bMaintainOffset;                                         //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        AnimationCore::FFilterOptionPerAxis                          Filter;                                                  //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<ControlRig::FConstraintParent>            Parents;                                                 //  Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
        float                                                        Weight;                                                  //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        ControlRig::FCachedRigElement                                ChildCache;                                              //  NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<ControlRig::FCachedRigElement>            ParentCaches;                                            //  ZeroConstructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x8];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

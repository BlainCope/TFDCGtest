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
#include "ControlRig_FRigPose.h"
#include "ControlRig_ENUMS.h"
#include "BasicTypes_TArray.h"
#include "ControlRig_FRigElementKey.h"
#include "ControlRig_FRigUnit_HierarchyBase.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::ControlRig
{
    /**
     * ScriptStruct /Script/ControlRig.RigUnit_PoseGetItemsItemArray
     * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
     */
    struct FRigUnit_PoseGetItemsItemArray : public ControlRig::FRigUnit_HierarchyBase
    {
    public:
        ControlRig::FRigPose                                         Pose;                                                    //  Edit, BlueprintVisible, NativeAccessSpecifierPublic
        ControlRig::ERigElementType                                  ElementType;                                             //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<ControlRig::FRigElementKey>               Items;                                                   //  BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

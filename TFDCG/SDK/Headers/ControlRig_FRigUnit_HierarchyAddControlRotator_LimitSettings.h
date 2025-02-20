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
#include "ControlRig_FRigControlLimitEnabled.h"
#include "CoreUObject_FRotator.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::ControlRig
{
    /**
     * ScriptStruct /Script/ControlRig.RigUnit_HierarchyAddControlRotator_LimitSettings
     * Size -> 0x0024
     */
    struct FRigUnit_HierarchyAddControlRotator_LimitSettings
    {
    public:
        ControlRig::FRigControlLimitEnabled                          LimitPitch;                                              //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        ControlRig::FRigControlLimitEnabled                          LimitYaw;                                                //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        ControlRig::FRigControlLimitEnabled                          LimitRoll;                                               //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x2];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FRotator                                        MinValue;                                                //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
        CoreUObject::FRotator                                        MaxValue;                                                //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
        bool                                                         bDrawLimits;                                             //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

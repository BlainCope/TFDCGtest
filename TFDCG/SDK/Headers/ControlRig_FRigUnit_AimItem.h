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
#include "ControlRig_FRigUnit_AimItem_Target.h"
#include "ControlRig_FRigUnit_AimBone_DebugSettings.h"
#include "ControlRig_FCachedRigElement.h"
#include "ControlRig_FRigUnit_HighlevelBaseMutable.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::ControlRig
{
    /**
     * ScriptStruct /Script/ControlRig.RigUnit_AimItem
     * Size -> 0x0120 (FullSize[0x0220] - InheritedSize[0x0100])
     */
    struct FRigUnit_AimItem : public ControlRig::FRigUnit_HighlevelBaseMutable
    {
    public:
        ControlRig::FRigElementKey                                   Item;                                                    //  Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        ControlRig::FRigUnit_AimItem_Target                          Primary;                                                 //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        ControlRig::FRigUnit_AimItem_Target                          Secondary;                                               //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        float                                                        Weight;                                                  //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        ControlRig::FRigUnit_AimBone_DebugSettings                   DebugSettings;                                           //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        ControlRig::FCachedRigElement                                CachedItem;                                              //  NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        ControlRig::FCachedRigElement                                PrimaryCachedSpace;                                      //  NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        ControlRig::FCachedRigElement                                SecondaryCachedSpace;                                    //  NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bIsInitialized;                                          //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0xF];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

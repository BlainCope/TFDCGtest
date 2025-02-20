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
#include "CoreUObject_FVector.h"
#include "ControlRig_FRigUnit_AimConstraint_WorldUp.h"
#include "BasicTypes_TArray.h"
#include "ControlRig_FConstraintParent.h"
#include "ControlRig_FRigUnit_AimConstraint_AdvancedSettings.h"
#include "ControlRig_FCachedRigElement.h"
#include "ControlRig_FRigUnit_HighlevelBaseMutable.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::ControlRig
{
    /**
     * ScriptStruct /Script/ControlRig.RigUnit_AimConstraintLocalSpaceOffset
     * Size -> 0x0110 (FullSize[0x0210] - InheritedSize[0x0100])
     */
    struct FRigUnit_AimConstraintLocalSpaceOffset : public ControlRig::FRigUnit_HighlevelBaseMutable
    {
    public:
        ControlRig::FRigElementKey                                   Child;                                                   //  Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bMaintainOffset;                                         //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        AnimationCore::FFilterOptionPerAxis                          Filter;                                                  //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        CoreUObject::FVector                                         AimAxis;                                                 //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FVector                                         UpAxis;                                                  //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        ControlRig::FRigUnit_AimConstraint_WorldUp                   WorldUp;                                                 //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<ControlRig::FConstraintParent>            Parents;                                                 //  Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        ControlRig::FRigUnit_AimConstraint_AdvancedSettings          AdvancedSettings;                                        //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        float                                                        Weight;                                                  //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        ControlRig::FCachedRigElement                                WorldUpSpaceCache;                                       //  NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        ControlRig::FCachedRigElement                                ChildCache;                                              //  NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<ControlRig::FCachedRigElement>            ParentCaches;                                            //  ZeroConstructor, NativeAccessSpecifierPublic
        bool                                                         bIsInitialized;                                          //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0003[0x7];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

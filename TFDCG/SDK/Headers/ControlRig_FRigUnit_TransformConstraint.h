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
#include "BasicTypes_FName.h"
#include "ControlRig_ENUMS.h"
#include "CoreUObject_FTransform.h"
#include "BasicTypes_TArray.h"
#include "ControlRig_FConstraintTarget.h"
#include "ControlRig_FRigUnit_TransformConstraint_WorkData.h"
#include "ControlRig_FRigUnit_HighlevelBaseMutable.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::ControlRig
{
    /**
     * ScriptStruct /Script/ControlRig.RigUnit_TransformConstraint
     * Size -> 0x00C0 (FullSize[0x01C0] - InheritedSize[0x0100])
     */
    struct FRigUnit_TransformConstraint : public ControlRig::FRigUnit_HighlevelBaseMutable
    {
    public:
        BasicTypes::FName                                            bone;                                                    //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        ControlRig::ETransformSpaceMode                              BaseTransformSpace;                                      //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FTransform                                      BaseTransform;                                           //  Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FName                                            BaseBone;                                                //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<ControlRig::FConstraintTarget>            Targets;                                                 //  Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
        bool                                                         bUseInitialTransforms;                                   //  Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        ControlRig::FRigUnit_TransformConstraint_WorkData            WorkData;                                                //  Transient, NativeAccessSpecifierPrivate
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

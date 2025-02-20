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
#include "BasicTypes_TArray.h"
#include "FullBodyIK_FFBIKEndEffector.h"
#include "FullBodyIK_FFBIKConstraintOption.h"
#include "FullBodyIK_FSolverInput.h"
#include "FullBodyIK_FMotionProcessInput.h"
#include "FullBodyIK_FFBIKDebugOption.h"
#include "FullBodyIK_FRigUnit_FullbodyIK_WorkData.h"
#include "ControlRig_FRigUnit_HighlevelBaseMutable.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::FullBodyIK
{
    /**
     * ScriptStruct /Script/FullBodyIK.RigUnit_FullbodyIK
     * Size -> 0x0250 (FullSize[0x0350] - InheritedSize[0x0100])
     */
    struct FRigUnit_FullbodyIK : public ControlRig::FRigUnit_HighlevelBaseMutable
    {
    public:
        ControlRig::FRigElementKey                                   Root;                                                    //  Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<FullBodyIK::FFBIKEndEffector>             Effectors;                                               //  Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<FullBodyIK::FFBIKConstraintOption>        Constraints;                                             //  Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
        FullBodyIK::FSolverInput                                     SolverProperty;                                          //  Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic
        FullBodyIK::FMotionProcessInput                              MotionProperty;                                          //  Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic
        bool                                                         bPropagateToChildren;                                    //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x9];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        FullBodyIK::FFBIKDebugOption                                 DebugOption;                                             //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        FullBodyIK::FRigUnit_FullbodyIK_WorkData                     WorkData;                                                //  Transient, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x8];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

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
#include "ControlRig_FControlRigExecuteContext.h"
#include "ControlRig_FRigUnit.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::ControlRig
{
    /**
     * ScriptStruct /Script/ControlRig.RigUnit_SequenceExecution
     * Size -> 0x04B8 (FullSize[0x04C0] - InheritedSize[0x0008])
     */
    struct FRigUnit_SequenceExecution : public ControlRig::FRigUnit
    {
    public:
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        ControlRig::FControlRigExecuteContext                        ExecuteContext;                                          //  Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic
        ControlRig::FControlRigExecuteContext                        A;                                                       //  Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
        ControlRig::FControlRigExecuteContext                        B;                                                       //  Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
        ControlRig::FControlRigExecuteContext                        C;                                                       //  Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
        ControlRig::FControlRigExecuteContext                        D;                                                       //  Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

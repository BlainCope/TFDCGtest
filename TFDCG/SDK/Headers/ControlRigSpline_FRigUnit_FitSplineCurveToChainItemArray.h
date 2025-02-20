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
#include "BasicTypes_TArray.h"
#include "ControlRig_FRigElementKey.h"
#include "ControlRigSpline_FControlRigSpline.h"
#include "ControlRig_FRigUnit_HighlevelBaseMutable.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::ControlRigSpline
{
    /**
     * ScriptStruct /Script/ControlRigSpline.RigUnit_FitSplineCurveToChainItemArray
     * Size -> 0x0030 (FullSize[0x0130] - InheritedSize[0x0100])
     */
    struct FRigUnit_FitSplineCurveToChainItemArray : public ControlRig::FRigUnit_HighlevelBaseMutable
    {
    public:
        BasicTypes::TArray<ControlRig::FRigElementKey>               Items;                                                   //  Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
        ControlRigSpline::FControlRigSpline                          Spline;                                                  //  Edit, BlueprintVisible, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

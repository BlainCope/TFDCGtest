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
#include "M1_FM1TypedUITheme_Brush.h"
#include "M1_FM1TypedUITheme_Button.h"
#include "Engine_FTableRowBase.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * ScriptStruct /Script/M1.M1UIThemeData
     * Size -> 0x0A68 (FullSize[0x0A70] - InheritedSize[0x0008])
     */
    struct FM1UIThemeData : public Engine::FTableRowBase
    {
    public:
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1::FM1TypedUITheme_Brush                                    TabControlStyle;                                         //  Edit, NativeAccessSpecifierPublic
        M1::FM1TypedUITheme_Button                                   TabButtonStyle;                                          //  Edit, NativeAccessSpecifierPublic
        M1::FM1TypedUITheme_Button                                   CommonButtonStyle;                                       //  Edit, NativeAccessSpecifierPublic
        M1::FM1TypedUITheme_Brush                                    MetaBackStyle;                                           //  Edit, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

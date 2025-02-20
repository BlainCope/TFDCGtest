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
#include "SlateCore_FTextBlockStyle.h"
#include "Engine_FTableRowBase.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UMG
{
    /**
     * ScriptStruct /Script/UMG.RichTextStyleRow
     * Size -> 0x0318 (FullSize[0x0320] - InheritedSize[0x0008])
     */
    struct FRichTextStyleRow : public Engine::FTableRowBase
    {
    public:
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        SlateCore::FTextBlockStyle                                   TextStyle;                                               //  Edit, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

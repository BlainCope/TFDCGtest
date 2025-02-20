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
#include "BasicTypes_FNameEntryHeader.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BasicTypes
{
    /**
     * 
     * Size -> 0x0000
     */
    class FNameEntry
    {
    public:
        BasicTypes::FNameEntryHeader                                 Header;
        union
        {
            char                                                         AnsiName[1024];
            wchar_t                                                      WideName[1024];
        };

    public:
        int32_t GetLength() const;
        bool IsWide() const;
        int32_t GetId() const;
        std::string GetAnsiName() const;
        std::wstring GetWideName() const;
        std::string GetName() const;
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

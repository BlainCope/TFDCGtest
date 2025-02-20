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
#include "BasicTypes_FString.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1Data
{
    /**
     * ScriptStruct /Script/M1Data.M1KeyText
     * Size -> 0x0040
     */
    struct FM1KeyText
    {
    public:
        BasicTypes::FString                                          Text;                                                    //  Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FString                                          Desc;                                                    //  Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FString                                          Narrative;                                               //  Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FString                                          NarrativeLong;                                           //  Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

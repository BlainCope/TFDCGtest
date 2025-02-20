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
#include "BasicTypes_FText.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * ScriptStruct /Script/Engine.ParameterChannelNames
     * Size -> 0x0060
     */
    struct FParameterChannelNames
    {
    public:
        BasicTypes::FText                                            R;                                                       //  Edit, NativeAccessSpecifierPublic
        BasicTypes::FText                                            G;                                                       //  Edit, NativeAccessSpecifierPublic
        BasicTypes::FText                                            B;                                                       //  Edit, NativeAccessSpecifierPublic
        BasicTypes::FText                                            A;                                                       //  Edit, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

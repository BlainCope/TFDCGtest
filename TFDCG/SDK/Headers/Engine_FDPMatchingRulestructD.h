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
#include "Engine_FDPMatchingRulestructC.h"
#include "Engine_FDPMatchingRulestructBase.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * ScriptStruct /Script/Engine.DPMatchingRulestructD
     * Size -> 0x0020 (FullSize[0x0068] - InheritedSize[0x0048])
     */
    struct FDPMatchingRulestructD : public Engine::FDPMatchingRulestructBase
    {
    public:
        BasicTypes::TArray<Engine::FDPMatchingRulestructC>           OnTrue;                                                  //  ZeroConstructor, Config, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::FDPMatchingRulestructC>           OnFalse;                                                 //  ZeroConstructor, Config, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

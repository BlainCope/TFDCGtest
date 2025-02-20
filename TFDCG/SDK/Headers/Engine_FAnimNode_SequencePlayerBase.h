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
#include "Engine_FInputScaleBiasClampState.h"
#include "Engine_FAnimNode_AssetPlayerBase.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * ScriptStruct /Script/Engine.AnimNode_SequencePlayerBase
     * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
     */
    struct FAnimNode_SequencePlayerBase : public Engine::FAnimNode_AssetPlayerBase
    {
    public:
        Engine::FInputScaleBiasClampState                            PlayRateScaleBiasClampState;                             //  NoDestructor, Protected, NativeAccessSpecifierProtected
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

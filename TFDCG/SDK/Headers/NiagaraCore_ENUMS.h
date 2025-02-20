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

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::NiagaraCore
{
    // --------------------------------------------------
    // # Enums
    // --------------------------------------------------
    /**
     * Enum /Script/NiagaraCore.ENiagaraIterationSource
     */
    enum class ENiagaraIterationSource : uint8_t
    {
        Particles     = 0,
        DataInterface = 1,
        DirectSet     = 2,
        MAX           = 3
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

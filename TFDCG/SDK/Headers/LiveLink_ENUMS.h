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

namespace CG::LiveLink
{
    // --------------------------------------------------
    // # Enums
    // --------------------------------------------------
    /**
     * Enum /Script/LiveLink.ELiveLinkTimecodeProviderEvaluationType
     */
    enum class ELiveLinkTimecodeProviderEvaluationType : uint8_t
    {
        Lerp    = 0,
        Nearest = 1,
        Latest  = 2,
        MAX     = 3
    };

    /**
     * Enum /Script/LiveLink.ELiveLinkAxis
     */
    enum class ELiveLinkAxis : uint8_t
    {
        X    = 0,
        Y    = 1,
        Z    = 2,
        XNeg = 3,
        YNeg = 4,
        ZNeg = 5,
        MAX  = 6
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

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

namespace CG::MovieRenderPipelineRenderPasses
{
    // --------------------------------------------------
    // # Enums
    // --------------------------------------------------
    /**
     * Enum /Script/MovieRenderPipelineRenderPasses.EEXRCompressionFormat
     */
    enum class EEXRCompressionFormat : uint8_t
    {
        None = 0,
        PIZ  = 1,
        ZIP  = 2,
        DWAA = 3,
        DWAB = 4,
        MAX  = 5
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

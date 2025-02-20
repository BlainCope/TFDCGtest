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

namespace CG::MRMesh
{
    // --------------------------------------------------
    // # Enums
    // --------------------------------------------------
    /**
     * Enum /Script/MRMesh.EMeshTrackerVertexColorMode
     */
    enum class EMeshTrackerVertexColorMode : uint8_t
    {
        None       = 0,
        Confidence = 1,
        Block      = 2,
        MAX        = 3
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

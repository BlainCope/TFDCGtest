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

namespace CG::MovieRenderPipelineCore
{
    // --------------------------------------------------
    // # Enums
    // --------------------------------------------------
    /**
     * Enum /Script/MovieRenderPipelineCore.EMoviePipelineEncodeQuality
     */
    enum class EMoviePipelineEncodeQuality : uint8_t
    {
        Low    = 0,
        Medium = 1,
        High   = 2,
        Epic   = 3,
        MAX    = 4
    };

    /**
     * Enum /Script/MovieRenderPipelineCore.FCPXMLExportDataSource
     */
    enum class EFCPXMLExportDataSource : uint8_t
    {
        FCPXMLExportDataSourceOutputMetadata             = 0,
        FCPXMLExportDataSourceSequenceData               = 1,
        FCPXMLExportDataSourceFCPXMLExportDataSource_MAX = 2
    };

    /**
     * Enum /Script/MovieRenderPipelineCore.EMoviePipelineTextureStreamingMethod
     */
    enum class EMoviePipelineTextureStreamingMethod : uint8_t
    {
        None      = 0,
        Disabled  = 1,
        FullyLoad = 2,
        MAX       = 3
    };

    /**
     * Enum /Script/MovieRenderPipelineCore.EMovieRenderPipelineState
     */
    enum class EMovieRenderPipelineState : uint8_t
    {
        Uninitialized   = 0,
        ProducingFrames = 1,
        Finalize        = 2,
        Export          = 3,
        Finished        = 4,
        MAX             = 5
    };

    /**
     * Enum /Script/MovieRenderPipelineCore.EMovieRenderShotState
     */
    enum class EMovieRenderShotState : uint8_t
    {
        Uninitialized = 0,
        WarmingUp     = 1,
        MotionBlur    = 2,
        Rendering     = 3,
        Finished      = 4,
        MAX           = 5
    };

    /**
     * Enum /Script/MovieRenderPipelineCore.EMoviePipelineShutterTiming
     */
    enum class EMoviePipelineShutterTiming : uint8_t
    {
        FrameOpen   = 0,
        FrameCenter = 1,
        FrameClose  = 2,
        MAX         = 3
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

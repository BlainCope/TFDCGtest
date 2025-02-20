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
#include "MovieRenderPipelineRenderPasses_UMoviePipelineImageSequenceOutputBase.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MovieRenderPipelineRenderPasses
{
    /**
     * Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_PNG
     * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
     */
    class UMoviePipelineImageSequenceOutput_PNG : public MovieRenderPipelineRenderPasses::UMoviePipelineImageSequenceOutputBase
    {
    public:
        bool                                                         bWriteAlpha;                                             //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_PNG");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

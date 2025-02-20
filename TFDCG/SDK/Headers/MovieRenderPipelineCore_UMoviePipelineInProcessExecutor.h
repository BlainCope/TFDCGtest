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
#include "MovieRenderPipelineCore_UMoviePipelineLinearExecutorBase.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MovieRenderPipelineCore
{
    /**
     * Class /Script/MovieRenderPipelineCore.MoviePipelineInProcessExecutor
     * Size -> 0x0050 (FullSize[0x0190] - InheritedSize[0x0140])
     */
    class UMoviePipelineInProcessExecutor : public MovieRenderPipelineCore::UMoviePipelineLinearExecutorBase
    {
    public:
        bool                                                         bUseCurrentLevel;                                        //  BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x4F];                                  //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/MovieRenderPipelineCore.MoviePipelineInProcessExecutor");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

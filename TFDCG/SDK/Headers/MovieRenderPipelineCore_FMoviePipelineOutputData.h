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
#include "MovieRenderPipelineCore_FMoviePipelineShotOutputData.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::MovieRenderPipelineCore { class UMoviePipeline; };
namespace CG::MovieRenderPipelineCore { class UMoviePipelineExecutorJob; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MovieRenderPipelineCore
{
    /**
     * ScriptStruct /Script/MovieRenderPipelineCore.MoviePipelineOutputData
     * Size -> 0x0028
     */
    struct FMoviePipelineOutputData
    {
    public:
        MovieRenderPipelineCore::UMoviePipeline*                     Pipeline;                                                //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        MovieRenderPipelineCore::UMoviePipelineExecutorJob*          Job;                                                     //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bSuccess;                                                //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<MovieRenderPipelineCore::FMoviePipelineShotOutputData> ShotData;                                                //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

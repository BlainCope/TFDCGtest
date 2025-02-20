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
#include "MovieScene_FMovieSceneSegmentIdentifier.h"
#include "MovieScene_FMovieSceneEvaluationFieldTrackPtr.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MovieScene
{
    /**
     * ScriptStruct /Script/MovieScene.MovieSceneEvaluationFieldSegmentPtr
     * Size -> 0x0004 (FullSize[0x000C] - InheritedSize[0x0008])
     */
    struct FMovieSceneEvaluationFieldSegmentPtr : public MovieScene::FMovieSceneEvaluationFieldTrackPtr
    {
    public:
        MovieScene::FMovieSceneSegmentIdentifier                     SegmentID;                                               //  NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

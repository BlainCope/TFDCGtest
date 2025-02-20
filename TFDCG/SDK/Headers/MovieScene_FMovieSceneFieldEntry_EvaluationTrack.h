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
#include "MovieScene_FMovieSceneEvaluationFieldTrackPtr.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MovieScene
{
    /**
     * ScriptStruct /Script/MovieScene.MovieSceneFieldEntry_EvaluationTrack
     * Size -> 0x000C
     */
    struct FMovieSceneFieldEntry_EvaluationTrack
    {
    public:
        MovieScene::FMovieSceneEvaluationFieldTrackPtr               TrackPtr;                                                //  NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint16_t                                                     NumChildren;                                             //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x2];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

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
#include "MovieScene_FMovieScenePropertySectionData.h"
#include "MovieScene_FMovieSceneEvalTemplate.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MovieScene
{
    /**
     * ScriptStruct /Script/MovieScene.MovieScenePropertySectionTemplate
     * Size -> 0x0018 (FullSize[0x0038] - InheritedSize[0x0020])
     */
    struct FMovieScenePropertySectionTemplate : public MovieScene::FMovieSceneEvalTemplate
    {
    public:
        MovieScene::FMovieScenePropertySectionData                   PropertyData;                                            //  Protected, NativeAccessSpecifierProtected
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

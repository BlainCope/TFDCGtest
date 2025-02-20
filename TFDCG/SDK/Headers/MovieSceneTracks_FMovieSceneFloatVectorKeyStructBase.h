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
#include "CoreUObject_FFrameNumber.h"
#include "MovieScene_FMovieSceneKeyStruct.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MovieSceneTracks
{
    /**
     * ScriptStruct /Script/MovieSceneTracks.MovieSceneFloatVectorKeyStructBase
     * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
     */
    struct FMovieSceneFloatVectorKeyStructBase : public MovieScene::FMovieSceneKeyStruct
    {
    public:
        CoreUObject::FFrameNumber                                    Time;                                                    //  Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x1C];                                  //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

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
#include "CoreUObject_FFrameTime.h"
#include "MovieScene_ENUMS.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MovieScene
{
    /**
     * ScriptStruct /Script/MovieScene.MovieSceneSequenceReplProperties
     * Size -> 0x0010
     */
    struct FMovieSceneSequenceReplProperties
    {
    public:
        CoreUObject::FFrameTime                                      LastKnownPosition;                                       //  NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        MovieScene::EMovieScenePlayerStatus                          LastKnownStatus;                                         //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      LastKnownNumLoops;                                       //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

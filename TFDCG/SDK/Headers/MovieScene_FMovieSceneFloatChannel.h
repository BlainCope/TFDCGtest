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
#include "Engine_ENUMS.h"
#include "BasicTypes_TArray.h"
#include "CoreUObject_FFrameNumber.h"
#include "MovieScene_FMovieSceneFloatValue.h"
#include "MovieScene_FMovieSceneKeyHandleMap.h"
#include "CoreUObject_FFrameRate.h"
#include "MovieScene_FMovieSceneChannel.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MovieScene
{
    /**
     * ScriptStruct /Script/MovieScene.MovieSceneFloatChannel
     * Size -> 0x00C0 (FullSize[0x0110] - InheritedSize[0x0050])
     */
    struct FMovieSceneFloatChannel : public MovieScene::FMovieSceneChannel
    {
    public:
        Engine::ERichCurveExtrapolation                              PreInfinityExtrap;                                       //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::ERichCurveExtrapolation                              PostInfinityExtrap;                                      //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x6];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<CoreUObject::FFrameNumber>                Times;                                                   //  ZeroConstructor, NativeAccessSpecifierPrivate
        BasicTypes::TArray<MovieScene::FMovieSceneFloatValue>        Values;                                                  //  ZeroConstructor, NativeAccessSpecifierPrivate
        float                                                        DefaultValue;                                            //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        bool                                                         bHasDefaultValue;                                        //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        MovieScene::FMovieSceneKeyHandleMap                          KeyHandles;                                              //  Transient, NativeAccessSpecifierPrivate
        CoreUObject::FFrameRate                                      TickResolution;                                          //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

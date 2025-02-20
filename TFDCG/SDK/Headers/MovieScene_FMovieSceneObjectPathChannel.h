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
#include "CoreUObject_FFrameNumber.h"
#include "MovieScene_FMovieSceneObjectPathChannelKeyValue.h"
#include "MovieScene_FMovieSceneKeyHandleMap.h"
#include "MovieScene_FMovieSceneChannel.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UObject; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MovieScene
{
    /**
     * ScriptStruct /Script/MovieScene.MovieSceneObjectPathChannel
     * Size -> 0x00E8 (FullSize[0x0138] - InheritedSize[0x0050])
     */
    struct FMovieSceneObjectPathChannel : public MovieScene::FMovieSceneChannel
    {
    public:
        CoreUObject::UObject*                                        PropertyClass;                                           //  ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        BasicTypes::TArray<CoreUObject::FFrameNumber>                Times;                                                   //  ZeroConstructor, NativeAccessSpecifierPrivate
        BasicTypes::TArray<MovieScene::FMovieSceneObjectPathChannelKeyValue> Values;                                                  //  ZeroConstructor, NativeAccessSpecifierPrivate
        MovieScene::FMovieSceneObjectPathChannelKeyValue             DefaultValue;                                            //  NativeAccessSpecifierPrivate
        MovieScene::FMovieSceneKeyHandleMap                          KeyHandles;                                              //  Transient, NativeAccessSpecifierPrivate
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

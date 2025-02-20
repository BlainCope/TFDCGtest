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
#include "MovieScene_FMovieSceneEntitySystemGraph.h"
#include "CoreUObject_UObject.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MovieScene
{
    /**
     * Class /Script/MovieScene.MovieSceneEntitySystemLinker
     * Size -> 0x06D0 (FullSize[0x06F8] - InheritedSize[0x0028])
     */
    class UMovieSceneEntitySystemLinker : public CoreUObject::UObject
    {
    public:
        uint8_t                                                      UnknownData_0000[0x278];                                 //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        MovieScene::FMovieSceneEntitySystemGraph                     SystemGraph;                                             //  NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x308];                                 //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/MovieScene.MovieSceneEntitySystemLinker");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

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
#include "MovieScene_UMovieSceneEntityInstantiatorSystem.h"

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
     * Class /Script/MovieScene.MovieSceneTrackInstanceInstantiator
     * Size -> 0x00B0 (FullSize[0x00F0] - InheritedSize[0x0040])
     */
    class UMovieSceneTrackInstanceInstantiator : public MovieScene::UMovieSceneEntityInstantiatorSystem
    {
    public:
        uint8_t                                                      UnknownData_0000[0xB0];                                  //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/MovieScene.MovieSceneTrackInstanceInstantiator");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

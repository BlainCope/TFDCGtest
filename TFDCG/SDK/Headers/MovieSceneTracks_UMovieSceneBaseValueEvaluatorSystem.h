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
#include "MovieScene_UMovieSceneEntitySystem.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MovieSceneTracks
{
    /**
     * Class /Script/MovieSceneTracks.MovieSceneBaseValueEvaluatorSystem
     * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
     */
    class UMovieSceneBaseValueEvaluatorSystem : public MovieScene::UMovieSceneEntitySystem
    {
    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/MovieSceneTracks.MovieSceneBaseValueEvaluatorSystem");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

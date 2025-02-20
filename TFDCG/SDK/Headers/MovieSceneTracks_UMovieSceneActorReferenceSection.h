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
#include "MovieSceneTracks_FMovieSceneActorReferenceData.h"
#include "Engine_FIntegralCurve.h"
#include "BasicTypes_TArray.h"
#include "BasicTypes_FString.h"
#include "MovieScene_UMovieSceneSection.h"

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
     * Class /Script/MovieSceneTracks.MovieSceneActorReferenceSection
     * Size -> 0x01B0 (FullSize[0x02A0] - InheritedSize[0x00F0])
     */
    class UMovieSceneActorReferenceSection : public MovieScene::UMovieSceneSection
    {
    public:
        MovieSceneTracks::FMovieSceneActorReferenceData              ActorReferenceData;                                      //  NativeAccessSpecifierPrivate
        Engine::FIntegralCurve                                       ActorGuidIndexCurve;                                     //  Deprecated, NativeAccessSpecifierPrivate
        BasicTypes::TArray<BasicTypes::FString>                      ActorGuidStrings;                                        //  ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/MovieSceneTracks.MovieSceneActorReferenceSection");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

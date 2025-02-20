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
#include "MovieScene_FMovieSceneFloatChannel.h"
#include "MovieScene_UMovieSceneSection.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Composure
{
    /**
     * Class /Script/Composure.MovieSceneComposurePostMoveSettingsSection
     * Size -> 0x0660 (FullSize[0x0750] - InheritedSize[0x00F0])
     */
    class UMovieSceneComposurePostMoveSettingsSection : public MovieScene::UMovieSceneSection
    {
    public:
        MovieScene::FMovieSceneFloatChannel                          Pivot[0x2];                                              //  NativeAccessSpecifierPublic
        MovieScene::FMovieSceneFloatChannel                          Translation[0x2];                                        //  NativeAccessSpecifierPublic
        MovieScene::FMovieSceneFloatChannel                          RotationAngle;                                           //  NativeAccessSpecifierPublic
        MovieScene::FMovieSceneFloatChannel                          Scale;                                                   //  NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Composure.MovieSceneComposurePostMoveSettingsSection");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

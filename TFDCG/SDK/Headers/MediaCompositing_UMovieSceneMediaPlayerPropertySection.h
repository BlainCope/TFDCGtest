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
#include "MovieScene_UMovieSceneSection.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::MediaAssets { class UMediaSource; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MediaCompositing
{
    /**
     * Class /Script/MediaCompositing.MovieSceneMediaPlayerPropertySection
     * Size -> 0x0010 (FullSize[0x0100] - InheritedSize[0x00F0])
     */
    class UMovieSceneMediaPlayerPropertySection : public MovieScene::UMovieSceneSection
    {
    public:
        MediaAssets::UMediaSource*                                   MediaSource;                                             //  Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bLoop;                                                   //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/MediaCompositing.MovieSceneMediaPlayerPropertySection");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

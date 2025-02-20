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
#include "MovieScene_UMovieSceneTrackInstance.h"

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
     * Class /Script/MovieSceneTracks.MovieSceneCameraCutTrackInstance
     * Size -> 0x0078 (FullSize[0x00C8] - InheritedSize[0x0050])
     */
    class UMovieSceneCameraCutTrackInstance : public MovieScene::UMovieSceneTrackInstance
    {
    public:
        uint8_t                                                      UnknownData_0000[0x78];                                  //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/MovieSceneTracks.MovieSceneCameraCutTrackInstance");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

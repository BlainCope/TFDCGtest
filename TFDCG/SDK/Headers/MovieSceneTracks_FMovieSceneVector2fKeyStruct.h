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
#include "CoreUObject_FVector2f.h"
#include "MovieSceneTracks_FMovieSceneFloatVectorKeyStructBase.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MovieSceneTracks
{
    /**
     * ScriptStruct /Script/MovieSceneTracks.MovieSceneVector2fKeyStruct
     * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
     */
    struct FMovieSceneVector2fKeyStruct : public MovieSceneTracks::FMovieSceneFloatVectorKeyStructBase
    {
    public:
        CoreUObject::FVector2f                                       Vector;                                                  //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

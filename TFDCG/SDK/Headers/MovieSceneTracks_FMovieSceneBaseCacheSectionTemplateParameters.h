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
#include "CoreUObject_FFrameNumber.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MovieSceneTracks
{
    /**
     * ScriptStruct /Script/MovieSceneTracks.MovieSceneBaseCacheSectionTemplateParameters
     * Size -> 0x0008
     */
    struct FMovieSceneBaseCacheSectionTemplateParameters
    {
    public:
        CoreUObject::FFrameNumber                                    SectionStartTime;                                        //  NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FFrameNumber                                    SectionEndTime;                                          //  NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

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
#include "CoreUObject_FGuid.h"
#include "MovieScene_FMovieScenePropertyBinding.h"
#include "TemplateSequence_ENUMS.h"
#include "MovieScene_FMovieSceneFloatChannel.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::TemplateSequence
{
    /**
     * ScriptStruct /Script/TemplateSequence.TemplateSectionPropertyScale
     * Size -> 0x0138
     */
    struct FTemplateSectionPropertyScale
    {
    public:
        CoreUObject::FGuid                                           ObjectBinding;                                           //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        MovieScene::FMovieScenePropertyBinding                       PropertyBinding;                                         //  NoDestructor, NativeAccessSpecifierPublic
        TemplateSequence::ETemplateSectionPropertyScaleType          PropertyScaleType;                                       //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        MovieScene::FMovieSceneFloatChannel                          FloatChannel;                                            //  NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

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
#include "CoreUObject_FVector.h"
#include "CoreUObject_FRotator.h"
#include "CoreUObject_FVector3f.h"
#include "CoreUObject_FFrameNumber.h"
#include "MovieScene_FMovieSceneKeyStruct.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MovieSceneTracks
{
    /**
     * ScriptStruct /Script/MovieSceneTracks.MovieScene3DTransformKeyStruct
     * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
     */
    struct FMovieScene3DTransformKeyStruct : public MovieScene::FMovieSceneKeyStruct
    {
    public:
        CoreUObject::FVector                                         Location;                                                //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FRotator                                        Rotation;                                                //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
        CoreUObject::FVector3f                                       Scale;                                                   //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FFrameNumber                                    Time;                                                    //  Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x18];                                  //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

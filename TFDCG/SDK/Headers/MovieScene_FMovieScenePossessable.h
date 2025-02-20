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
#include "BasicTypes_TArray.h"
#include "BasicTypes_FName.h"
#include "CoreUObject_FGuid.h"
#include "BasicTypes_FString.h"
#include "MovieScene_FMovieSceneObjectBindingID.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MovieScene
{
    /**
     * ScriptStruct /Script/MovieScene.MovieScenePossessable
     * Size -> 0x0058
     */
    struct FMovieScenePossessable
    {
    public:
        BasicTypes::TArray<BasicTypes::FName>                        Tags;                                                    //  Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
        CoreUObject::FGuid                                           Guid;                                                    //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        BasicTypes::FString                                          Name;                                                    //  ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        CoreUObject::FGuid                                           ParentGuid;                                              //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        MovieScene::FMovieSceneObjectBindingID                       SpawnableObjectBindingID;                                //  NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

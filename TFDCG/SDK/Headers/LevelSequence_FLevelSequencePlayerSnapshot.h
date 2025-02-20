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
#include "BasicTypes_FString.h"
#include "CoreUObject_FQualifiedFrameTime.h"
#include "BasicTypes_TSoftObjectPtr.h"
#include "Engine_UCameraComponent.h"
#include "MovieScene_FMovieSceneSequenceID.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::LevelSequence { class ULevelSequence; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::LevelSequence
{
    /**
     * ScriptStruct /Script/LevelSequence.LevelSequencePlayerSnapshot
     * Size -> 0x00D0
     */
    struct FLevelSequencePlayerSnapshot
    {
    public:
        BasicTypes::FString                                          RootName;                                                //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FQualifiedFrameTime                             RootTime;                                                //  Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FQualifiedFrameTime                             SourceTime;                                              //  Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FString                                          CurrentShotName;                                         //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FQualifiedFrameTime                             CurrentShotLocalTime;                                    //  Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FQualifiedFrameTime                             CurrentShotSourceTime;                                   //  Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FString                                          SourceTimecode;                                          //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TSoftObjectPtr<Engine::UCameraComponent>         CameraComponent;                                         //  ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditConst, InstancedReference, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0xC];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        LevelSequence::ULevelSequence*                               ActiveShot;                                              //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        MovieScene::FMovieSceneSequenceID                            ShotID;                                                  //  NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::FString                                          MasterName;                                              //  ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        CoreUObject::FQualifiedFrameTime                             MasterTime;                                              //  Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

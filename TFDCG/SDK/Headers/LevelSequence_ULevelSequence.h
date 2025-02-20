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
#include "LevelSequence_FLevelSequenceObjectReferenceMap.h"
#include "LevelSequence_FLevelSequenceBindingReferences.h"
#include "BasicTypes_TMap.h"
#include "BasicTypes_FString.h"
#include "LevelSequence_FLevelSequenceObject.h"
#include "BasicTypes_TArray.h"
#include "MovieScene_UMovieSceneSequence.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::MovieScene { class UMovieScene; };
namespace CG::CoreUObject { class UObject; };
namespace CG::Engine { class UAssetUserData; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::LevelSequence
{
    /**
     * Class /Script/LevelSequence.LevelSequence
     * Size -> 0x01B8 (FullSize[0x0220] - InheritedSize[0x0068])
     */
    class ULevelSequence : public MovieScene::UMovieSceneSequence
    {
    public:
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        MovieScene::UMovieScene*                                     MovieScene;                                              //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        LevelSequence::FLevelSequenceObjectReferenceMap              ObjectReferences;                                        //  Protected, NativeAccessSpecifierProtected
        LevelSequence::FLevelSequenceBindingReferences               BindingReferences;                                       //  Protected, NativeAccessSpecifierProtected
        BasicTypes::TMap<BasicTypes::FString, LevelSequence::FLevelSequenceObject> PossessedObjects;                                        //  Deprecated, Protected, NativeAccessSpecifierProtected
        CoreUObject::UObject*                                        DirectorClass;                                           //  ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        BasicTypes::TArray<Engine::UAssetUserData*>                  AssetUserData;                                           //  Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, UObjectWrapper, NativeAccessSpecifierProtected

    public:
        void RemoveMetaDataByClass(CoreUObject::UObject* InClass);
        CoreUObject::UObject* FindOrAddMetaDataByClass(CoreUObject::UObject* InClass);
        CoreUObject::UObject* FindMetaDataByClass(CoreUObject::UObject* InClass);
        CoreUObject::UObject* CopyMetaData(CoreUObject::UObject* InMetaData);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/LevelSequence.LevelSequence");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

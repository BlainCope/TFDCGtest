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
#include "BasicTypes_TArray.h"
#include "GameplayTags_FGameplayTagCategoryRemap.h"
#include "CoreUObject_FSoftObjectPath.h"
#include "GameplayTags_FGameplayTagRedirect.h"
#include "BasicTypes_FName.h"
#include "GameplayTags_FRestrictedConfigInfo.h"
#include "GameplayTags_UGameplayTagsList.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::GameplayTags
{
    /**
     * Class /Script/GameplayTags.GameplayTagsSettings
     * Size -> 0x0070 (FullSize[0x00B8] - InheritedSize[0x0048])
     */
    class UGameplayTagsSettings : public GameplayTags::UGameplayTagsList
    {
    public:
        bool                                                         ImportTagsFromConfig;                                    //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         WarnOnInvalidTags;                                       //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         ClearInvalidTags;                                        //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         AllowEditorTagUnloading;                                 //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         AllowGameTagUnloading;                                   //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         FastReplication;                                         //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x2];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::FString                                          InvalidTagCharacters;                                    //  Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<GameplayTags::FGameplayTagCategoryRemap>  CategoryRemapping;                                       //  Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
        BasicTypes::TArray<CoreUObject::FSoftObjectPath>             GameplayTagTableList;                                    //  Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
        BasicTypes::TArray<GameplayTags::FGameplayTagRedirect>       GameplayTagRedirects;                                    //  Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
        BasicTypes::TArray<BasicTypes::FName>                        CommonlyReplicatedTags;                                  //  Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
        int32_t                                                      NumBitsForContainerSize;                                 //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      NetIndexFirstBitSegment;                                 //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<GameplayTags::FRestrictedConfigInfo>      RestrictedConfigFiles;                                   //  Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/GameplayTags.GameplayTagsSettings");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

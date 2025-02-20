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
#include "BasicTypes_FName.h"
#include "DeveloperSettings_UDeveloperSettings.h"

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
     * Class /Script/GameplayTags.GameplayTagsDeveloperSettings
     * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
     */
    class UGameplayTagsDeveloperSettings : public DeveloperSettings::UDeveloperSettings
    {
    public:
        BasicTypes::FString                                          DeveloperConfigName;                                     //  Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FName                                            FavoriteTagSource;                                       //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/GameplayTags.GameplayTagsDeveloperSettings");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

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
#include "BasicTypes_FName.h"
#include "BasicTypes_TArray.h"
#include "Engine_USoundSubmixWithParentBase.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::AudioExtensions { class USoundfieldEncodingSettingsBase; };
namespace CG::AudioExtensions { class USoundfieldEffectBase; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.SoundfieldSubmix
     * Size -> 0x0028 (FullSize[0x0070] - InheritedSize[0x0048])
     */
    class USoundfieldSubmix : public Engine::USoundSubmixWithParentBase
    {
    public:
        BasicTypes::FName                                            SoundfieldEncodingFormat;                                //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
        AudioExtensions::USoundfieldEncodingSettingsBase*            EncodingSettings;                                        //  Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<AudioExtensions::USoundfieldEffectBase*>  SoundfieldEffectChain;                                   //  Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
        AudioExtensions::USoundfieldEncodingSettingsBase*            EncodingSettingsClass;                                   //  ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.SoundfieldSubmix");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

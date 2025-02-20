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
#include "BasicTypes_TMap.h"
#include "BasicTypes_FName.h"
#include "BasicTypes_FString.h"
#include "Engine_UAssetUserData.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::DatasmithContent
{
    /**
     * Class /Script/DatasmithContent.DatasmithAssetUserData
     * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
     */
    class UDatasmithAssetUserData : public Engine::UAssetUserData
    {
    public:
        BasicTypes::TMap<BasicTypes::FName, BasicTypes::FString>     MetaData;                                                //  Edit, BlueprintVisible, EditConst, AdvancedDisplay, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/DatasmithContent.DatasmithAssetUserData");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

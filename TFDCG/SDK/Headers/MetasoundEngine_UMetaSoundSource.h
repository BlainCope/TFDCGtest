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
#include "MetasoundFrontend_FMetasoundFrontendDocument.h"
#include "BasicTypes_TSet.h"
#include "BasicTypes_FString.h"
#include "CoreUObject_FSoftObjectPath.h"
#include "MetasoundEngine_ENUMS.h"
#include "CoreUObject_FGuid.h"
#include "Engine_USoundWaveProcedural.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UObject; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MetasoundEngine
{
    /**
     * Class /Script/MetasoundEngine.MetaSoundSource
     * Size -> 0x03A0 (FullSize[0x0840] - InheritedSize[0x04A0])
     */
    class UMetaSoundSource : public Engine::USoundWaveProcedural
    {
    public:
        uint8_t                                                      UnknownData_0000[0x68];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        MetasoundFrontend::FMetasoundFrontendDocument                RootMetaSoundDocument;                                   //  Edit, Protected, NativeAccessSpecifierProtected
        BasicTypes::TSet<BasicTypes::FString>                        ReferencedAssetClassKeys;                                //  Protected, NativeAccessSpecifierProtected
        BasicTypes::TSet<CoreUObject::UObject*>                      ReferencedAssetClassObjects;                             //  Protected, UObjectWrapper, NativeAccessSpecifierProtected
        BasicTypes::TSet<CoreUObject::FSoftObjectPath>               ReferenceAssetClassCache;                                //  Protected, NativeAccessSpecifierProtected
        MetasoundEngine::EMetasoundSourceAudioFormat                 OutputFormat;                                            //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FGuid                                           AssetClassID;                                            //  ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x6C];                                  //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/MetasoundEngine.MetaSoundSource");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

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
#include "BasicTypes_UMulticastInlineDelegate.h"
#include "Engine_UAsyncActionLoadPrimaryAssetBase.h"
#include "CoreUObject_FPrimaryAssetId.h"
#include "BasicTypes_TArray.h"
#include "BasicTypes_FName.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UObject; };
namespace CG::Engine { class UAsyncActionLoadPrimaryAssetClass; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.AsyncActionLoadPrimaryAssetClass
     * Size -> 0x0010 (FullSize[0x0088] - InheritedSize[0x0078])
     */
    class UAsyncActionLoadPrimaryAssetClass : public Engine::UAsyncActionLoadPrimaryAssetBase
    {
    public:
        BasicTypes::UMulticastInlineDelegate                         Completed;                                               //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY

    public:
        Engine::UAsyncActionLoadPrimaryAssetClass* STATIC_AsyncLoadPrimaryAssetClass(CoreUObject::UObject* WorldContextObject, const CoreUObject::FPrimaryAssetId& PrimaryAsset, BasicTypes::TArray<BasicTypes::FName> LoadBundles);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.AsyncActionLoadPrimaryAssetClass");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

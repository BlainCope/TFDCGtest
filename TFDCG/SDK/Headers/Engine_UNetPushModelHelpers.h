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
#include "Engine_UBlueprintFunctionLibrary.h"
#include "BasicTypes_FName.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UObject; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.NetPushModelHelpers
     * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
     */
    class UNetPushModelHelpers : public Engine::UBlueprintFunctionLibrary
    {
    public:
        void STATIC_MarkPropertyDirtyFromRepIndex(CoreUObject::UObject* Object, int32_t RepIndex, const BasicTypes::FName& PropertyName);
        void STATIC_MarkPropertyDirty(CoreUObject::UObject* Object, const BasicTypes::FName& PropertyName);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.NetPushModelHelpers");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

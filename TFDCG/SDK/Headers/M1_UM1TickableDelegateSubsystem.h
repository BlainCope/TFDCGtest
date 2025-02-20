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
#include "Engine_UTickableWorldSubsystem.h"
#include "BasicTypes_UScriptDelegate.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UObject; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1TickableDelegateSubsystem
     * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
     */
    class UM1TickableDelegateSubsystem : public Engine::UTickableWorldSubsystem
    {
    public:
        uint8_t                                                      UnknownData_0000[0x20];                                  //  MISSED OFFSET (PADDING)

    public:
        void STATIC_UnregisterTickDelegate(CoreUObject::UObject* WorldContextObject, const BasicTypes::UScriptDelegate& ScriptDelegate);
        void STATIC_UnregisterDurationTickDelegate(CoreUObject::UObject* WorldContextObject, const BasicTypes::UScriptDelegate& ScriptDelegate);
        void STATIC_RegisterTickDelegate(CoreUObject::UObject* WorldContextObject, const BasicTypes::UScriptDelegate& ScriptDelegate);
        void STATIC_RegisterDurationTickDelegate(CoreUObject::UObject* WorldContextObject, const BasicTypes::UScriptDelegate& ScriptDelegate, float Duration);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1TickableDelegateSubsystem");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

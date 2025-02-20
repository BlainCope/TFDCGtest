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
#include "Engine_FDeviceTriggerTriggerResistanceData.h"
#include "BasicTypes_TMap.h"
#include "BasicTypes_FName.h"
#include "Engine_UInputDeviceTriggerEffect.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.InputDeviceTriggerResistanceProperty
     * Size -> 0x0080 (FullSize[0x00C0] - InheritedSize[0x0040])
     */
    class UInputDeviceTriggerResistanceProperty : public Engine::UInputDeviceTriggerEffect
    {
    public:
        Engine::FDeviceTriggerTriggerResistanceData                  TriggerData;                                             //  Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
        BasicTypes::TMap<BasicTypes::FName, Engine::FDeviceTriggerTriggerResistanceData> DeviceOverrideData;                                      //  Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x20];                                  //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.InputDeviceTriggerResistanceProperty");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

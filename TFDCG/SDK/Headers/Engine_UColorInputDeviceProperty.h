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
#include "Engine_FDeviceColorData.h"
#include "BasicTypes_TMap.h"
#include "BasicTypes_FName.h"
#include "Engine_UInputDeviceProperty.h"

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
     * Class /Script/Engine.ColorInputDeviceProperty
     * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
     */
    class UColorInputDeviceProperty : public Engine::UInputDeviceProperty
    {
    public:
        Engine::FDeviceColorData                                     ColorData;                                               //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        BasicTypes::TMap<BasicTypes::FName, Engine::FDeviceColorData> DeviceOverrideData;                                      //  Edit, BlueprintVisible, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x10];                                  //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.ColorInputDeviceProperty");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

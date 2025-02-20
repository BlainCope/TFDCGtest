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
#include "BasicTypes_TSet.h"
#include "Engine_FActiveDeviceProperty.h"
#include "Engine_FInputDevicePropertyHandle.h"
#include "Engine_UEngineSubsystem.h"
#include "CoreUObject_FPlatformUserId.h"
#include "Engine_FHardwareDeviceIdentifier.h"
#include "CoreUObject_FInputDeviceId.h"
#include "Engine_FActivateDevicePropertyParams.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UInputDeviceProperty; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.InputDeviceSubsystem
     * Size -> 0x0168 (FullSize[0x0198] - InheritedSize[0x0030])
     */
    class UInputDeviceSubsystem : public Engine::UEngineSubsystem
    {
    public:
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::UMulticastInlineDelegate                         OnInputHardwareDeviceChanged;                            //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::TSet<Engine::FActiveDeviceProperty>              ActiveProperties;                                        //  Transient, Protected, NativeAccessSpecifierProtected
        BasicTypes::TSet<Engine::FInputDevicePropertyHandle>         PropertiesPendingRemoval;                                //  Transient, Protected, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0002[0xB0];                                  //  MISSED OFFSET (PADDING)

    public:
        void RemoveDevicePropertyHandles(BasicTypes::TSet<Engine::FInputDevicePropertyHandle> HandlesToRemove);
        void RemoveDevicePropertyByHandle(const Engine::FInputDevicePropertyHandle& HandleToRemove);
        void RemoveAllDeviceProperties();
        bool IsPropertyActive(const Engine::FInputDevicePropertyHandle& Handle);
        Engine::FHardwareDeviceIdentifier GetMostRecentlyUsedHardwareDevice(const CoreUObject::FPlatformUserId& InUserId);
        Engine::FHardwareDeviceIdentifier GetInputDeviceHardwareIdentifier(const CoreUObject::FInputDeviceId& InputDevice);
        Engine::UInputDeviceProperty* GetActiveDeviceProperty(const Engine::FInputDevicePropertyHandle& Handle);
        Engine::FInputDevicePropertyHandle ActivateDevicePropertyOfClass(Engine::UInputDeviceProperty* PropertyClass, const Engine::FActivateDevicePropertyParams& Params);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.InputDeviceSubsystem");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

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
#include "BasicTypes_TArray.h"
#include "CoreUObject_UObject.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UDeviceProfile; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.DeviceProfileManager
     * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
     */
    class UDeviceProfileManager : public CoreUObject::UObject
    {
    public:
        BasicTypes::TArray<Engine::UDeviceProfile*>                  Profiles;                                                //  Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::UDeviceProfile*>                  BackupProfiles;                                          //  ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0x48];                                  //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.DeviceProfileManager");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

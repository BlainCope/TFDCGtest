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
#include "M1_FM1WeaponCameraSetting.h"
#include "M1_FM1ZoomCameraSetting.h"
#include "Engine_UM1WeaponDataAsset.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1DataRangedWeaponCameraSetting
     * Size -> 0x0098 (FullSize[0x00C8] - InheritedSize[0x0030])
     */
    class UM1DataRangedWeaponCameraSetting : public Engine::UM1WeaponDataAsset
    {
    public:
        M1::FM1WeaponCameraSetting                                   WeaponCameraSettings;                                    //  Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
        M1::FM1ZoomCameraSetting                                     ZoomCameraSettings;                                      //  Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1DataRangedWeaponCameraSetting");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

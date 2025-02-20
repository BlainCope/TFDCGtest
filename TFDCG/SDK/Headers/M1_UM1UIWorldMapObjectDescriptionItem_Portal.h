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
#include "M1_UM1UIWorldMapObjectDescriptionItem.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UTexture2D; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UIWorldMapObjectDescriptionItem_Portal
     * Size -> 0x0010 (FullSize[0x0730] - InheritedSize[0x0720])
     */
    class UM1UIWorldMapObjectDescriptionItem_Portal : public M1::UM1UIWorldMapObjectDescriptionItem
    {
    public:
        BasicTypes::TArray<Engine::UTexture2D*>                      PortalIcons;                                             //  Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIWorldMapObjectDescriptionItem_Portal");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

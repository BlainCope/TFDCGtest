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
#include "M1_UM1UIWidget.h"
#include "M1_ENUMS.h"
#include "M1Data_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UMG { class UCanvasPanelSlot; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UIGameRadarIcon
     * Size -> 0x0008 (FullSize[0x0710] - InheritedSize[0x0708])
     */
    class UM1UIGameRadarIcon : public M1::UM1UIWidget
    {
    public:
        UMG::UCanvasPanelSlot*                                       PanelSlot;                                               //  ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

    public:
        void BP_UpdateIcon(M1::EM1RadarEntityType InType, M1Data::EM1ItemTierType InItemTier, M1Data::EM1ImportanceType InItemImportanceType);
        void BP_UpdateHeightPanel(int32_t InUpOrDown);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIGameRadarIcon");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

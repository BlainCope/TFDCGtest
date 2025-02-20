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
#include "BasicTypes_TMap.h"
#include "M1_UM1UICustomizeDetailsBase.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1TextBlock; };
namespace CG::UMG { class UPanelWidget; };
namespace CG::M1 { class UM1UIItemResource; };
namespace CG::M1 { class UM1ShopProduct; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UICustomizeSkinDetails
     * Size -> 0x0088 (FullSize[0x07D8] - InheritedSize[0x0750])
     */
    class UM1UICustomizeSkinDetails : public M1::UM1UICustomizeDetailsBase
    {
    public:
        M1::UM1TextBlock*                                            TB_IsEvolutionSkin;                                      //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1::UM1TextBlock*                                            TB_Target;                                               //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        UMG::UPanelWidget*                                           UI_PaintSlots;                                           //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        UMG::UPanelWidget*                                           Panel_AcquireGuide;                                      //  BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1TextBlock*                                            Text_AcquireGuide;                                       //  BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        BasicTypes::TMap<int32_t, M1::UM1UIItemResource*>            UI_ItemResources_Color;                                  //  ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
        bool                                                         bShowAcquireGuide;                                       //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1::UM1ShopProduct*                                          CachedShopProductToPurchase;                             //  ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

    public:
        void BP_ShowPaints(bool bShow);
        void BP_ShowDesc(bool bShow);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UICustomizeSkinDetails");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

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
#include "M1Data_ENUMS.h"
#include "M1_UM1UIPopupContent.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class UM1UIQuantityControl; };
namespace CG::UMG { class UPanelWidget; };
namespace CG::M1 { class UM1UICurrency; };
namespace CG::M1 { class UM1TileView; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1UIBattlePassSeasonPageBuy
     * Size -> 0x0030 (FullSize[0x07B0] - InheritedSize[0x0780])
     */
    class UM1UIBattlePassSeasonPageBuy : public M1::UM1UIPopupContent
    {
    public:
        M1::UM1UIQuantityControl*                                    UI_Quantity_control;                                     //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        UMG::UPanelWidget*                                           Panel_Coin;                                              //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UICurrency*                                           UI_CurrentCoin;                                          //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1UICurrency*                                           UI_ExpectedCoin;                                         //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1::UM1TileView*                                             TV_Items;                                                //  ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1Data::EM1BattlePassType                                    BattlePassType;                                          //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (PADDING)

    public:
        void UpdateInfo();
        void InitInfo();
        int32_t GetSecondRangePage();
        int32_t GetFirstRangePage();
        M1Data::EM1BattlePassType GetBattlePassType();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIBattlePassSeasonPageBuy");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

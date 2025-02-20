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
#include "M1_UM1UIDataShopGoodsInfo.h"

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
     * Class /Script/M1.M1UIDataShopGoodsInfo_BattlePass
     * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
     */
    class UM1UIDataShopGoodsInfo_BattlePass : public M1::UM1UIDataShopGoodsInfo
    {
    public:
        bool                                                         bShowRequiredLevel;                                      //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (PADDING)

    public:
        bool IsShowRequiredLevelInPage();
        bool IsSatisfiedBuyCondition();
        bool IsPremiumSatisfied();
        bool IsPremium();
        bool IsPageSatisfied();
        bool IsLevelSatisfied();
        bool IsLargeSize();
        int32_t GetTotalProductCountInRequiredPage();
        int32_t GetRequiredPage();
        int32_t GetRequiredLevel();
        int32_t GetOverProductCountInRequiredPage();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIDataShopGoodsInfo_BattlePass");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

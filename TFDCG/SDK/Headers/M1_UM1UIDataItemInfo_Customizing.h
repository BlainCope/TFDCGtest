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
#include "M1_UM1UIDataItemInfo.h"
#include "M1Data_ENUMS.h"
#include "M1_ENUMS.h"

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
     * Class /Script/M1.M1UIDataItemInfo_Customizing
     * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
     */
    class UM1UIDataItemInfo_Customizing : public M1::UM1UIDataItemInfo
    {
    public:
        uint8_t                                                      UnknownData_0000[0x10];                                  //  MISSED OFFSET (PADDING)

    public:
        bool IsStackable();
        bool IsLocked();
        bool IsLimitedItem();
        bool IsEvolvableItem();
        bool IsEquippedOnOwner();
        bool IsEquippedOnAny();
        bool IsBoundItem();
        bool IsBoundable();
        int32_t GetSortId();
        M1Data::EM1MotionType GetSocialMotionType();
        M1Data::EM1CustomizingItemCategoryType GetCategoryType();
        M1::EM1ItemBoundStatus GetBoundStatus();
        bool GetbDifferOriginToTarget();
        M1Data::EM1ItemAcquireType GetAcquireType();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIDataItemInfo_Customizing");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

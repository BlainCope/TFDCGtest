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
#include "M1_UM1UIData.h"
#include "CoreUObject_FDateTime.h"
#include "M1Data_FM1ScaledInteger.h"
#include "M1Data_ENUMS.h"
#include "BasicTypes_FText.h"

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
     * Class /Script/M1.M1UIDataBoostInfo
     * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
     */
    class UM1UIDataBoostInfo : public M1::UM1UIData
    {
    public:
        uint8_t                                                      UnknownData_0000[0x18];                                  //  MISSED OFFSET (PADDING)

    public:
        int32_t GetGroupId();
        CoreUObject::FDateTime GetEndTime();
        M1Data::FM1ScaledInteger GetBoostValue();
        M1Data::EM1BuffSubItemType GetBoostType();
        BasicTypes::FText GetBoostEffectText();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIDataBoostInfo");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

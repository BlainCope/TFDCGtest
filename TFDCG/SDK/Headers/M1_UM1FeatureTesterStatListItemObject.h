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
#include "M1Data_FM1ScaledInteger.h"
#include "M1_UM1FeatureTesterBaseListItemObject.h"

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
     * Class /Script/M1.M1FeatureTesterStatListItemObject
     * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
     */
    class UM1FeatureTesterStatListItemObject : public M1::UM1FeatureTesterBaseListItemObject
    {
    public:
        M1Data::EM1StatType                                          StatType;                                                //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1Data::FM1ScaledInteger                                     StatValue;                                               //  Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1FeatureTesterStatListItemObject");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

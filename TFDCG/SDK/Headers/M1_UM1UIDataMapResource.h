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
#include "M1Data_FM1TemplateId.h"
#include "M1_UM1UIData.h"

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
     * Class /Script/M1.M1UIDataMapResource
     * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
     */
    class UM1UIDataMapResource : public M1::UM1UIData
    {
    public:
        BasicTypes::TArray<M1Data::FM1TemplateId>                    AvailBattleZones;                                        //  ZeroConstructor, Transient, NativeAccessSpecifierPrivate
        M1Data::FM1TemplateId                                        MapTemplateId;                                           //  Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        M1Data::FM1TemplateId                                        CurrentBattleZoneId;                                     //  Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIDataMapResource");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

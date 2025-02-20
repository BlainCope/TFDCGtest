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
#include "BasicTypes_FString.h"
#include "M1_FM1GameMapInfo.h"
#include "M1Data_FM1TemplateId.h"
#include "CoreUObject_UObject.h"

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
     * Class /Script/M1.M1MapUserData
     * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
     */
    class UM1MapUserData : public CoreUObject::UObject
    {
    public:
        BasicTypes::TArray<BasicTypes::FString>                      AvailCamps;                                              //  ZeroConstructor, Transient, NativeAccessSpecifierPrivate
        BasicTypes::TArray<M1::FM1GameMapInfo>                       AvailLevels;                                             //  ZeroConstructor, Transient, NativeAccessSpecifierPrivate
        BasicTypes::TArray<M1Data::FM1TemplateId>                    AvailBattleZones;                                        //  ZeroConstructor, Transient, NativeAccessSpecifierPrivate
        bool                                                         bEntered;                                                //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1Data::FM1TemplateId                                        MapTemplateId;                                           //  Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        BasicTypes::FString                                          BattleZoneId;                                            //  ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1MapUserData");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

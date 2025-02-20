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
#include "M1Data_FM1EquipmentBaseInfo.h"
#include "M1Data_FM1ConsumableInfo.h"
#include "M1Data_FM1RunesByTid.h"
#include "M1Data_FM1CharacterInfo.h"
#include "M1Data_FM1CurrencyInfo.h"
#include "M1Data_FM1WeaponProficiencyInfo.h"
#include "M1Data_FM1EquipmentRandomOptions.h"
#include "M1Data_FM1PerkInfo.h"
#include "M1Data_FM1ReactorEnchantInfo.h"
#include "M1Data_FM1TitleItemInfo.h"
#include "M1Data_FM1RecordInfo.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1Data
{
    /**
     * ScriptStruct /Script/M1Data.M1InventoryInfo
     * Size -> 0x00B0
     */
    struct FM1InventoryInfo
    {
    public:
        BasicTypes::TArray<M1Data::FM1EquipmentBaseInfo>             Equipments;                                              //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<M1Data::FM1ConsumableInfo>                Consumables;                                             //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<M1Data::FM1RunesByTid>                    Runes;                                                   //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<M1Data::FM1CharacterInfo>                 Characters;                                              //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<M1Data::FM1CurrencyInfo>                  Currencies;                                              //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<M1Data::FM1WeaponProficiencyInfo>         WeaponProficiencies;                                     //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<M1Data::FM1EquipmentRandomOptions>        RandomOptions;                                           //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<M1Data::FM1PerkInfo>                      Perks;                                                   //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<M1Data::FM1ReactorEnchantInfo>            ReactorInfos;                                            //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<M1Data::FM1TitleItemInfo>                 TitleInfos;                                              //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<M1Data::FM1RecordInfo>                    RecordInfos;                                             //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

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
#include "BasicTypes_TSoftObjectPtr.h"
#include "Niagara_UNiagaraSystem.h"
#include "BasicTypes_TMap.h"
#include "M1Data_ENUMS.h"
#include "BasicTypes_FName.h"
#include "CoreUObject_FLinearColor.h"
#include "Engine_UDataAsset.h"

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
     * Class /Script/M1.M1DropItemFxDataAsset
     * Size -> 0x0200 (FullSize[0x0230] - InheritedSize[0x0030])
     */
    class UM1DropItemFxDataAsset : public Engine::UDataAsset
    {
    public:
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TSoftObjectPtr<Niagara::UNiagaraSystem>          Indicator;                                               //  ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0xC];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::TSoftObjectPtr<Niagara::UNiagaraSystem>          Gain;                                                    //  ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0xC];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::TMap<M1Data::EM1ImportanceType, BasicTypes::TSoftObjectPtr<Niagara::UNiagaraSystem>> ImportantFxMap;                                          //  Edit, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
        BasicTypes::FName                                            SymbolColorParamName;                                    //  Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TMap<M1Data::EM1ItemTierType, CoreUObject::FLinearColor> TierSymbolColorMap;                                      //  Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
        BasicTypes::TMap<M1Data::EM1EquipmentCategoryType, BasicTypes::TSoftObjectPtr<Niagara::UNiagaraSystem>> SymbolFxByEquipmentCategoryType;                         //  Edit, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
        BasicTypes::TMap<M1Data::EM1ConsumableItemCategoryType, BasicTypes::TSoftObjectPtr<Niagara::UNiagaraSystem>> SymbolFxByConsumableCategoryType;                        //  Edit, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
        BasicTypes::TMap<M1Data::EM1ItemType, BasicTypes::TSoftObjectPtr<Niagara::UNiagaraSystem>> SymbolFxByItemType;                                      //  Edit, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1DropItemFxDataAsset");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

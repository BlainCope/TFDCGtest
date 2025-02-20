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
#include "BasicTypes_TWeakObjectPtr.h"
#include "Engine_FHitResult.h"
#include "M1Data_FM1ScaledInteger.h"
#include "M1_ENUMS.h"
#include "M1Data_ENUMS.h"
#include "BasicTypes_TArray.h"
#include "GameplayTags_FGameplayTagContainer.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class AActor; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * ScriptStruct /Script/M1.M1CalcDamageNetInfo
     * Size -> 0x00F0
     */
    struct FM1CalcDamageNetInfo
    {
    public:
        BasicTypes::TWeakObjectPtr<Engine::AActor>                   Instigator;                                              //  ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::FHitResult                                           HitResult;                                               //  IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        M1Data::FM1ScaledInteger                                     TotalDamage;                                             //  NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        M1::EM1WeaponDamageType                                      WeaponDamageType;                                        //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        M1::EM1AdvantageCalcResult                                   AdvantageCalcResult;                                     //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        M1Data::EM1ElementalDamageChannel                            RepresentativeElementalDamageType;                       //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x5];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<M1Data::FM1ScaledInteger>                 ElementalDamages;                                        //  ZeroConstructor, NativeAccessSpecifierPublic
        GameplayTags::FGameplayTagContainer                          TraitTags;                                               //  NativeAccessSpecifierPublic
        bool                                                         bHasDied : 1;                                            //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bWeakness : 1;                                           //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bCritical : 1;                                           //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bImmune : 1;                                             //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x7];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

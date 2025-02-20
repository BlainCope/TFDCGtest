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
#include "BasicTypes_TSet.h"
#include "BasicTypes_FName.h"
#include "M1_AM1MissionSupplyCollector.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class AM1Monster; };
namespace CG::Niagara { class UNiagaraComponent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1MissionTargetSupply
     * Size -> 0x0080 (FullSize[0x0510] - InheritedSize[0x0490])
     */
    class AM1MissionTargetSupply : public M1::AM1MissionSupplyCollector
    {
    public:
        uint8_t                                                      UnknownData_0000[0x10];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TSet<M1::AM1Monster*>                            OverlappingAliveThiefMonsters;                           //  Transient, Protected, NativeAccessSpecifierProtected
        Niagara::UNiagaraComponent*                                  StolenFx;                                                //  Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        Niagara::UNiagaraComponent*                                  StolenEndFx;                                             //  Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        BasicTypes::FName                                            MissionTargetRowName;                                    //  Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         bOverlappedThiefMonster;                                 //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0001[0x7];                                   //  MISSED OFFSET (PADDING)

    public:
        void OnRep_MissionTargetRowName();
        void NetMulticastActivateStolenFx(bool InOverlappedThiefMonster);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1MissionTargetSupply");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

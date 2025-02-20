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
#include "M1_FM1PlayerRespawnVolumeTimerHandlePair.h"
#include "BasicTypes_TArray.h"
#include "BasicTypes_TWeakObjectPtr.h"
#include "M1_AM1OutOfPlayableAreaVolume.h"
#include "CoreUObject_FTransform.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class AM1Player; };
namespace CG::M1 { class AM1PlayerRespawnPoint; };
namespace CG::Engine { class AActor; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1PlayerRespawnVolume
     * Size -> 0x0048 (FullSize[0x0310] - InheritedSize[0x02C8])
     */
    class AM1PlayerRespawnVolume : public M1::AM1OutOfPlayableAreaVolume
    {
    public:
        M1::FM1PlayerRespawnVolumeTimerHandlePair                    RetryMonsterKillTimerHandle;                             //  Transient, NativeAccessSpecifierPrivate
        BasicTypes::TArray<BasicTypes::TWeakObjectPtr<M1::AM1Player>> ExecutedTeleportByPlayers;                               //  ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate
        float                                                        RespawnDelayTime;                                        //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         bApplyDamageToKillPlayer;                                //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         bKillMonster;                                            //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         bAplpyDamageToPlayer;                                    //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x1];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        PercentDamageToPlayer;                                   //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0001[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<M1::AM1PlayerRespawnPoint*>               PlayerRespawnPoints;                                     //  Edit, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected

    public:
        bool FindClosestRespawnPointFrom(CoreUObject::FTransform* OutTransform, Engine::AActor* FromActor);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1PlayerRespawnVolume");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

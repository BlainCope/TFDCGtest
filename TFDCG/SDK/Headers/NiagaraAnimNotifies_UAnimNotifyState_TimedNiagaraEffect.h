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
#include "BasicTypes_FName.h"
#include "CoreUObject_FVector.h"
#include "CoreUObject_FRotator.h"
#include "Engine_UAnimNotifyState.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Niagara { class UNiagaraSystem; };
namespace CG::Engine { class UMeshComponent; };
namespace CG::Engine { class UFXSystemComponent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::NiagaraAnimNotifies
{
    /**
     * Class /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
     * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
     */
    class UAnimNotifyState_TimedNiagaraEffect : public Engine::UAnimNotifyState
    {
    public:
        Niagara::UNiagaraSystem*                                     Template;                                                //  Edit, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FName                                            SocketName;                                              //  Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FVector                                         LocationOffset;                                          //  Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FRotator                                        RotationOffset;                                          //  Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
        CoreUObject::FVector                                         Scale;                                                   //  Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bDestroyAtEnd;                                           //  Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x1B];                                  //  MISSED OFFSET (PADDING)

    public:
        Engine::UFXSystemComponent* GetSpawnedEffect(Engine::UMeshComponent* MeshComp);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

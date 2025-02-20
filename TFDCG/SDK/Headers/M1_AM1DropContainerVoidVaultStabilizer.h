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
#include "M1_AM1DropContainer.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::M1 { class AM1Player; };
namespace CG::Engine { class USkeletalMeshComponent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1DropContainerVoidVaultStabilizer
     * Size -> 0x0040 (FullSize[0x0610] - InheritedSize[0x05D0])
     */
    class AM1DropContainerVoidVaultStabilizer : public M1::AM1DropContainer
    {
    public:
        BasicTypes::TArray<M1::AM1Player*>                           MissionPlayers;                                          //  Net, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
        BasicTypes::TArray<M1::AM1Player*>                           AuthorizedPlayers;                                       //  Net, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
        BasicTypes::TArray<M1Data::FM1TemplateId>                    LinkedVoidVaults;                                        //  Net, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
        bool                                                         bActivated;                                              //  Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        ActivatedTimeSec;                                        //  Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        Engine::USkeletalMeshComponent*                              SkeletalMeshComponent;                                   //  Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

    public:
        void ServerTryRequestOpenVoidVault(M1::AM1Player* InPlayer, const M1Data::FM1TemplateId& InPackageItemTid, const M1Data::FM1TemplateId& InKeyItemTid);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1DropContainerVoidVaultStabilizer");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

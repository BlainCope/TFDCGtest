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
#include "Engine_FPointerToUberGraphFrame.h"
#include "BasicTypes_TArray.h"
#include "BasicTypes_FString.h"
#include "M1_AM1PlayerControllerInGame.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BP_PlayerControllerInGame
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Game/BP_PlayerControllerInGame.BP_PlayerControllerInGame_C
     * Size -> 0x0018 (FullSize[0x0D88] - InheritedSize[0x0D70])
     */
    class ABP_PlayerControllerInGame_C : public M1::AM1PlayerControllerInGame
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        BasicTypes::TArray<BasicTypes::FString>                      HugeArray;                                               //  Edit, BlueprintVisible, DisableEditOnInstance

    public:
        void ReceiveBeginPlay();
        void SendLargeArray(BasicTypes::TArray<BasicTypes::FString> inArray);
        void ExecuteUbergraph_BP_PlayerControllerInGame(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Game/BP_PlayerControllerInGame.BP_PlayerControllerInGame_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

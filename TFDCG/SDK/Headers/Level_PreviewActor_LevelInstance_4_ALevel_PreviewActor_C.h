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
#include "Engine_ALevelScriptActor.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::BP_CharacterPreviewStageInventory { class ABP_CharacterPreviewStageInventory_C; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Level_PreviewActor_LevelInstance_4
{
    /**
     * BlueprintGeneratedClass /Game/Maps/PreviewLevel/Level_PreviewActor_LevelInstance_4.Level_PreviewActor_C
     * Size -> 0x0010 (FullSize[0x0260] - InheritedSize[0x0250])
     */
    class ALevel_PreviewActor_C : public Engine::ALevelScriptActor
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        BP_CharacterPreviewStageInventory::ABP_CharacterPreviewStageInventory_C* BP_CharacterPreviewStageInventory_4_ExecuteUbergraph_Level_PreviewActor_RefProperty; //  ZeroConstructor, NoDestructor, HasGetValueTypeHash

    public:
        void ReceiveBeginPlay();
        void ExecuteUbergraph_Level_PreviewActor(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Maps/PreviewLevel/Level_PreviewActor_LevelInstance_4.Level_PreviewActor_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

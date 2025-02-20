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
#include "Engine_IAnimLayerInterface.h"
#include "Engine_FPoseLink.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::animlayer_Player_Slot
{
    /**
     * AnimBlueprintGeneratedClass /Game/Characters/PC/AnimBP/AnimLayers/animlayer_Player_Slot.animlayer_Player_Slot_C
     * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
     */
    class Ianimlayer_Player_Slot_C : public Engine::IAnimLayerInterface
    {
    public:
        void UpperBody_U_R(const Engine::FPoseLink& InPose_UpperBody_U_R, Engine::FPoseLink* UpperBody_U_R);
        void UpperBody_L_Additive(const Engine::FPoseLink& InPose_UpperBody_L_Additive, Engine::FPoseLink* UpperBody_L_Additive);
        void UpperBody_L(const Engine::FPoseLink& InPose_UpperBody_L, Engine::FPoseLink* UpperBody_L);
        void UpperBody_U(const Engine::FPoseLink& InPose_UpperBody_U, Engine::FPoseLink* UpperBody_U);
        void FullBody(const Engine::FPoseLink& InPose_FullBody, Engine::FPoseLink* FullBody);
        void Motion_M(const Engine::FPoseLink& InPose_Motion_M, Engine::FPoseLink* Motion_M);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("AnimBlueprintGeneratedClass /Game/Characters/PC/AnimBP/AnimLayers/animlayer_Player_Slot.animlayer_Player_Slot_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

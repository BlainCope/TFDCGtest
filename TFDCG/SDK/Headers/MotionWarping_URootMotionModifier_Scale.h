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
#include "CoreUObject_FVector.h"
#include "MotionWarping_URootMotionModifier.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::MotionWarping { class UMotionWarpingComponent; };
namespace CG::Engine { class UAnimSequenceBase; };
namespace CG::MotionWarping { class URootMotionModifier_Scale; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MotionWarping
{
    /**
     * Class /Script/MotionWarping.RootMotionModifier_Scale
     * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
     */
    class URootMotionModifier_Scale : public MotionWarping::URootMotionModifier
    {
    public:
        CoreUObject::FVector                                         Scale;                                                   //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0xC];                                   //  MISSED OFFSET (PADDING)

    public:
        MotionWarping::URootMotionModifier_Scale* STATIC_AddRootMotionModifierScale(MotionWarping::UMotionWarpingComponent* InMotionWarpingComp, Engine::UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, const CoreUObject::FVector& InScale);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/MotionWarping.RootMotionModifier_Scale");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

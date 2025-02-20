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
#include "Engine_UBlueprintFunctionLibrary.h"
#include "AnimGraphRuntime_FBlendSpaceReference.h"
#include "CoreUObject_FVector.h"
#include "Engine_FAnimNodeReference.h"
#include "Engine_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AnimGraphRuntime
{
    /**
     * Class /Script/AnimGraphRuntime.BlendSpaceLibrary
     * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
     */
    class UBlendSpaceLibrary : public Engine::UBlueprintFunctionLibrary
    {
    public:
        void STATIC_SnapToPosition(const AnimGraphRuntime::FBlendSpaceReference& BlendSpace, const CoreUObject::FVector& NewPosition);
        CoreUObject::FVector STATIC_GetPosition(const AnimGraphRuntime::FBlendSpaceReference& BlendSpace);
        CoreUObject::FVector STATIC_GetFilteredPosition(const AnimGraphRuntime::FBlendSpaceReference& BlendSpace);
        void STATIC_ConvertToBlendSpacePure(const Engine::FAnimNodeReference& Node, AnimGraphRuntime::FBlendSpaceReference* BlendSpace, bool* Result);
        AnimGraphRuntime::FBlendSpaceReference STATIC_ConvertToBlendSpace(const Engine::FAnimNodeReference& Node, Engine::EAnimNodeReferenceConversionResult* Result);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/AnimGraphRuntime.BlendSpaceLibrary");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

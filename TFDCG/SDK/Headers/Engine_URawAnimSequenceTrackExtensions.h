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
#include "Engine_FRawAnimSequenceTrack.h"
#include "BasicTypes_TArray.h"
#include "CoreUObject_FVector.h"
#include "CoreUObject_FQuat.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.RawAnimSequenceTrackExtensions
     * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
     */
    class URawAnimSequenceTrackExtensions : public Engine::UBlueprintFunctionLibrary
    {
    public:
        BasicTypes::TArray<CoreUObject::FVector> STATIC_GetScaleKeys(const Engine::FRawAnimSequenceTrack& Track);
        BasicTypes::TArray<CoreUObject::FQuat> STATIC_GetRotationalKeys(const Engine::FRawAnimSequenceTrack& Track);
        BasicTypes::TArray<CoreUObject::FVector> STATIC_GetPositionalKeys(const Engine::FRawAnimSequenceTrack& Track);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.RawAnimSequenceTrackExtensions");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

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
#include "BasicTypes_UMulticastInlineDelegate.h"
#include "Engine_UBlueprintAsyncActionBase.h"
#include "CoreUObject_FVector.h"
#include "CoreUObject_FRotator.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UObject; };
namespace CG::AkAudio { class UAkAudioEvent; };
namespace CG::AkAudio { class UPostEventAtLocationAsync; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AkAudio
{
    /**
     * Class /Script/AkAudio.PostEventAtLocationAsync
     * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
     */
    class UPostEventAtLocationAsync : public Engine::UBlueprintAsyncActionBase
    {
    public:
        BasicTypes::UMulticastInlineDelegate                         Completed;                                               //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        uint8_t                                                      UnknownData_0001[0x40];                                  //  MISSED OFFSET (PADDING)

    public:
        AkAudio::UPostEventAtLocationAsync* STATIC_PostEventAtLocationAsync(CoreUObject::UObject* WorldContextObject, AkAudio::UAkAudioEvent* AkEvent, const CoreUObject::FVector& Location, const CoreUObject::FRotator& Orientation);
        void PollPostEventFuture();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/AkAudio.PostEventAtLocationAsync");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

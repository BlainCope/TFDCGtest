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
#include "AIModule_FAIDamageEvent.h"
#include "AIModule_UAISenseEvent.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AIModule
{
    /**
     * Class /Script/AIModule.AISenseEvent_Damage
     * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
     */
    class UAISenseEvent_Damage : public AIModule::UAISenseEvent
    {
    public:
        AIModule::FAIDamageEvent                                     Event;                                                   //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/AIModule.AISenseEvent_Damage");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

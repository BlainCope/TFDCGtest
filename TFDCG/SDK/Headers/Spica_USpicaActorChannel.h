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
#include "Engine_UActorChannel.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Spica { class USpicaSupervisor; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Spica
{
    /**
     * Class /Script/Spica.SpicaActorChannel
     * Size -> 0x0020 (FullSize[0x02B0] - InheritedSize[0x0290])
     */
    class USpicaActorChannel : public Engine::UActorChannel
    {
    public:
        Spica::USpicaSupervisor*                                     Supervisor;                                              //  ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0x18];                                  //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Spica.SpicaActorChannel");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

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
#include "M1_FM1AISpawnPhaseInfo.h"
#include "Engine_AActor.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1AISpawnController
     * Size -> 0x0028 (FullSize[0x0270] - InheritedSize[0x0248])
     */
    class AM1AISpawnController : public Engine::AActor
    {
    public:
        BasicTypes::TArray<M1::FM1AISpawnPhaseInfo>                  SpawnPhases;                                             //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x18];                                  //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1AISpawnController");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

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
#include "M1Data_FM1DedicatedServerInfo.h"
#include "M1_UM1DedicatedServerInfoContainerBase.h"

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
     * Class /Script/M1.M1DedicatedServerInfoContainer_Game
     * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
     */
    class UM1DedicatedServerInfoContainer_Game : public M1::UM1DedicatedServerInfoContainerBase
    {
    public:
        M1Data::FM1DedicatedServerInfo                               ServerInfo;                                              //  NativeAccessSpecifierPrivate

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1DedicatedServerInfoContainer_Game");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

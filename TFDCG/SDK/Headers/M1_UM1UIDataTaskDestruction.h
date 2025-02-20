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
#include "M1_UM1UIDataMissionTaskInfo.h"

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
     * Class /Script/M1.M1UIDataTaskDestruction
     * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
     */
    class UM1UIDataTaskDestruction : public M1::UM1UIDataMissionTaskInfo
    {
    public:
        int32_t GetTargetMonsterkillCount();
        float GetRemainingTimeRatio();
        float GetRemainingTime();
        int32_t GetCurrentMonsterKillCount();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1UIDataTaskDestruction");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

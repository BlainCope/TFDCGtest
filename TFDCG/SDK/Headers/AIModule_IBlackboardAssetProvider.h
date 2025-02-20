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
#include "CoreUObject_IInterface.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::AIModule { class UBlackboardData; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AIModule
{
    /**
     * Class /Script/AIModule.BlackboardAssetProvider
     * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
     */
    class IBlackboardAssetProvider : public CoreUObject::IInterface
    {
    public:
        AIModule::UBlackboardData* GetBlackboardAsset();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/AIModule.BlackboardAssetProvider");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

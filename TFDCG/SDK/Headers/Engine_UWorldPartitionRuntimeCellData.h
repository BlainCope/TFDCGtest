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
#include "CoreUObject_FBox.h"
#include "CoreUObject_UObject.h"

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
     * Class /Script/Engine.WorldPartitionRuntimeCellData
     * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
     */
    class UWorldPartitionRuntimeCellData : public CoreUObject::UObject
    {
    public:
        uint8_t                                                      UnknownData_0000[0x1C];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FBox                                            ContentBounds;                                           //  ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.WorldPartitionRuntimeCellData");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

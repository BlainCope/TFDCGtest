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
#include "MediaIOCore_UMediaCapture.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MediaIOCore
{
    /**
     * Class /Script/MediaIOCore.FileMediaCapture
     * Size -> 0x0068 (FullSize[0x0250] - InheritedSize[0x01E8])
     */
    class UFileMediaCapture : public MediaIOCore::UMediaCapture
    {
    public:
        uint8_t                                                      UnknownData_0000[0x68];                                  //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/MediaIOCore.FileMediaCapture");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

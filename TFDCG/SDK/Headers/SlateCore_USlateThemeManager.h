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
#include "CoreUObject_FGuid.h"
#include "SlateCore_FStyleColorList.h"
#include "CoreUObject_UObject.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::SlateCore
{
    /**
     * Class /Script/SlateCore.SlateThemeManager
     * Size -> 0x09C0 (FullSize[0x09E8] - InheritedSize[0x0028])
     */
    class USlateThemeManager : public CoreUObject::UObject
    {
    public:
        CoreUObject::FGuid                                           CurrentThemeId;                                          //  Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        SlateCore::FStyleColorList                                   ActiveColors;                                            //  Edit, Transient, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/SlateCore.SlateThemeManager");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

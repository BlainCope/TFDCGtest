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
#include "AIModule_FBlackboardKeySelector.h"
#include "M1_UBTDeco_M1Base.h"

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
     * Class /Script/M1.BTDeco_M1CloseEnough
     * Size -> 0x0058 (FullSize[0x00C0] - InheritedSize[0x0068])
     */
    class UBTDeco_M1CloseEnough : public M1::UBTDeco_M1Base
    {
    public:
        AIModule::FBlackboardKeySelector                             TargetKey;                                               //  Edit, NativeAccessSpecifierPublic
        AIModule::FBlackboardKeySelector                             DistanceKey;                                             //  Edit, NativeAccessSpecifierPublic
        bool                                                         bCheckVertical;                                          //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.BTDeco_M1CloseEnough");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

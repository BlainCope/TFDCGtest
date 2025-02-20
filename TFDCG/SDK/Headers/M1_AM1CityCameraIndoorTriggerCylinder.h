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
#include "M1_AM1CityCameraIndoorTrigger.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UBoxComponent; };
namespace CG::M1 { class AM1Player; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * Class /Script/M1.M1CityCameraIndoorTriggerCylinder
     * Size -> 0x0020 (FullSize[0x0268] - InheritedSize[0x0248])
     */
    class AM1CityCameraIndoorTriggerCylinder : public M1::AM1CityCameraIndoorTrigger
    {
    public:
        Engine::UBoxComponent*                                       BoxCollisionComponent;                                   //  Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        int32_t                                                      CylinderSide;                                            //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x14];                                  //  MISSED OFFSET (PADDING)

    public:
        void CheckTargetInCylinder(M1::AM1Player* InTargetPlayer, float InCylinderRadius, float InCylinderHalfHeight);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1CityCameraIndoorTriggerCylinder");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

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
#include "AIModule_FAIDataProviderFloatValue.h"
#include "AIModule_UEnvQueryGenerator_ProjectedPoints.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::AIModule { class UEnvQueryContext; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AIModule
{
    /**
     * Class /Script/AIModule.EnvQueryGenerator_Cone
     * Size -> 0x00F0 (FullSize[0x0180] - InheritedSize[0x0090])
     */
    class UEnvQueryGenerator_Cone : public AIModule::UEnvQueryGenerator_ProjectedPoints
    {
    public:
        AIModule::FAIDataProviderFloatValue                          AlignedPointsDistance;                                   //  Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
        AIModule::FAIDataProviderFloatValue                          ConeDegrees;                                             //  Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
        AIModule::FAIDataProviderFloatValue                          AngleStep;                                               //  Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
        AIModule::FAIDataProviderFloatValue                          Range;                                                   //  Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
        AIModule::UEnvQueryContext*                                  CenterActor;                                             //  Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         bIncludeContextLocation : 1;                             //  BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/AIModule.EnvQueryGenerator_Cone");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

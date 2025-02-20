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
#include "AIModule_FAIDataProviderIntValue.h"
#include "AIModule_FEnvDirection.h"
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
     * Class /Script/AIModule.EnvQueryGenerator_Donut
     * Size -> 0x0150 (FullSize[0x01E0] - InheritedSize[0x0090])
     */
    class UEnvQueryGenerator_Donut : public AIModule::UEnvQueryGenerator_ProjectedPoints
    {
    public:
        AIModule::FAIDataProviderFloatValue                          InnerRadius;                                             //  Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
        AIModule::FAIDataProviderFloatValue                          OuterRadius;                                             //  Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
        AIModule::FAIDataProviderIntValue                            NumberOfRings;                                           //  Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
        AIModule::FAIDataProviderIntValue                            PointsPerRing;                                           //  Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
        AIModule::FEnvDirection                                      ArcDirection;                                            //  Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
        AIModule::FAIDataProviderFloatValue                          ArcAngle;                                                //  Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
        bool                                                         bUseSpiralPattern;                                       //  Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        AIModule::UEnvQueryContext*                                  Center;                                                  //  Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bDefineArc : 1;                                          //  BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x7];                                   //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/AIModule.EnvQueryGenerator_Donut");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

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
#include "BasicTypes_TArray.h"
#include "Engine_FBakedAnimationStateMachine.h"
#include "Engine_FAnimNotifyEvent.h"
#include "BasicTypes_TMap.h"
#include "BasicTypes_FName.h"
#include "Engine_FCachedPoseIndices.h"
#include "Engine_FAnimBlueprintFunction.h"
#include "Engine_FAnimBlueprintFunctionData.h"
#include "Engine_FGraphAssetPlayerInformation.h"
#include "Engine_FAnimGraphBlendOptions.h"
#include "CoreUObject_UObject.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class USkeleton; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.AnimClassData
     * Size -> 0x0230 (FullSize[0x0258] - InheritedSize[0x0028])
     */
    class UAnimClassData : public CoreUObject::UObject
    {
    public:
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<Engine::FBakedAnimationStateMachine>      BakedStateMachines;                                      //  ZeroConstructor, NativeAccessSpecifierPublic
        Engine::USkeleton*                                           TargetSkeleton;                                          //  ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::FAnimNotifyEvent>                 AnimNotifies;                                            //  ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
        BasicTypes::TMap<BasicTypes::FName, Engine::FCachedPoseIndices> OrderedSavedPoseIndicesMap;                              //  NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::FAnimBlueprintFunction>           AnimBlueprintFunctions;                                  //  ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::FAnimBlueprintFunctionData>       AnimBlueprintFunctionData;                               //  ZeroConstructor, NativeAccessSpecifierPublic
        uint8_t                                                      AnimNodeProperties[0x10];                                //  UNKNOWN PROPERTY TYPE: ArrayProperty
        uint8_t                                                      UnknownData_0001[0x10];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        uint8_t                                                      LinkedAnimGraphNodeProperties[0x10];                     //  UNKNOWN PROPERTY TYPE: ArrayProperty
        uint8_t                                                      UnknownData_0002[0x10];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        uint8_t                                                      LinkedAnimLayerNodeProperties[0x10];                     //  UNKNOWN PROPERTY TYPE: ArrayProperty
        uint8_t                                                      UnknownData_0003[0x10];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        uint8_t                                                      PreUpdateNodeProperties[0x10];                           //  UNKNOWN PROPERTY TYPE: ArrayProperty
        uint8_t                                                      UnknownData_0004[0x10];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        uint8_t                                                      DynamicResetNodeProperties[0x10];                        //  UNKNOWN PROPERTY TYPE: ArrayProperty
        uint8_t                                                      UnknownData_0005[0x10];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        uint8_t                                                      StateMachineNodeProperties[0x10];                        //  UNKNOWN PROPERTY TYPE: ArrayProperty
        uint8_t                                                      UnknownData_0006[0x10];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        uint8_t                                                      InitializationNodeProperties[0x10];                      //  UNKNOWN PROPERTY TYPE: ArrayProperty
        uint8_t                                                      UnknownData_0007[0x10];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TMap<BasicTypes::FName, Engine::FGraphAssetPlayerInformation> GraphNameAssetPlayers;                                   //  NativeAccessSpecifierPublic
        BasicTypes::TArray<BasicTypes::FName>                        SyncGroupNames;                                          //  ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TMap<BasicTypes::FName, Engine::FAnimGraphBlendOptions> GraphBlendOptions;                                       //  NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.AnimClassData");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

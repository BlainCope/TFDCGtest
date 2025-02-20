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
#include "AIModule_FEQSParametrizedQueryExecutionRequest.h"
#include "AIModule_UBTService_BlackboardBase.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AIModule
{
    /**
     * Class /Script/AIModule.BTService_RunEQS
     * Size -> 0x0060 (FullSize[0x00F8] - InheritedSize[0x0098])
     */
    class UBTService_RunEQS : public AIModule::UBTService_BlackboardBase
    {
    public:
        AIModule::FEQSParametrizedQueryExecutionRequest              EQSRequest;                                              //  Edit, Protected, NativeAccessSpecifierProtected
        bool                                                         bUpdateBBOnFail;                                         //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x17];                                  //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/AIModule.BTService_RunEQS");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

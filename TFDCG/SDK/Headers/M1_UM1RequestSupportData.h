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
#include "BasicTypes_FString.h"
#include "M1Data_ENUMS.h"
#include "M1Data_FM1TemplateId.h"
#include "CoreUObject_FDateTime.h"
#include "CoreUObject_UObject.h"

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
     * Class /Script/M1.M1RequestSupportData
     * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
     */
    class UM1RequestSupportData : public CoreUObject::UObject
    {
    public:
        int64_t                                                      AccountUid;                                              //  ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        BasicTypes::FString                                          AccountName;                                             //  ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1Data::EM1LoginPlatformTypes                                PlatformType;                                            //  ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int64_t                                                      PlatformUid;                                             //  ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        BasicTypes::FString                                          PlatformOnlineId;                                        //  ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        BasicTypes::FString                                          Token;                                                   //  ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        M1Data::FM1TemplateId                                        MissionTid;                                              //  NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0001[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FDateTime                                       ReceivedTime;                                            //  ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1RequestSupportData");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

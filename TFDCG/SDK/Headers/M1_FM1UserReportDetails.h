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
#include "CoreUObject_FDateTime.h"
#include "BasicTypes_FString.h"
#include "M1Data_ENUMS.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * ScriptStruct /Script/M1.M1UserReportDetails
     * Size -> 0x0020
     */
    struct FM1UserReportDetails
    {
    public:
        CoreUObject::FDateTime                                       ExpirationDateTime;                                      //  ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FString                                          UserName;                                                //  ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
        M1Data::EM1ReportReasonType                                  ReportReason;                                            //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

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
#include "M1_FM1NxLogInteger.h"
#include "M1_FM1NxLog_Location.h"
#include "M1_FM1NxLogDouble.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::M1
{
    /**
     * ScriptStruct /Script/M1.M1NxLog_HitLocValidationError
     * Size -> 0x0110
     */
    struct FM1NxLog_HitLocValidationError
    {
    public:
        BasicTypes::FString                                          actionid;                                                //  ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        M1::FM1NxLogInteger                                          userlevel;                                               //  NoDestructor, NativeAccessSpecifierPublic
        BasicTypes::FString                                          usernickname;                                            //  ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FString                                          tfdplayeritemid;                                         //  ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        M1::FM1NxLogInteger                                          tfdplayeritemlevel;                                      //  NoDestructor, NativeAccessSpecifierPublic
        BasicTypes::FString                                          tfdweaponitemid;                                         //  ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        M1::FM1NxLogInteger                                          tfdweaponitemlevel;                                      //  NoDestructor, NativeAccessSpecifierPublic
        BasicTypes::FString                                          FieldId;                                                 //  ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FString                                          fieldUid;                                                //  ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        M1::FM1NxLog_Location                                        clienthitloc;                                            //  NoDestructor, NativeAccessSpecifierPublic
        M1::FM1NxLog_Location                                        serverbaseloc;                                           //  NoDestructor, NativeAccessSpecifierPublic
        M1::FM1NxLogDouble                                           validationlocdiff;                                       //  NoDestructor, NativeAccessSpecifierPublic
        M1::FM1NxLogDouble                                           validationsize;                                          //  NoDestructor, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

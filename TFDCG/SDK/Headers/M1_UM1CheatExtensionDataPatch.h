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
#include "M1_UM1CheatExtensionBase.h"
#include "BasicTypes_FString.h"

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
     * Class /Script/M1.M1CheatExtensionDataPatch
     * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
     */
    class UM1CheatExtensionDataPatch : public M1::UM1CheatExtensionBase
    {
    public:
        void TestRequestURL(const BasicTypes::FString& URL);
        void StartPatch();
        void SetUseTestURL(bool bUseTestURL);
        void SetTestServerConfigURL(const BasicTypes::FString& URL);
        void SetTestPatchURL(const BasicTypes::FString& URL);
        void SetAlwaysStartPatch(bool bAlwaysStart);
        void RemovePatchData();
        void PrintPatchList();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1CheatExtensionDataPatch");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

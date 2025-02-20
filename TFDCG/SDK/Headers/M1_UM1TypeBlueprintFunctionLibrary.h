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
#include "Engine_UBlueprintFunctionLibrary.h"
#include "M1Data_FM1ScaledInteger.h"
#include "M1_FM1AbilityId.h"
#include "BasicTypes_FText.h"
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
     * Class /Script/M1.M1TypeBlueprintFunctionLibrary
     * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
     */
    class UM1TypeBlueprintFunctionLibrary : public Engine::UBlueprintFunctionLibrary
    {
    public:
        M1Data::FM1ScaledInteger STATIC_Subtract_ScaledIntScaledInt(const M1Data::FM1ScaledInteger& A, const M1Data::FM1ScaledInteger& B);
        bool STATIC_NotEqual_ScaledIntScaledInt(const M1Data::FM1ScaledInteger& A, const M1Data::FM1ScaledInteger& B);
        M1Data::FM1ScaledInteger STATIC_NegateScaledInt(const M1Data::FM1ScaledInteger& A);
        M1Data::FM1ScaledInteger STATIC_Multiply_ScaledIntScaledInt(const M1Data::FM1ScaledInteger& A, const M1Data::FM1ScaledInteger& B);
        bool STATIC_LessEqual_ScaledIntScaledInt(const M1Data::FM1ScaledInteger& A, const M1Data::FM1ScaledInteger& B);
        bool STATIC_Less_ScaledIntScaledInt(const M1Data::FM1ScaledInteger& A, const M1Data::FM1ScaledInteger& B);
        bool STATIC_GreaterEqual_ScaledIntScaledInt(const M1Data::FM1ScaledInteger& A, const M1Data::FM1ScaledInteger& B);
        bool STATIC_Greater_ScaledIntScaledInt(const M1Data::FM1ScaledInteger& A, const M1Data::FM1ScaledInteger& B);
        bool STATIC_Equal_ScaledIntScaledInt(const M1Data::FM1ScaledInteger& A, const M1Data::FM1ScaledInteger& B);
        bool STATIC_Equal_AbilityIdAbilityId(const M1::FM1AbilityId& A, const M1::FM1AbilityId& B);
        M1Data::FM1ScaledInteger STATIC_Divide_ScaledIntScaledInt(const M1Data::FM1ScaledInteger& A, const M1Data::FM1ScaledInteger& B);
        BasicTypes::FText STATIC_Conv_ScaledIntToText(const M1Data::FM1ScaledInteger& A);
        BasicTypes::FString STATIC_Conv_ScaledIntToString(const M1Data::FM1ScaledInteger& A);
        int32_t STATIC_Conv_ScaledIntToInt(const M1Data::FM1ScaledInteger& A);
        float STATIC_Conv_ScaledIntToFloat(const M1Data::FM1ScaledInteger& A);
        double STATIC_Conv_ScaledIntToDouble(const M1Data::FM1ScaledInteger& A);
        M1Data::FM1ScaledInteger STATIC_Add_ScaledIntScaledInt(const M1Data::FM1ScaledInteger& A, const M1Data::FM1ScaledInteger& B);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/M1.M1TypeBlueprintFunctionLibrary");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

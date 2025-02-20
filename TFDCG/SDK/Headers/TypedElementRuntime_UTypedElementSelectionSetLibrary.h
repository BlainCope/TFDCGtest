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
#include "CoreUObject_UObject.h"
#include "TypedElementFramework_FScriptTypedElementListProxy.h"
#include "TypedElementRuntime_FTypedElementSelectionOptions.h"
#include "TypedElementRuntime_FTypedElementSelectionNormalizationOptions.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::TypedElementRuntime { class UTypedElementSelectionSet; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::TypedElementRuntime
{
    /**
     * Class /Script/TypedElementRuntime.TypedElementSelectionSetLibrary
     * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
     */
    class UTypedElementSelectionSetLibrary : public CoreUObject::UObject
    {
    public:
        bool STATIC_SetSelectionFromList(TypedElementRuntime::UTypedElementSelectionSet* SelectionSet, const TypedElementFramework::FScriptTypedElementListProxy& ElementList, const TypedElementRuntime::FTypedElementSelectionOptions& SelectionOptions);
        bool STATIC_SelectElementsFromList(TypedElementRuntime::UTypedElementSelectionSet* SelectionSet, const TypedElementFramework::FScriptTypedElementListProxy& ElementList, const TypedElementRuntime::FTypedElementSelectionOptions& SelectionOptions);
        TypedElementFramework::FScriptTypedElementListProxy STATIC_GetNormalizedSelection(TypedElementRuntime::UTypedElementSelectionSet* SelectionSet, const TypedElementRuntime::FTypedElementSelectionNormalizationOptions& NormalizationOptions);
        TypedElementFramework::FScriptTypedElementListProxy STATIC_GetNormalizedElementList(TypedElementRuntime::UTypedElementSelectionSet* SelectionSet, const TypedElementFramework::FScriptTypedElementListProxy& ElementList, const TypedElementRuntime::FTypedElementSelectionNormalizationOptions& NormalizationOptions);
        bool STATIC_DeselectElementsFromList(TypedElementRuntime::UTypedElementSelectionSet* SelectionSet, const TypedElementFramework::FScriptTypedElementListProxy& ElementList, const TypedElementRuntime::FTypedElementSelectionOptions& SelectionOptions);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/TypedElementRuntime.TypedElementSelectionSetLibrary");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

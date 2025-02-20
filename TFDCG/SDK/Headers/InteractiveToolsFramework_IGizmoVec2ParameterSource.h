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
#include "CoreUObject_IInterface.h"
#include "CoreUObject_FVector2D.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::InteractiveToolsFramework
{
    /**
     * Class /Script/InteractiveToolsFramework.GizmoVec2ParameterSource
     * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
     */
    class IGizmoVec2ParameterSource : public CoreUObject::IInterface
    {
    public:
        void SetParameter(const CoreUObject::FVector2D& NewValue);
        CoreUObject::FVector2D GetParameter();
        void EndModify();
        void BeginModify();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/InteractiveToolsFramework.GizmoVec2ParameterSource");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

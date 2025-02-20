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
#include "LiveLinkInterface_FLiveLinkSubjectRepresentation.h"
#include "BasicTypes_TMap.h"
#include "BasicTypes_UMulticastInlineDelegate.h"
#include "Engine_UActorComponent.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::LiveLinkInterface { class ULiveLinkRole; };
namespace CG::LiveLinkComponents { class ULiveLinkControllerBase; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::LiveLinkComponents
{
    /**
     * Class /Script/LiveLinkComponents.LiveLinkComponentController
     * Size -> 0x00A8 (FullSize[0x0150] - InheritedSize[0x00A8])
     */
    class ULiveLinkComponentController : public Engine::UActorComponent
    {
    public:
        LiveLinkInterface::FLiveLinkSubjectRepresentation            SubjectRepresentation;                                   //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        BasicTypes::TMap<LiveLinkInterface::ULiveLinkRole*, LiveLinkComponents::ULiveLinkControllerBase*> ControllerMap;                                           //  Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, NoClear, Interp, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic
        bool                                                         bUpdateInEditor;                                         //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::UMulticastInlineDelegate                         OnLiveLinkUpdated;                                       //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::UMulticastInlineDelegate                         OnControllerMapUpdatedDelegate;                          //  ELEMENT_SIZE_MISMATCH ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0xF];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        bool                                                         bDisableEvaluateLiveLinkWhenSpawnable;                   //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bEvaluateLiveLink;                                       //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bUpdateInPreviewEditor;                                  //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0003[0x1D];                                  //  MISSED OFFSET (PADDING)

    public:
        void SetSubjectRepresentation(const LiveLinkInterface::FLiveLinkSubjectRepresentation& InSubjectRepresentation);
        LiveLinkInterface::FLiveLinkSubjectRepresentation GetSubjectRepresentation();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/LiveLinkComponents.LiveLinkComponentController");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

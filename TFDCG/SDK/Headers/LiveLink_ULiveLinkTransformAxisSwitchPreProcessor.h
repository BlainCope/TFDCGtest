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
#include "LiveLink_ENUMS.h"
#include "CoreUObject_FVector.h"
#include "CoreUObject_FRotator.h"
#include "LiveLinkInterface_ULiveLinkFramePreProcessor.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::LiveLink
{
    /**
     * Class /Script/LiveLink.LiveLinkTransformAxisSwitchPreProcessor
     * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
     */
    class ULiveLinkTransformAxisSwitchPreProcessor : public LiveLinkInterface::ULiveLinkFramePreProcessor
    {
    public:
        LiveLink::ELiveLinkAxis                                      FrontAxis;                                               //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        LiveLink::ELiveLinkAxis                                      RightAxis;                                               //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        LiveLink::ELiveLinkAxis                                      UpAxis;                                                  //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         bUseOffsetPosition;                                      //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         bUseOffsetOrientation;                                   //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FVector                                         OffsetPosition;                                          //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        CoreUObject::FRotator                                        OffsetOrientation;                                       //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0001[0x10];                                  //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/LiveLink.LiveLinkTransformAxisSwitchPreProcessor");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

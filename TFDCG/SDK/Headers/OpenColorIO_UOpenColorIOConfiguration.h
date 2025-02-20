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
#include "CoreUObject_FFilePath.h"
#include "BasicTypes_TArray.h"
#include "OpenColorIO_FOpenColorIOColorSpace.h"
#include "OpenColorIO_FOpenColorIODisplayView.h"
#include "CoreUObject_UObject.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::OpenColorIO { class UOpenColorIOColorTransform; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::OpenColorIO
{
    /**
     * Class /Script/OpenColorIO.OpenColorIOConfiguration
     * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
     */
    class UOpenColorIOConfiguration : public CoreUObject::UObject
    {
    public:
        CoreUObject::FFilePath                                       ConfigurationFile;                                       //  Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<OpenColorIO::FOpenColorIOColorSpace>      DesiredColorSpaces;                                      //  Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<OpenColorIO::FOpenColorIODisplayView>     DesiredDisplayViews;                                     //  Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<OpenColorIO::UOpenColorIOColorTransform*> ColorTransforms;                                         //  ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0x30];                                  //  MISSED OFFSET (PADDING)

    public:
        void ReloadExistingColorspaces();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/OpenColorIO.OpenColorIOConfiguration");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

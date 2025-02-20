#pragma once
#pragma warning(disable: 4267)

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
#include "CoreUObject_FAssetData.h"
#include "CoreUObject_FSoftObjectPath.h"
#include "CoreUObject_FARFilter.h"
#include "BasicTypes_TArray.h"
#include "AssetRegistry_FTagAndValue.h"
#include "BasicTypes_FName.h"
#include "BasicTypes_FString.h"
#include "BasicTypes_TScriptInterface.h"
#include "AssetRegistry_IAssetRegistry.h"
#include "AssetRegistry_FAssetRegistryDependencyOptions.h"
#include "CoreUObject_FTopLevelAssetPath.h"
#include "BasicTypes_TSet.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UObject; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AssetRegistry
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class UAssetRegistryHelpers_ToSoftObjectPath_Params
    {
    public:
        CoreUObject::FAssetData                                      InAssetData;                                             //  0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        CoreUObject::FSoftObjectPath                                 ReturnValue;                                             //  0x0068(0x0020)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UAssetRegistryHelpers_SetFilterTagsAndValues_Params
    {
    public:
        CoreUObject::FARFilter                                       InFilter;                                                //  0x0000(0x0150)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
        BasicTypes::TArray<AssetRegistry::FTagAndValue>              InTagsAndValues;                                         //  0x0150(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        CoreUObject::FARFilter                                       ReturnValue;                                             //  0x0160(0x0150)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UAssetRegistryHelpers_IsValid_Params
    {
    public:
        CoreUObject::FAssetData                                      InAssetData;                                             //  0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         ReturnValue;                                             //  0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UAssetRegistryHelpers_IsUAsset_Params
    {
    public:
        CoreUObject::FAssetData                                      InAssetData;                                             //  0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         ReturnValue;                                             //  0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UAssetRegistryHelpers_IsRedirector_Params
    {
    public:
        CoreUObject::FAssetData                                      InAssetData;                                             //  0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         ReturnValue;                                             //  0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UAssetRegistryHelpers_IsAssetLoaded_Params
    {
    public:
        CoreUObject::FAssetData                                      InAssetData;                                             //  0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         ReturnValue;                                             //  0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UAssetRegistryHelpers_GetTagValue_Params
    {
    public:
        CoreUObject::FAssetData                                      InAssetData;                                             //  0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        BasicTypes::FName                                            InTagName;                                               //  0x0068(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        BasicTypes::FString                                          OutTagValue;                                             //  0x0070(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         ReturnValue;                                             //  0x0080(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UAssetRegistryHelpers_GetFullName_Params
    {
    public:
        CoreUObject::FAssetData                                      InAssetData;                                             //  0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        BasicTypes::FString                                          ReturnValue;                                             //  0x0068(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UAssetRegistryHelpers_GetExportTextName_Params
    {
    public:
        CoreUObject::FAssetData                                      InAssetData;                                             //  0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        BasicTypes::FString                                          ReturnValue;                                             //  0x0068(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UAssetRegistryHelpers_GetClass_Params
    {
    public:
        CoreUObject::FAssetData                                      InAssetData;                                             //  0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        CoreUObject::UObject*                                        ReturnValue;                                             //  0x0068(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UAssetRegistryHelpers_GetBlueprintAssets_Params
    {
    public:
        CoreUObject::FARFilter                                       InFilter;                                                //  0x0000(0x0150)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FAssetData>                  OutAssetData;                                            //  0x0150(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UAssetRegistryHelpers_GetAssetRegistry_Params
    {
    public:
        BasicTypes::TScriptInterface<AssetRegistry::IAssetRegistry>  ReturnValue;                                             //  0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UAssetRegistryHelpers_GetAsset_Params
    {
    public:
        CoreUObject::FAssetData                                      InAssetData;                                             //  0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        CoreUObject::UObject*                                        ReturnValue;                                             //  0x0068(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UAssetRegistryHelpers_FindAssetNativeClass_Params
    {
    public:
        CoreUObject::FAssetData                                      AssetData;                                               //  0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        CoreUObject::UObject*                                        ReturnValue;                                             //  0x0068(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UAssetRegistryHelpers_CreateAssetData_Params
    {
    public:
        CoreUObject::UObject*                                        InAsset;                                                 //  0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         bAllowBlueprintClass;                                    //  0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        uint8_t                                                      UnknownData_0000[0x7];                                   //  0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        CoreUObject::FAssetData                                      ReturnValue;                                             //  0x0010(0x0068)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IAssetRegistry_WaitForPackage_Params
    {
    public:
        BasicTypes::FString                                          PackageName;                                             //  0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IAssetRegistry_WaitForCompletion_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IAssetRegistry_UseFilterToExcludeAssets_Params
    {
    public:
        BasicTypes::TArray<CoreUObject::FAssetData>                  AssetDataList;                                           //  0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        CoreUObject::FARFilter                                       Filter;                                                  //  0x0010(0x0150)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IAssetRegistry_SearchAllAssets_Params
    {
    public:
        bool                                                         bSynchronousSearch;                                      //  0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IAssetRegistry_ScanPathsSynchronous_Params
    {
    public:
        BasicTypes::TArray<BasicTypes::FString>                      InPaths;                                                 //  0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        bool                                                         bForceRescan;                                            //  0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         bIgnoreDenyListScanFilters;                              //  0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IAssetRegistry_ScanModifiedAssetFiles_Params
    {
    public:
        BasicTypes::TArray<BasicTypes::FString>                      InFilePaths;                                             //  0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IAssetRegistry_ScanFilesSynchronous_Params
    {
    public:
        BasicTypes::TArray<BasicTypes::FString>                      InFilePaths;                                             //  0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        bool                                                         bForceRescan;                                            //  0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IAssetRegistry_RunAssetsThroughFilter_Params
    {
    public:
        BasicTypes::TArray<CoreUObject::FAssetData>                  AssetDataList;                                           //  0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        CoreUObject::FARFilter                                       Filter;                                                  //  0x0010(0x0150)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IAssetRegistry_PrioritizeSearchPath_Params
    {
    public:
        BasicTypes::FString                                          PathToPrioritize;                                        //  0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IAssetRegistry_K2_GetReferencers_Params
    {
    public:
        BasicTypes::FName                                            PackageName;                                             //  0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        AssetRegistry::FAssetRegistryDependencyOptions               ReferenceOptions;                                        //  0x0008(0x0005)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
        uint8_t                                                      UnknownData_0000[0x3];                                   //  0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        BasicTypes::TArray<BasicTypes::FName>                        OutReferencers;                                          //  0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
        bool                                                         ReturnValue;                                             //  0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IAssetRegistry_K2_GetDependencies_Params
    {
    public:
        BasicTypes::FName                                            PackageName;                                             //  0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        AssetRegistry::FAssetRegistryDependencyOptions               DependencyOptions;                                       //  0x0008(0x0005)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
        uint8_t                                                      UnknownData_0001[0x3];                                   //  0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        BasicTypes::TArray<BasicTypes::FName>                        OutDependencies;                                         //  0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
        bool                                                         ReturnValue;                                             //  0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IAssetRegistry_K2_GetAssetByObjectPath_Params
    {
    public:
        CoreUObject::FSoftObjectPath                                 ObjectPath;                                              //  0x0000(0x0020)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         bIncludeOnlyOnDiskAssets;                                //  0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         bSkipARFilteredAssets;                                   //  0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        uint8_t                                                      UnknownData_0002[0x6];                                   //  0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        CoreUObject::FAssetData                                      ReturnValue;                                             //  0x0028(0x0068)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IAssetRegistry_IsSearchAsync_Params
    {
    public:
        bool                                                         ReturnValue;                                             //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IAssetRegistry_IsSearchAllAssets_Params
    {
    public:
        bool                                                         ReturnValue;                                             //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IAssetRegistry_IsLoadingAssets_Params
    {
    public:
        bool                                                         ReturnValue;                                             //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IAssetRegistry_HasAssets_Params
    {
    public:
        BasicTypes::FName                                            PackagePath;                                             //  0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         bRecursive;                                              //  0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         ReturnValue;                                             //  0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IAssetRegistry_GetSubPaths_Params
    {
    public:
        BasicTypes::FString                                          InBasePath;                                              //  0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        BasicTypes::TArray<BasicTypes::FString>                      OutPathList;                                             //  0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
        bool                                                         bInRecurse;                                              //  0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IAssetRegistry_GetDerivedClassNames_Params
    {
    public:
        BasicTypes::TArray<CoreUObject::FTopLevelAssetPath>          ClassNames;                                              //  0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
        BasicTypes::TSet<CoreUObject::FTopLevelAssetPath>            ExcludedClassNames;                                      //  0x0010(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
        BasicTypes::TSet<CoreUObject::FTopLevelAssetPath>            OutDerivedClassNames;                                    //  0x0060(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IAssetRegistry_GetAssetsByPaths_Params
    {
    public:
        BasicTypes::TArray<BasicTypes::FName>                        PackagePaths;                                            //  0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FAssetData>                  OutAssetData;                                            //  0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
        bool                                                         bRecursive;                                              //  0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         bIncludeOnlyOnDiskAssets;                                //  0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         ReturnValue;                                             //  0x0022(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IAssetRegistry_GetAssetsByPath_Params
    {
    public:
        BasicTypes::FName                                            PackagePath;                                             //  0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FAssetData>                  OutAssetData;                                            //  0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
        bool                                                         bRecursive;                                              //  0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         bIncludeOnlyOnDiskAssets;                                //  0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         ReturnValue;                                             //  0x001A(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IAssetRegistry_GetAssetsByPackageName_Params
    {
    public:
        BasicTypes::FName                                            PackageName;                                             //  0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FAssetData>                  OutAssetData;                                            //  0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
        bool                                                         bIncludeOnlyOnDiskAssets;                                //  0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         bSkipARFilteredAssets;                                   //  0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         ReturnValue;                                             //  0x001A(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IAssetRegistry_GetAssetsByClass_Params
    {
    public:
        CoreUObject::FTopLevelAssetPath                              ClassPathName;                                           //  0x0000(0x0010)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FAssetData>                  OutAssetData;                                            //  0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
        bool                                                         bSearchSubClasses;                                       //  0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         ReturnValue;                                             //  0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IAssetRegistry_GetAssets_Params
    {
    public:
        CoreUObject::FARFilter                                       Filter;                                                  //  0x0000(0x0150)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FAssetData>                  OutAssetData;                                            //  0x0150(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
        bool                                                         bSkipARFilteredAssets;                                   //  0x0160(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         ReturnValue;                                             //  0x0161(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IAssetRegistry_GetAssetByObjectPath_Params
    {
    public:
        BasicTypes::FName                                            ObjectPath;                                              //  0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         bIncludeOnlyOnDiskAssets;                                //  0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        uint8_t                                                      UnknownData_0003[0x7];                                   //  0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        CoreUObject::FAssetData                                      ReturnValue;                                             //  0x0010(0x0068)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IAssetRegistry_GetAncestorClassNames_Params
    {
    public:
        CoreUObject::FTopLevelAssetPath                              ClassPathName;                                           //  0x0000(0x0010)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::FTopLevelAssetPath>          OutAncestorClassNames;                                   //  0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
        bool                                                         ReturnValue;                                             //  0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IAssetRegistry_GetAllCachedPaths_Params
    {
    public:
        BasicTypes::TArray<BasicTypes::FString>                      OutPathList;                                             //  0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IAssetRegistry_GetAllAssets_Params
    {
    public:
        BasicTypes::TArray<CoreUObject::FAssetData>                  OutAssetData;                                            //  0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
        bool                                                         bIncludeOnlyOnDiskAssets;                                //  0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                                         ReturnValue;                                             //  0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif

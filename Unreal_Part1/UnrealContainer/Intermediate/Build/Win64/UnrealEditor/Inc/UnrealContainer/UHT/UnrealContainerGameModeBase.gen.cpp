// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealContainer/UnrealContainerGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealContainerGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UNREALCONTAINER_API UClass* Z_Construct_UClass_AUnrealContainerGameModeBase();
	UNREALCONTAINER_API UClass* Z_Construct_UClass_AUnrealContainerGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealContainer();
// End Cross Module References
	void AUnrealContainerGameModeBase::StaticRegisterNativesAUnrealContainerGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnrealContainerGameModeBase);
	UClass* Z_Construct_UClass_AUnrealContainerGameModeBase_NoRegister()
	{
		return AUnrealContainerGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealContainerGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealContainerGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealContainer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealContainerGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UnrealContainerGameModeBase.h" },
		{ "ModuleRelativePath", "UnrealContainerGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealContainerGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealContainerGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnrealContainerGameModeBase_Statics::ClassParams = {
		&AUnrealContainerGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUnrealContainerGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealContainerGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealContainerGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AUnrealContainerGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnrealContainerGameModeBase.OuterSingleton, Z_Construct_UClass_AUnrealContainerGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUnrealContainerGameModeBase.OuterSingleton;
	}
	template<> UNREALCONTAINER_API UClass* StaticClass<AUnrealContainerGameModeBase>()
	{
		return AUnrealContainerGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealContainerGameModeBase);
	AUnrealContainerGameModeBase::~AUnrealContainerGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_UnrealTest_Unreal_Study_UnrealContainer_Source_UnrealContainer_UnrealContainerGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealTest_Unreal_Study_UnrealContainer_Source_UnrealContainer_UnrealContainerGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUnrealContainerGameModeBase, AUnrealContainerGameModeBase::StaticClass, TEXT("AUnrealContainerGameModeBase"), &Z_Registration_Info_UClass_AUnrealContainerGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnrealContainerGameModeBase), 1609760864U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealTest_Unreal_Study_UnrealContainer_Source_UnrealContainer_UnrealContainerGameModeBase_h_1553256230(TEXT("/Script/UnrealContainer"),
		Z_CompiledInDeferFile_FID_UnrealTest_Unreal_Study_UnrealContainer_Source_UnrealContainer_UnrealContainerGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealTest_Unreal_Study_UnrealContainer_Source_UnrealContainer_UnrealContainerGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

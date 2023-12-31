// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealDelegate/UnrealDelegateGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealDelegateGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UNREALDELEGATE_API UClass* Z_Construct_UClass_AUnrealDelegateGameModeBase();
	UNREALDELEGATE_API UClass* Z_Construct_UClass_AUnrealDelegateGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealDelegate();
// End Cross Module References
	void AUnrealDelegateGameModeBase::StaticRegisterNativesAUnrealDelegateGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnrealDelegateGameModeBase);
	UClass* Z_Construct_UClass_AUnrealDelegateGameModeBase_NoRegister()
	{
		return AUnrealDelegateGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealDelegateGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealDelegateGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealDelegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealDelegateGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UnrealDelegateGameModeBase.h" },
		{ "ModuleRelativePath", "UnrealDelegateGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealDelegateGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealDelegateGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnrealDelegateGameModeBase_Statics::ClassParams = {
		&AUnrealDelegateGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUnrealDelegateGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealDelegateGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealDelegateGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AUnrealDelegateGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnrealDelegateGameModeBase.OuterSingleton, Z_Construct_UClass_AUnrealDelegateGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUnrealDelegateGameModeBase.OuterSingleton;
	}
	template<> UNREALDELEGATE_API UClass* StaticClass<AUnrealDelegateGameModeBase>()
	{
		return AUnrealDelegateGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealDelegateGameModeBase);
	AUnrealDelegateGameModeBase::~AUnrealDelegateGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_UnrealTest_Unreal_Study_UnrealDelegate_Source_UnrealDelegate_UnrealDelegateGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealTest_Unreal_Study_UnrealDelegate_Source_UnrealDelegate_UnrealDelegateGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUnrealDelegateGameModeBase, AUnrealDelegateGameModeBase::StaticClass, TEXT("AUnrealDelegateGameModeBase"), &Z_Registration_Info_UClass_AUnrealDelegateGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnrealDelegateGameModeBase), 190941689U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealTest_Unreal_Study_UnrealDelegate_Source_UnrealDelegate_UnrealDelegateGameModeBase_h_3709491433(TEXT("/Script/UnrealDelegate"),
		Z_CompiledInDeferFile_FID_UnrealTest_Unreal_Study_UnrealDelegate_Source_UnrealDelegate_UnrealDelegateGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealTest_Unreal_Study_UnrealDelegate_Source_UnrealDelegate_UnrealDelegateGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

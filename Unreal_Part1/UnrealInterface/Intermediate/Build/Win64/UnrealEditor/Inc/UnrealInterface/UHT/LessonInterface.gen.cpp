// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealInterface/LessonInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLessonInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UNREALINTERFACE_API UClass* Z_Construct_UClass_ULessonInterface();
	UNREALINTERFACE_API UClass* Z_Construct_UClass_ULessonInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealInterface();
// End Cross Module References
	void ULessonInterface::StaticRegisterNativesULessonInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULessonInterface);
	UClass* Z_Construct_UClass_ULessonInterface_NoRegister()
	{
		return ULessonInterface::StaticClass();
	}
	struct Z_Construct_UClass_ULessonInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULessonInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealInterface,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULessonInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "LessonInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULessonInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILessonInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULessonInterface_Statics::ClassParams = {
		&ULessonInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULessonInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULessonInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULessonInterface()
	{
		if (!Z_Registration_Info_UClass_ULessonInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULessonInterface.OuterSingleton, Z_Construct_UClass_ULessonInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULessonInterface.OuterSingleton;
	}
	template<> UNREALINTERFACE_API UClass* StaticClass<ULessonInterface>()
	{
		return ULessonInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULessonInterface);
	ULessonInterface::~ULessonInterface() {}
	struct Z_CompiledInDeferFile_FID_UnrealTest_Unreal_Study_UnrealInterface_Source_UnrealInterface_LessonInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealTest_Unreal_Study_UnrealInterface_Source_UnrealInterface_LessonInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULessonInterface, ULessonInterface::StaticClass, TEXT("ULessonInterface"), &Z_Registration_Info_UClass_ULessonInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULessonInterface), 2191010613U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealTest_Unreal_Study_UnrealInterface_Source_UnrealInterface_LessonInterface_h_2212261221(TEXT("/Script/UnrealInterface"),
		Z_CompiledInDeferFile_FID_UnrealTest_Unreal_Study_UnrealInterface_Source_UnrealInterface_LessonInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealTest_Unreal_Study_UnrealInterface_Source_UnrealInterface_LessonInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

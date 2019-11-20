// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "codename_geography/codename_geographyPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecodename_geographyPlayerController() {}
// Cross Module References
	CODENAME_GEOGRAPHY_API UClass* Z_Construct_UClass_Acodename_geographyPlayerController_NoRegister();
	CODENAME_GEOGRAPHY_API UClass* Z_Construct_UClass_Acodename_geographyPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_codename_geography();
// End Cross Module References
	void Acodename_geographyPlayerController::StaticRegisterNativesAcodename_geographyPlayerController()
	{
	}
	UClass* Z_Construct_UClass_Acodename_geographyPlayerController_NoRegister()
	{
		return Acodename_geographyPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_Acodename_geographyPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Acodename_geographyPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_codename_geography,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Acodename_geographyPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "codename_geographyPlayerController.h" },
		{ "ModuleRelativePath", "codename_geographyPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Acodename_geographyPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Acodename_geographyPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Acodename_geographyPlayerController_Statics::ClassParams = {
		&Acodename_geographyPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_Acodename_geographyPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_Acodename_geographyPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Acodename_geographyPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Acodename_geographyPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Acodename_geographyPlayerController, 4127639679);
	template<> CODENAME_GEOGRAPHY_API UClass* StaticClass<Acodename_geographyPlayerController>()
	{
		return Acodename_geographyPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Acodename_geographyPlayerController(Z_Construct_UClass_Acodename_geographyPlayerController, &Acodename_geographyPlayerController::StaticClass, TEXT("/Script/codename_geography"), TEXT("Acodename_geographyPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Acodename_geographyPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

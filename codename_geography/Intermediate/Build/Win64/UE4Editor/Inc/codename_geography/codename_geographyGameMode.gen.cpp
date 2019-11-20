// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "codename_geography/codename_geographyGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecodename_geographyGameMode() {}
// Cross Module References
	CODENAME_GEOGRAPHY_API UClass* Z_Construct_UClass_Acodename_geographyGameMode_NoRegister();
	CODENAME_GEOGRAPHY_API UClass* Z_Construct_UClass_Acodename_geographyGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_codename_geography();
// End Cross Module References
	void Acodename_geographyGameMode::StaticRegisterNativesAcodename_geographyGameMode()
	{
	}
	UClass* Z_Construct_UClass_Acodename_geographyGameMode_NoRegister()
	{
		return Acodename_geographyGameMode::StaticClass();
	}
	struct Z_Construct_UClass_Acodename_geographyGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Acodename_geographyGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_codename_geography,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Acodename_geographyGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "codename_geographyGameMode.h" },
		{ "ModuleRelativePath", "codename_geographyGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Acodename_geographyGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Acodename_geographyGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Acodename_geographyGameMode_Statics::ClassParams = {
		&Acodename_geographyGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_Acodename_geographyGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_Acodename_geographyGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Acodename_geographyGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Acodename_geographyGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Acodename_geographyGameMode, 2052207319);
	template<> CODENAME_GEOGRAPHY_API UClass* StaticClass<Acodename_geographyGameMode>()
	{
		return Acodename_geographyGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Acodename_geographyGameMode(Z_Construct_UClass_Acodename_geographyGameMode, &Acodename_geographyGameMode::StaticClass, TEXT("/Script/codename_geography"), TEXT("Acodename_geographyGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Acodename_geographyGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

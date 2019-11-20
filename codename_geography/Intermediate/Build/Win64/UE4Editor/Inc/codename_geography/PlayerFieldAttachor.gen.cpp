// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "codename_geography/PlayerFieldAttachor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerFieldAttachor() {}
// Cross Module References
	CODENAME_GEOGRAPHY_API UClass* Z_Construct_UClass_UPlayerFieldAttachor_NoRegister();
	CODENAME_GEOGRAPHY_API UClass* Z_Construct_UClass_UPlayerFieldAttachor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_codename_geography();
// End Cross Module References
	void UPlayerFieldAttachor::StaticRegisterNativesUPlayerFieldAttachor()
	{
	}
	UClass* Z_Construct_UClass_UPlayerFieldAttachor_NoRegister()
	{
		return UPlayerFieldAttachor::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerFieldAttachor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerFieldAttachor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_codename_geography,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerFieldAttachor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerFieldAttachor.h" },
		{ "ModuleRelativePath", "PlayerFieldAttachor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerFieldAttachor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerFieldAttachor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerFieldAttachor_Statics::ClassParams = {
		&UPlayerFieldAttachor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerFieldAttachor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPlayerFieldAttachor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerFieldAttachor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerFieldAttachor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerFieldAttachor, 2020818250);
	template<> CODENAME_GEOGRAPHY_API UClass* StaticClass<UPlayerFieldAttachor>()
	{
		return UPlayerFieldAttachor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerFieldAttachor(Z_Construct_UClass_UPlayerFieldAttachor, &UPlayerFieldAttachor::StaticClass, TEXT("/Script/codename_geography"), TEXT("UPlayerFieldAttachor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerFieldAttachor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

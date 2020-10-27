// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DreamEscape/Position_In_World.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePosition_In_World() {}
// Cross Module References
	DREAMESCAPE_API UClass* Z_Construct_UClass_UPosition_In_World_NoRegister();
	DREAMESCAPE_API UClass* Z_Construct_UClass_UPosition_In_World();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DreamEscape();
// End Cross Module References
	void UPosition_In_World::StaticRegisterNativesUPosition_In_World()
	{
	}
	UClass* Z_Construct_UClass_UPosition_In_World_NoRegister()
	{
		return UPosition_In_World::StaticClass();
	}
	struct Z_Construct_UClass_UPosition_In_World_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPosition_In_World_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DreamEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPosition_In_World_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Position_In_World.h" },
		{ "ModuleRelativePath", "Position_In_World.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPosition_In_World_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPosition_In_World>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPosition_In_World_Statics::ClassParams = {
		&UPosition_In_World::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPosition_In_World_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPosition_In_World_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPosition_In_World()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPosition_In_World_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPosition_In_World, 1071181106);
	template<> DREAMESCAPE_API UClass* StaticClass<UPosition_In_World>()
	{
		return UPosition_In_World::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPosition_In_World(Z_Construct_UClass_UPosition_In_World, &UPosition_In_World::StaticClass, TEXT("/Script/DreamEscape"), TEXT("UPosition_In_World"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPosition_In_World);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

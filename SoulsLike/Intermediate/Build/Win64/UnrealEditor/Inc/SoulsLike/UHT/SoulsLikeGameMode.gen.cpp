// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoulsLike/SoulsLikeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoulsLikeGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SOULSLIKE_API UClass* Z_Construct_UClass_ASoulsLikeGameMode();
	SOULSLIKE_API UClass* Z_Construct_UClass_ASoulsLikeGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SoulsLike();
// End Cross Module References
	void ASoulsLikeGameMode::StaticRegisterNativesASoulsLikeGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASoulsLikeGameMode);
	UClass* Z_Construct_UClass_ASoulsLikeGameMode_NoRegister()
	{
		return ASoulsLikeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASoulsLikeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASoulsLikeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SoulsLike,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASoulsLikeGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoulsLikeGameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SoulsLikeGameMode.h" },
		{ "ModuleRelativePath", "SoulsLikeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASoulsLikeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASoulsLikeGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASoulsLikeGameMode_Statics::ClassParams = {
		&ASoulsLikeGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASoulsLikeGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASoulsLikeGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ASoulsLikeGameMode()
	{
		if (!Z_Registration_Info_UClass_ASoulsLikeGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASoulsLikeGameMode.OuterSingleton, Z_Construct_UClass_ASoulsLikeGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASoulsLikeGameMode.OuterSingleton;
	}
	template<> SOULSLIKE_API UClass* StaticClass<ASoulsLikeGameMode>()
	{
		return ASoulsLikeGameMode::StaticClass();
	}
	ASoulsLikeGameMode::ASoulsLikeGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASoulsLikeGameMode);
	ASoulsLikeGameMode::~ASoulsLikeGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_Emil_Engberg_OneDrive_Dokumenter_GitHub_SoulsLikeGame_SoulsLike_Source_SoulsLike_SoulsLikeGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Emil_Engberg_OneDrive_Dokumenter_GitHub_SoulsLikeGame_SoulsLike_Source_SoulsLike_SoulsLikeGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASoulsLikeGameMode, ASoulsLikeGameMode::StaticClass, TEXT("ASoulsLikeGameMode"), &Z_Registration_Info_UClass_ASoulsLikeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASoulsLikeGameMode), 2146460903U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Emil_Engberg_OneDrive_Dokumenter_GitHub_SoulsLikeGame_SoulsLike_Source_SoulsLike_SoulsLikeGameMode_h_3216696323(TEXT("/Script/SoulsLike"),
		Z_CompiledInDeferFile_FID_Users_Emil_Engberg_OneDrive_Dokumenter_GitHub_SoulsLikeGame_SoulsLike_Source_SoulsLike_SoulsLikeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Emil_Engberg_OneDrive_Dokumenter_GitHub_SoulsLikeGame_SoulsLike_Source_SoulsLike_SoulsLikeGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

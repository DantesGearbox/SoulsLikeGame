// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoulsLike/MyGameModeBaseTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameModeBaseTest() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SOULSLIKE_API UClass* Z_Construct_UClass_AMyGameModeBaseTest();
	SOULSLIKE_API UClass* Z_Construct_UClass_AMyGameModeBaseTest_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SoulsLike();
// End Cross Module References
	void AMyGameModeBaseTest::StaticRegisterNativesAMyGameModeBaseTest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyGameModeBaseTest);
	UClass* Z_Construct_UClass_AMyGameModeBaseTest_NoRegister()
	{
		return AMyGameModeBaseTest::StaticClass();
	}
	struct Z_Construct_UClass_AMyGameModeBaseTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyGameModeBaseTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SoulsLike,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBaseTest_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyGameModeBaseTest_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyGameModeBaseTest.h" },
		{ "ModuleRelativePath", "MyGameModeBaseTest.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyGameModeBaseTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGameModeBaseTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyGameModeBaseTest_Statics::ClassParams = {
		&AMyGameModeBaseTest::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameModeBaseTest_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyGameModeBaseTest_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMyGameModeBaseTest()
	{
		if (!Z_Registration_Info_UClass_AMyGameModeBaseTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyGameModeBaseTest.OuterSingleton, Z_Construct_UClass_AMyGameModeBaseTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyGameModeBaseTest.OuterSingleton;
	}
	template<> SOULSLIKE_API UClass* StaticClass<AMyGameModeBaseTest>()
	{
		return AMyGameModeBaseTest::StaticClass();
	}
	AMyGameModeBaseTest::AMyGameModeBaseTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameModeBaseTest);
	AMyGameModeBaseTest::~AMyGameModeBaseTest() {}
	struct Z_CompiledInDeferFile_FID_Users_Emil_Engberg_OneDrive_Dokumenter_GitHub_SoulsLikeGame_SoulsLike_Source_SoulsLike_MyGameModeBaseTest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Emil_Engberg_OneDrive_Dokumenter_GitHub_SoulsLikeGame_SoulsLike_Source_SoulsLike_MyGameModeBaseTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyGameModeBaseTest, AMyGameModeBaseTest::StaticClass, TEXT("AMyGameModeBaseTest"), &Z_Registration_Info_UClass_AMyGameModeBaseTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyGameModeBaseTest), 1010660253U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Emil_Engberg_OneDrive_Dokumenter_GitHub_SoulsLikeGame_SoulsLike_Source_SoulsLike_MyGameModeBaseTest_h_2106004121(TEXT("/Script/SoulsLike"),
		Z_CompiledInDeferFile_FID_Users_Emil_Engberg_OneDrive_Dokumenter_GitHub_SoulsLikeGame_SoulsLike_Source_SoulsLike_MyGameModeBaseTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Emil_Engberg_OneDrive_Dokumenter_GitHub_SoulsLikeGame_SoulsLike_Source_SoulsLike_MyGameModeBaseTest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

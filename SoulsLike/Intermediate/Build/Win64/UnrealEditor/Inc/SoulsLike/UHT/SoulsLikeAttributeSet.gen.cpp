// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoulsLike/SoulsLikeAttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoulsLikeAttributeSet() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	SOULSLIKE_API UClass* Z_Construct_UClass_USoulsLikeAttributeSet();
	SOULSLIKE_API UClass* Z_Construct_UClass_USoulsLikeAttributeSet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SoulsLike();
// End Cross Module References
	void USoulsLikeAttributeSet::StaticRegisterNativesUSoulsLikeAttributeSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoulsLikeAttributeSet);
	UClass* Z_Construct_UClass_USoulsLikeAttributeSet_NoRegister()
	{
		return USoulsLikeAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_USoulsLikeAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoulsLikeAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_SoulsLike,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoulsLikeAttributeSet_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoulsLikeAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SoulsLikeAttributeSet.h" },
		{ "ModuleRelativePath", "SoulsLikeAttributeSet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoulsLikeAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoulsLikeAttributeSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoulsLikeAttributeSet_Statics::ClassParams = {
		&USoulsLikeAttributeSet::StaticClass,
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
		0x003000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoulsLikeAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_USoulsLikeAttributeSet_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USoulsLikeAttributeSet()
	{
		if (!Z_Registration_Info_UClass_USoulsLikeAttributeSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoulsLikeAttributeSet.OuterSingleton, Z_Construct_UClass_USoulsLikeAttributeSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoulsLikeAttributeSet.OuterSingleton;
	}
	template<> SOULSLIKE_API UClass* StaticClass<USoulsLikeAttributeSet>()
	{
		return USoulsLikeAttributeSet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoulsLikeAttributeSet);
	USoulsLikeAttributeSet::~USoulsLikeAttributeSet() {}
	struct Z_CompiledInDeferFile_FID_Users_Mads_Documents_Unreal_Projects_SoulLikeGame_Git_SoulsLike_Source_SoulsLike_SoulsLikeAttributeSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mads_Documents_Unreal_Projects_SoulLikeGame_Git_SoulsLike_Source_SoulsLike_SoulsLikeAttributeSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoulsLikeAttributeSet, USoulsLikeAttributeSet::StaticClass, TEXT("USoulsLikeAttributeSet"), &Z_Registration_Info_UClass_USoulsLikeAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoulsLikeAttributeSet), 3363705585U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mads_Documents_Unreal_Projects_SoulLikeGame_Git_SoulsLike_Source_SoulsLike_SoulsLikeAttributeSet_h_4061372636(TEXT("/Script/SoulsLike"),
		Z_CompiledInDeferFile_FID_Users_Mads_Documents_Unreal_Projects_SoulLikeGame_Git_SoulsLike_Source_SoulsLike_SoulsLikeAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mads_Documents_Unreal_Projects_SoulLikeGame_Git_SoulsLike_Source_SoulsLike_SoulsLikeAttributeSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

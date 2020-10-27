// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DREAMESCAPE_OpenDoor_generated_h
#error "OpenDoor.generated.h already included, missing '#pragma once' in OpenDoor.h"
#endif
#define DREAMESCAPE_OpenDoor_generated_h

#define DreamEscape_Source_DreamEscape_OpenDoor_h_14_SPARSE_DATA
#define DreamEscape_Source_DreamEscape_OpenDoor_h_14_RPC_WRAPPERS
#define DreamEscape_Source_DreamEscape_OpenDoor_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define DreamEscape_Source_DreamEscape_OpenDoor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenDoor(); \
	friend struct Z_Construct_UClass_UOpenDoor_Statics; \
public: \
	DECLARE_CLASS(UOpenDoor, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DreamEscape"), NO_API) \
	DECLARE_SERIALIZER(UOpenDoor)


#define DreamEscape_Source_DreamEscape_OpenDoor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUOpenDoor(); \
	friend struct Z_Construct_UClass_UOpenDoor_Statics; \
public: \
	DECLARE_CLASS(UOpenDoor, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DreamEscape"), NO_API) \
	DECLARE_SERIALIZER(UOpenDoor)


#define DreamEscape_Source_DreamEscape_OpenDoor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenDoor(UOpenDoor&&); \
	NO_API UOpenDoor(const UOpenDoor&); \
public:


#define DreamEscape_Source_DreamEscape_OpenDoor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenDoor(UOpenDoor&&); \
	NO_API UOpenDoor(const UOpenDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOpenDoor)


#define DreamEscape_Source_DreamEscape_OpenDoor_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TargetYaw() { return STRUCT_OFFSET(UOpenDoor, TargetYaw); } \
	FORCEINLINE static uint32 __PPO__PressurePlate() { return STRUCT_OFFSET(UOpenDoor, PressurePlate); }


#define DreamEscape_Source_DreamEscape_OpenDoor_h_11_PROLOG
#define DreamEscape_Source_DreamEscape_OpenDoor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DreamEscape_Source_DreamEscape_OpenDoor_h_14_PRIVATE_PROPERTY_OFFSET \
	DreamEscape_Source_DreamEscape_OpenDoor_h_14_SPARSE_DATA \
	DreamEscape_Source_DreamEscape_OpenDoor_h_14_RPC_WRAPPERS \
	DreamEscape_Source_DreamEscape_OpenDoor_h_14_INCLASS \
	DreamEscape_Source_DreamEscape_OpenDoor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DreamEscape_Source_DreamEscape_OpenDoor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DreamEscape_Source_DreamEscape_OpenDoor_h_14_PRIVATE_PROPERTY_OFFSET \
	DreamEscape_Source_DreamEscape_OpenDoor_h_14_SPARSE_DATA \
	DreamEscape_Source_DreamEscape_OpenDoor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DreamEscape_Source_DreamEscape_OpenDoor_h_14_INCLASS_NO_PURE_DECLS \
	DreamEscape_Source_DreamEscape_OpenDoor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DREAMESCAPE_API UClass* StaticClass<class UOpenDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DreamEscape_Source_DreamEscape_OpenDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

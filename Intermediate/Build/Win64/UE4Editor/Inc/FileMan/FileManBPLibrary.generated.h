// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FILEMAN_FileManBPLibrary_generated_h
#error "FileManBPLibrary.generated.h already included, missing '#pragma once' in FileManBPLibrary.h"
#endif
#define FILEMAN_FileManBPLibrary_generated_h

#define C__Users_Aaron_Desktop_FileMan_FileMan_HostProject_Plugins_FileMan_Source_FileMan_Public_FileManBPLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWriteFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Content); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFileManBPLibrary::WriteFile(Z_Param_Content,Z_Param_FileName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_File); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFileManBPLibrary::ReadFile(Z_Param_File,Z_Param_Out_Content); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFilesInPath) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Files); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFileManBPLibrary::GetFilesInPath(Z_Param_Out_Files,Z_Param_Path); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFileManBPLibrary::DeleteFile(Z_Param_FileName); \
		P_NATIVE_END; \
	}


#define C__Users_Aaron_Desktop_FileMan_FileMan_HostProject_Plugins_FileMan_Source_FileMan_Public_FileManBPLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWriteFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Content); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFileManBPLibrary::WriteFile(Z_Param_Content,Z_Param_FileName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_File); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFileManBPLibrary::ReadFile(Z_Param_File,Z_Param_Out_Content); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFilesInPath) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Files); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFileManBPLibrary::GetFilesInPath(Z_Param_Out_Files,Z_Param_Path); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFileManBPLibrary::DeleteFile(Z_Param_FileName); \
		P_NATIVE_END; \
	}


#define C__Users_Aaron_Desktop_FileMan_FileMan_HostProject_Plugins_FileMan_Source_FileMan_Public_FileManBPLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFileManBPLibrary(); \
	friend struct Z_Construct_UClass_UFileManBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFileManBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FileMan"), NO_API) \
	DECLARE_SERIALIZER(UFileManBPLibrary)


#define C__Users_Aaron_Desktop_FileMan_FileMan_HostProject_Plugins_FileMan_Source_FileMan_Public_FileManBPLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFileManBPLibrary(); \
	friend struct Z_Construct_UClass_UFileManBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFileManBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FileMan"), NO_API) \
	DECLARE_SERIALIZER(UFileManBPLibrary)


#define C__Users_Aaron_Desktop_FileMan_FileMan_HostProject_Plugins_FileMan_Source_FileMan_Public_FileManBPLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileManBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileManBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileManBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileManBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileManBPLibrary(UFileManBPLibrary&&); \
	NO_API UFileManBPLibrary(const UFileManBPLibrary&); \
public:


#define C__Users_Aaron_Desktop_FileMan_FileMan_HostProject_Plugins_FileMan_Source_FileMan_Public_FileManBPLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileManBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileManBPLibrary(UFileManBPLibrary&&); \
	NO_API UFileManBPLibrary(const UFileManBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileManBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileManBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileManBPLibrary)


#define C__Users_Aaron_Desktop_FileMan_FileMan_HostProject_Plugins_FileMan_Source_FileMan_Public_FileManBPLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define C__Users_Aaron_Desktop_FileMan_FileMan_HostProject_Plugins_FileMan_Source_FileMan_Public_FileManBPLibrary_h_13_PROLOG
#define C__Users_Aaron_Desktop_FileMan_FileMan_HostProject_Plugins_FileMan_Source_FileMan_Public_FileManBPLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	C__Users_Aaron_Desktop_FileMan_FileMan_HostProject_Plugins_FileMan_Source_FileMan_Public_FileManBPLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	C__Users_Aaron_Desktop_FileMan_FileMan_HostProject_Plugins_FileMan_Source_FileMan_Public_FileManBPLibrary_h_15_RPC_WRAPPERS \
	C__Users_Aaron_Desktop_FileMan_FileMan_HostProject_Plugins_FileMan_Source_FileMan_Public_FileManBPLibrary_h_15_INCLASS \
	C__Users_Aaron_Desktop_FileMan_FileMan_HostProject_Plugins_FileMan_Source_FileMan_Public_FileManBPLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define C__Users_Aaron_Desktop_FileMan_FileMan_HostProject_Plugins_FileMan_Source_FileMan_Public_FileManBPLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	C__Users_Aaron_Desktop_FileMan_FileMan_HostProject_Plugins_FileMan_Source_FileMan_Public_FileManBPLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	C__Users_Aaron_Desktop_FileMan_FileMan_HostProject_Plugins_FileMan_Source_FileMan_Public_FileManBPLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	C__Users_Aaron_Desktop_FileMan_FileMan_HostProject_Plugins_FileMan_Source_FileMan_Public_FileManBPLibrary_h_15_INCLASS_NO_PURE_DECLS \
	C__Users_Aaron_Desktop_FileMan_FileMan_HostProject_Plugins_FileMan_Source_FileMan_Public_FileManBPLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FILEMAN_API UClass* StaticClass<class UFileManBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID C__Users_Aaron_Desktop_FileMan_FileMan_HostProject_Plugins_FileMan_Source_FileMan_Public_FileManBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

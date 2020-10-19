// Copyright (c) Aaron Hunt 2020

#include "FileManBPLibrary.h"
#include "FileMan.h"

bool UFileManBPLibrary::DeleteFile(FString FileName) {
	if (remove(TCHAR_TO_ANSI(*(FPaths::ProjectDir() + FileName))) != 0)
		return 0;
	else
		return 1;
}

bool UFileManBPLibrary::GetFilesInPath(TArray<FString>& Files, FString Path) {

	FPaths::NormalizeDirectoryName(Path);

	IFileManager& FileManager = IFileManager::Get();

	FString ProjectPath = FPaths::ProjectDir() + Path;
	FString FindFilePath = ProjectPath + "/*.*";

	FileManager.FindFiles(Files, (*FindFilePath), true, false);

	IPlatformFile& platformFile = FPlatformFileManager::Get().GetPlatformFile();

	if (platformFile.DirectoryExists(*ProjectPath))
		return 1;
	else
		return 0;
}

bool UFileManBPLibrary::ReadFile(FString File, FString & Content) {
	return FFileHelper::LoadFileToString(Content, *(FPaths::ProjectDir() + File));
}

bool UFileManBPLibrary::WriteFile(FString Content, FString FileName) {
	return FFileHelper::SaveStringToFile(Content, *(FPaths::ProjectDir() + FileName));
}
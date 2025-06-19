#include "LuaBlueprintLibrary.h"

ULuaBlueprintLibrary::ULuaBlueprintLibrary() {
}

FString ULuaBlueprintLibrary::GetStringFromVar(FLuaBPVar Value, int32 Index) {
    return TEXT("");
}

UObject* ULuaBlueprintLibrary::GetObjectFromVar(FLuaBPVar Value, int32 Index) {
    return NULL;
}

float ULuaBlueprintLibrary::GetNumberFromVar(FLuaBPVar Value, int32 Index) {
    return 0.0f;
}

int32 ULuaBlueprintLibrary::GetIntFromVar(FLuaBPVar Value, int32 Index) {
    return 0;
}

bool ULuaBlueprintLibrary::GetBoolFromVar(FLuaBPVar Value, int32 Index) {
    return false;
}

FLuaBPVar ULuaBlueprintLibrary::CreateVarFromString(const FString& Value) {
    return FLuaBPVar{};
}

FLuaBPVar ULuaBlueprintLibrary::CreateVarFromObject(UObject* WorldContextObject, UObject* Value) {
    return FLuaBPVar{};
}

FLuaBPVar ULuaBlueprintLibrary::CreateVarFromNumber(float Value) {
    return FLuaBPVar{};
}

FLuaBPVar ULuaBlueprintLibrary::CreateVarFromInt(int32 Value) {
    return FLuaBPVar{};
}

FLuaBPVar ULuaBlueprintLibrary::CreateVarFromBool(bool Value) {
    return FLuaBPVar{};
}

FLuaBPVar ULuaBlueprintLibrary::CallToLuaWithArgs(UObject* WorldContextObject, const FString& FunctionName, const TArray<FLuaBPVar>& Args, const FString& StateName) {
    return FLuaBPVar{};
}

FLuaBPVar ULuaBlueprintLibrary::CallToLua(UObject* WorldContextObject, const FString& FunctionName, const FString& StateName) {
    return FLuaBPVar{};
}



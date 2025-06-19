#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LuaBPVar.h"
#include "LuaBlueprintLibrary.generated.h"

class UObject;

UCLASS(BlueprintType)
class SLUA_UNREAL_API ULuaBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULuaBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static FString GetStringFromVar(FLuaBPVar Value, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static UObject* GetObjectFromVar(FLuaBPVar Value, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static float GetNumberFromVar(FLuaBPVar Value, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetIntFromVar(FLuaBPVar Value, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static bool GetBoolFromVar(FLuaBPVar Value, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static FLuaBPVar CreateVarFromString(const FString& Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FLuaBPVar CreateVarFromObject(UObject* WorldContextObject, UObject* Value);
    
    UFUNCTION(BlueprintCallable)
    static FLuaBPVar CreateVarFromNumber(float Value);
    
    UFUNCTION(BlueprintCallable)
    static FLuaBPVar CreateVarFromInt(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static FLuaBPVar CreateVarFromBool(bool Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FLuaBPVar CallToLuaWithArgs(UObject* WorldContextObject, const FString& FunctionName, const TArray<FLuaBPVar>& Args, const FString& StateName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FLuaBPVar CallToLua(UObject* WorldContextObject, const FString& FunctionName, const FString& StateName);
    
};


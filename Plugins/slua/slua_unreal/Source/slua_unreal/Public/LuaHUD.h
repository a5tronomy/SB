#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "LuaBPVar.h"
#include "LuaTableObjectInterface.h"
#include "LuaHUD.generated.h"

UCLASS(NonTransient)
class SLUA_UNREAL_API ALuaHUD : public AHUD, public ILuaTableObjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString LuaFilePath;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString LuaStateName;
    
    ALuaHUD(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FLuaBPVar CallLuaMember(const FString& FunctionName, const TArray<FLuaBPVar>& Args);
    

    // Fix for true pure virtual functions not being implemented
};


#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "LuaBPVar.h"
#include "LuaTableObjectInterface.h"
#include "LuaGameModeBase.generated.h"

UCLASS(NonTransient)
class SLUA_UNREAL_API ALuaGameModeBase : public AGameModeBase, public ILuaTableObjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString LuaFilePath;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString LuaStateName;
    
    ALuaGameModeBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FLuaBPVar CallLuaMember(const FString& FunctionName, const TArray<FLuaBPVar>& Args);
    

    // Fix for true pure virtual functions not being implemented
};


#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "LuaBPVar.h"
#include "LuaTableObjectInterface.h"
#include "LuaPlayerController.generated.h"

UCLASS()
class SLUA_UNREAL_API ALuaPlayerController : public APlayerController, public ILuaTableObjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString LuaFilePath;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString LuaStateName;
    
    ALuaPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FLuaBPVar CallLuaMember(const FString& FunctionName, const TArray<FLuaBPVar>& Args);
    

    // Fix for true pure virtual functions not being implemented
};


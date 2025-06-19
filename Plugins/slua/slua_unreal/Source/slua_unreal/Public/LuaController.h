#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Controller.h"
#include "LuaBPVar.h"
#include "LuaTableObjectInterface.h"
#include "LuaController.generated.h"

UCLASS()
class SLUA_UNREAL_API ALuaController : public AController, public ILuaTableObjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString LuaFilePath;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString LuaStateName;
    
    ALuaController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FLuaBPVar CallLuaMember(const FString& FunctionName, const TArray<FLuaBPVar>& Args);
    

    // Fix for true pure virtual functions not being implemented
};


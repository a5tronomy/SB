#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LuaBPVar.h"
#include "LuaTableObjectInterface.h"
#include "LuaActor.generated.h"

UCLASS()
class SLUA_UNREAL_API ALuaActor : public AActor, public ILuaTableObjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString LuaFilePath;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString LuaStateName;
    
    ALuaActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FLuaBPVar CallLuaMember(const FString& FunctionName, const TArray<FLuaBPVar>& Args);
    

    // Fix for true pure virtual functions not being implemented
};


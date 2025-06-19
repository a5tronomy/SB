#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "LuaBPVar.h"
#include "LuaTableObjectInterface.h"
#include "LuaCharacter.generated.h"

UCLASS()
class SLUA_UNREAL_API ALuaCharacter : public ACharacter, public ILuaTableObjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString LuaFilePath;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString LuaStateName;
    
    ALuaCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FLuaBPVar CallLuaMember(const FString& FunctionName, const TArray<FLuaBPVar>& Args);
    

    // Fix for true pure virtual functions not being implemented
};


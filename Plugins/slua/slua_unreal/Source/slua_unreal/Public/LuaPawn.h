#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "LuaBPVar.h"
#include "LuaTableObjectInterface.h"
#include "LuaPawn.generated.h"

UCLASS()
class SLUA_UNREAL_API ALuaPawn : public APawn, public ILuaTableObjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString LuaFilePath;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString LuaStateName;
    
    ALuaPawn(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FLuaBPVar CallLuaMember(const FString& FunctionName, const TArray<FLuaBPVar>& Args);
    

    // Fix for true pure virtual functions not being implemented
};


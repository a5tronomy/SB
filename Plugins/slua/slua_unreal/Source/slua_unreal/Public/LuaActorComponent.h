#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LuaBPVar.h"
#include "LuaTableObjectInterface.h"
#include "LuaActorComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SLUA_UNREAL_API ULuaActorComponent : public UActorComponent, public ILuaTableObjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString LuaFilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString LuaStateName;
    
    ULuaActorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FLuaBPVar CallLuaMember(const FString& FunctionName, const TArray<FLuaBPVar>& Args);
    

    // Fix for true pure virtual functions not being implemented
};


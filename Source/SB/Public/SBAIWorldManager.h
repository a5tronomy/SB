#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBAIWorldNode.h"
#include "SBAIWorldManager.generated.h"

class USBAIFormationData;

UCLASS()
class SB_API ASBAIWorldManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FSBAIWorldNode> NodeArray;
    
    UPROPERTY()
    TArray<int32> RoadNodeArray;
    
    UPROPERTY()
    TArray<int32> BehaviorNodeArray;
    
    UPROPERTY()
    TArray<int32> TagNodeArray;
    
    UPROPERTY()
    USBAIFormationData* AIFormationData;
    
public:
    ASBAIWorldManager(const FObjectInitializer& ObjectInitializer);

};


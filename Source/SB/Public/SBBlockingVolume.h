#pragma once
#include "CoreMinimal.h"
#include "SBWorldVolume.h"
#include "SBBlockingVolume.generated.h"

class AActor;

UCLASS(MinimalAPI)
class ASBBlockingVolume : public ASBWorldVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FName> AdmissionPossibleTribeArray;
    
    UPROPERTY(EditAnywhere)
    bool bOnlyBlock_RuleMove;
    
    UPROPERTY(EditAnywhere)
    AActor* ControlActive_LaserOwnerActor;
    
public:
    ASBBlockingVolume(const FObjectInitializer& ObjectInitializer);

};


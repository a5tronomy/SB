#pragma once
#include "CoreMinimal.h"
#include "ESBActorWeightType.h"
#include "SBDestructionFromActorMoveTriggerInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBDestructionFromActorMoveTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bActive;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorWeightType> WeightType;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ValidTribeArray;
    
    SB_API FSBDestructionFromActorMoveTriggerInfo();
};


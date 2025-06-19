#pragma once
#include "CoreMinimal.h"
#include "ESBActorWeightType.h"
#include "SBDestructionFromActorAttackTriggerInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBDestructionFromActorAttackTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bActive;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorWeightType> WeightType;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ValidTribeArray;
    
    SB_API FSBDestructionFromActorAttackTriggerInfo();
};


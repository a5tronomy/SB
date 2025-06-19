#pragma once
#include "CoreMinimal.h"
#include "ESBActorWeightType.h"
#include "SBDestructionFromActorRangedAttackTriggerInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBDestructionFromActorRangedAttackTriggerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bActive;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorWeightType> WeightType;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ValidTribeArray;
    
    SB_API FSBDestructionFromActorRangedAttackTriggerInfo();
};


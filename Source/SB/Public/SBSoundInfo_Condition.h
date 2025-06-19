#pragma once
#include "CoreMinimal.h"
#include "SBSoundInfo_ConditionBoolType.h"
#include "SBSoundInfo_Condition.generated.h"

USTRUCT(BlueprintType)
struct FSBSoundInfo_Condition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBSoundInfo_ConditionBoolType IsPlayerCharacterUnderWaterSwimming;
    
    SB_API FSBSoundInfo_Condition();
};


#pragma once
#include "CoreMinimal.h"
#include "SBSoundInfo.h"
#include "SBSoundInfo_ConditionBoolType.generated.h"

USTRUCT(BlueprintType)
struct FSBSoundInfo_ConditionBoolType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSBSoundInfo> TrueCase;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBSoundInfo> FalseCase;
    
    SB_API FSBSoundInfo_ConditionBoolType();
};


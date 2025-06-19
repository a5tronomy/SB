#pragma once
#include "CoreMinimal.h"
#include "SBStudioSequenceResourceData.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FSBStudioSequenceResourceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ResourceTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<ULevelSequence> SequencePath;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseFinishSplineSync;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName FinishSplineTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FinishSplineProgress;
    
    SB_API FSBStudioSequenceResourceData();
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBTheaterLevelSequenceSkipFadeParam.generated.h"

USTRUCT(BlueprintType)
struct FSBTheaterLevelSequenceSkipFadeParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bUseFade;
    
    UPROPERTY(EditAnywhere)
    float FromAlpha;
    
    UPROPERTY(EditAnywhere)
    float ToAlpha;
    
    UPROPERTY(EditAnywhere)
    float FadeTime;
    
    UPROPERTY(EditAnywhere)
    float FadeDelay;
    
    UPROPERTY(EditAnywhere)
    FLinearColor FadeColor;
    
    UPROPERTY(EditAnywhere)
    float FadePriority;
    
    SB_API FSBTheaterLevelSequenceSkipFadeParam();
};


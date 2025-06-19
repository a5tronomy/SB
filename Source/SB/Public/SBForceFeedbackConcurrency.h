#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ESBForceFeedbackConcurrencyRule.h"
#include "SBForceFeedbackConcurrency.generated.h"

UCLASS(MinimalAPI)
class USBForceFeedbackConcurrency : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 MaxCount;
    
    UPROPERTY(EditAnywhere)
    uint8 bLimitToOwner: 1;
    
    UPROPERTY(EditAnywhere)
    ESBForceFeedbackConcurrencyRule ResolutionRule;
    
    USBForceFeedbackConcurrency();

};


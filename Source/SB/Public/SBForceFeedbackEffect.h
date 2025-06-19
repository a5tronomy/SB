#pragma once
#include "CoreMinimal.h"
#include "GameFramework/ForceFeedbackEffect.h"
#include "SBForceFeedbackEffect.generated.h"

class USBForceFeedbackConcurrency;

UCLASS()
class SB_API USBForceFeedbackEffect : public UForceFeedbackEffect {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditAnywhere)
    USBForceFeedbackConcurrency* Concurrency;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 ConcurrencyPriority;
    
    USBForceFeedbackEffect();

};


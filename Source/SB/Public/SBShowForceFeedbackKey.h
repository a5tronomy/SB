#pragma once
#include "CoreMinimal.h"
#include "SBShowKey.h"
#include "SBShowForceFeedbackKey.generated.h"

class UForceFeedbackEffect;

UCLASS(EditInlineNew)
class SB_API USBShowForceFeedbackKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UForceFeedbackEffect* ForceFeedbackTemplate;
    
    UPROPERTY(EditAnywhere)
    bool bPlayerOnly;
    
    USBShowForceFeedbackKey();

};


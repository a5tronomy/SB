#pragma once
#include "CoreMinimal.h"
#include "ESBShowVibrationTarget.h"
#include "SBShowForceFeedbackProperty.h"
#include "SBShowHapticProperty.h"
#include "SBShowKey.h"
#include "SBShowVibrationKey.generated.h"

class USBVibrationSet;

UCLASS(EditInlineNew, Config=Editor)
class SB_API USBShowVibrationKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USBVibrationSet* VibrationSet;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowVibrationTarget> PlayTarget;
    
    UPROPERTY(EditAnywhere)
    FSBShowHapticProperty HapticProperty;
    
    UPROPERTY(EditAnywhere)
    FSBShowForceFeedbackProperty ForceFeedbackProperty;
    
    UPROPERTY(EditAnywhere)
    float HapticFadeOutDuration;
    
    UPROPERTY(EditAnywhere)
    int32 PlayTargetIndex;
    
    UPROPERTY()
    bool bPlayerCharacterOnly;
    
    USBShowVibrationKey();

};


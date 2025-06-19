#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBVibrationSet.generated.h"

class UForceFeedbackEffect;
class USoundBase;

UCLASS()
class SB_API USBVibrationSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UForceFeedbackEffect* ForceFeedback;
    
    UPROPERTY(EditAnywhere)
    USoundBase* HapticSound;
    
    USBVibrationSet();

};


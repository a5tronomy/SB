#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ESBDualSenseTrigger.h"
#include "ESBDualSenseTriggerEffect.h"
#include "SBDualSenseTriggerEffectData.generated.h"

UCLASS()
class USBDualSenseTriggerEffectData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBDualSenseTriggerEffect> TriggerEffectType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBDualSenseTrigger> TriggerType;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> Parameters;
    
    USBDualSenseTriggerEffectData();

};


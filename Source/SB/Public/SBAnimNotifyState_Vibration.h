#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SBAnimNotifyStateForceFeedbackProperty.h"
#include "SBAnimNotifyStateHapticProperty.h"
#include "SBAnimNotifyState_Vibration.generated.h"

class USBVibrationComponent;
class USBVibrationSet;
class USkeletalMeshComponent;

UCLASS(CollapseCategories, EditInlineNew, Config=Game)
class SB_API USBAnimNotifyState_Vibration : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USBVibrationSet* VibrationSet;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSBAnimNotifyStateHapticProperty HapticProperty;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSBAnimNotifyStateForceFeedbackProperty ForceFeedbackProperty;
    
private:
    UPROPERTY(Instanced, Transient)
    TMap<USkeletalMeshComponent*, USBVibrationComponent*> VibrationComponentMap;
    
public:
    USBAnimNotifyState_Vibration();

};


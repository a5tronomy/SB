#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SBAnimNotifyForceFeedbackProperty.h"
#include "SBAnimNotifyHapticProperty.h"
#include "SBAnimNotify_Vibration.generated.h"

class USBVibrationSet;

UCLASS(CollapseCategories, Config=Game)
class SB_API USBAnimNotify_Vibration : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USBVibrationSet* VibrationSet;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSBAnimNotifyHapticProperty HapticProperty;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSBAnimNotifyForceFeedbackProperty ForceFeedbackProperty;
    
    USBAnimNotify_Vibration();

};


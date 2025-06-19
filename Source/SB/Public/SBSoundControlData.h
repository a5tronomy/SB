#pragma once
#include "CoreMinimal.h"
#include "SBSoundControlData.generated.h"

USTRUCT(BlueprintType)
struct FSBSoundControlData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float FadeTime;
    
    SB_API FSBSoundControlData();
};


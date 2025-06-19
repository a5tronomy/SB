#pragma once
#include "CoreMinimal.h"
#include "SBVibrationSectionData.generated.h"

class USBVibrationSet;

USTRUCT(BlueprintType)
struct FSBVibrationSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USBVibrationSet* VibrationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VolumeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PitchMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IntensityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ForceFeedbackLooping;
    
    SB_API FSBVibrationSectionData();
};


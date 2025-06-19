#pragma once
#include "CoreMinimal.h"
#include "SBLevelSequenceEventVibrationSectionData.generated.h"

class USBVibrationSet;

USTRUCT(BlueprintType)
struct FSBLevelSequenceEventVibrationSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USBVibrationSet* VibrationSet;
    
    SB_API FSBLevelSequenceEventVibrationSectionData();
};


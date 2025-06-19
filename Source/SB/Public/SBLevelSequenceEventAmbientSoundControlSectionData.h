#pragma once
#include "CoreMinimal.h"
#include "ESBAmbientSoundControlType.h"
#include "SBLevelSequenceEventAmbientSoundControlSectionData.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceEventAmbientSoundControlSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName AmbientSoundVolumeName;
    
    UPROPERTY(EditAnywhere)
    ESBAmbientSoundControlType ControlType;
    
    UPROPERTY(EditAnywhere)
    bool Enable;
    
    UPROPERTY(EditAnywhere)
    float Priority;
    
    SB_API FSBLevelSequenceEventAmbientSoundControlSectionData();
};


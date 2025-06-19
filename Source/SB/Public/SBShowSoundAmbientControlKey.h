#pragma once
#include "CoreMinimal.h"
#include "ESBAmbientSoundControlType.h"
#include "SBShowKey.h"
#include "SBShowSoundAmbientControlKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowSoundAmbientControlKey : public USBShowKey {
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
    
    USBShowSoundAmbientControlKey();

};


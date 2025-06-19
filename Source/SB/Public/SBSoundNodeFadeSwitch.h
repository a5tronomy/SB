#pragma once
#include "CoreMinimal.h"
#include "Sound/SoundNode.h"
#include "SBSoundNodeFadeSwitch.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class USBSoundNodeFadeSwitch : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName IntParameterName;
    
    UPROPERTY(EditAnywhere)
    float FadeInDuration;
    
    UPROPERTY(EditAnywhere)
    float FadeOutDuration;
    
    UPROPERTY(EditAnywhere)
    bool bKeepPlayTimeWhenSwitch;
    
    USBSoundNodeFadeSwitch();

};


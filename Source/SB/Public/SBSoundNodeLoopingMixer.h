#pragma once
#include "CoreMinimal.h"
#include "Sound/SoundNode.h"
#include "SBSoundNodeLoopingMixer.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class USBSoundNodeLoopingMixer : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize, Export)
    TArray<float> InputVolume;
    
    USBSoundNodeLoopingMixer();

};


#pragma once
#include "CoreMinimal.h"
#include "Sound/SoundNode.h"
#include "SBSoundNodeConcatenator.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class USBSoundNodeConcatenator : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<float> InputVolume;
    
    UPROPERTY(EditAnywhere)
    float IgnoreRemainTimeSliceToNext;
    
    UPROPERTY(EditAnywhere)
    float OverlapTime;
    
    USBSoundNodeConcatenator();

};


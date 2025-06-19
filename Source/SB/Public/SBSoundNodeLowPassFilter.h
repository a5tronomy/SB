#pragma once
#include "CoreMinimal.h"
#include "Sound/SoundNode.h"
#include "ESBLowPassFilterSoundNodeType.h"
#include "SBSoundNodeLowPassFilter.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class USBSoundNodeLowPassFilter : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ESBLowPassFilterSoundNodeType FilterType;
    
    UPROPERTY(EditAnywhere)
    float LowPassFilterMin_Replace;
    
    UPROPERTY(EditAnywhere)
    float LowPassFilterMax_Replace;
    
    UPROPERTY(EditAnywhere)
    float LowPassFilterMin_Multiply;
    
    UPROPERTY(EditAnywhere)
    float LowPassFilterMax_Multiply;
    
    USBSoundNodeLowPassFilter();

};


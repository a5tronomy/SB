#pragma once
#include "CoreMinimal.h"
#include "Sound/SoundNode.h"
#include "ESBHighPassFilterSoundNodeType.h"
#include "SBSoundNodeHighPassFilter.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class USBSoundNodeHighPassFilter : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ESBHighPassFilterSoundNodeType FilterType;
    
    UPROPERTY(EditAnywhere)
    float HighPassFilterMin_Replace;
    
    UPROPERTY(EditAnywhere)
    float HighPassFilterMax_Replace;
    
    UPROPERTY(EditAnywhere)
    float HighPassFilterMin_Multiply;
    
    UPROPERTY(EditAnywhere)
    float HighPassFilterMax_Multiply;
    
    USBSoundNodeHighPassFilter();

};


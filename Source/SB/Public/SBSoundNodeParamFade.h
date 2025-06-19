#pragma once
#include "CoreMinimal.h"
#include "Sound/SoundNode.h"
#include "SBSoundNodeParamFade.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class USBSoundNodeParamFade : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ParamName;
    
    UPROPERTY(EditAnywhere)
    float ParamDefault;
    
    UPROPERTY(EditAnywhere)
    float StartParam;
    
    UPROPERTY(EditAnywhere)
    float EndParam;
    
    USBSoundNodeParamFade();

};


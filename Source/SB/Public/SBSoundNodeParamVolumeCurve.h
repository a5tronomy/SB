#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "Sound/SoundNode.h"
#include "SBSoundNodeParamVolumeCurve.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class USBSoundNodeParamVolumeCurve : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ParamName;
    
    UPROPERTY(EditAnywhere)
    float ParamDefault;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve VolumeCurve;
    
    USBSoundNodeParamVolumeCurve();

};


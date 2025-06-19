#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "SBShowKey.h"
#include "SBShowPoseSnapshotKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowPoseSnapshotKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bPoseSnapshot;
    
    UPROPERTY(EditAnywhere)
    float InitPoseSnapBlendWeight;
    
    UPROPERTY(EditAnywhere)
    bool bUseCurveBlendWeight;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve PoseSnapBlendWeightCurve;
    
    USBShowPoseSnapshotKey();

};


#pragma once
#include "CoreMinimal.h"
#include "ESBShowCamShakeTarget.h"
#include "SBShowCameraShakeParams.h"
#include "SBShowKey.h"
#include "Templates/SubclassOf.h"
#include "SBShowCamShakeKey.generated.h"

class UCameraShakeBase;

UCLASS(EditInlineNew)
class SB_API USBShowCamShakeKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UCameraShakeBase> CameraShakeObject;
    
    UPROPERTY(EditAnywhere)
    bool bUseParams;
    
    UPROPERTY(EditAnywhere)
    FSBShowCameraShakeParams CameraShakeParams;
    
    UPROPERTY(EditAnywhere)
    bool bUseCameraShakeObject;
    
    UPROPERTY(EditAnywhere)
    float ShakeInnerRadius;
    
    UPROPERTY(EditAnywhere)
    float ShakeOuterRadius;
    
    UPROPERTY(EditAnywhere)
    float ShakeFallOff;
    
    UPROPERTY(EditAnywhere)
    bool bOrientShakeTowardsEpicenter;
    
    UPROPERTY(EditAnywhere)
    float ShakeScale;
    
    UPROPERTY(EditAnywhere)
    float ShakeLocTension;
    
    UPROPERTY(EditAnywhere)
    float ShakeLocDecreasePerSec;
    
    UPROPERTY(EditAnywhere)
    float ShakeDirTension;
    
    UPROPERTY(EditAnywhere)
    float ShakeDirDecreasePerSec;
    
    UPROPERTY(EditAnywhere)
    float ShakeInterval;
    
    UPROPERTY(EditAnywhere)
    bool bAdditiveTension;
    
    UPROPERTY(EditAnywhere)
    bool bStopImmediately;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowCamShakeTarget> PlayTarget;
    
    UPROPERTY(EditAnywhere)
    int32 PlayTargetIndex;
    
    UPROPERTY(EditAnywhere)
    bool bPlayerCharacterOnly;
    
    USBShowCamShakeKey();

};


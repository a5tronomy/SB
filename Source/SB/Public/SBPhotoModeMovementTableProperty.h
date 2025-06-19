#pragma once
#include "CoreMinimal.h"
#include "ESBPhotoModeCameraType.h"
#include "ESBPhotoModeInputDirection.h"
#include "SBTablePropertyBase.h"
#include "SBPhotoModeMovementTableProperty.generated.h"

USTRUCT()
struct FSBPhotoModeMovementTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBPhotoModeInputDirection> InputDirection;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBPhotoModeCameraType> CameraType;
    
    UPROPERTY(EditAnywhere)
    float Acceleration;
    
    UPROPERTY(EditAnywhere)
    float Deceleration;
    
    UPROPERTY(EditAnywhere)
    bool bAffectedByFOV;
    
    UPROPERTY(EditAnywhere)
    float FOVScaleMin;
    
    UPROPERTY(EditAnywhere)
    float FOVScaleMax;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBPhotoModeMovementTableProperty();
};


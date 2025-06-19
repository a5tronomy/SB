#pragma once
#include "CoreMinimal.h"
#include "ESBPhotoModeCameraType.h"
#include "SBTablePropertyBase.h"
#include "SBPhotoModeEyesPositionByPoseProperty.generated.h"

USTRUCT()
struct FSBPhotoModeEyesPositionByPoseProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName PoseName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBPhotoModeCameraType> CameraType;
    
    UPROPERTY(EditAnywhere)
    FString EyesPosition;
    
    UPROPERTY(EditAnywhere)
    FString EyesPosition_Adam;
    
    UPROPERTY(EditAnywhere)
    FString EyesPosition_Lily;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBPhotoModeEyesPositionByPoseProperty();
};


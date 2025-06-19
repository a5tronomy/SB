#pragma once
#include "CoreMinimal.h"
#include "ESBPhotoModeCameraType.h"
#include "SBTablePropertyBase.h"
#include "SBPhotoModeFacialAnimationTableProperty.generated.h"

USTRUCT()
struct FSBPhotoModeFacialAnimationTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName PhotoModeTag;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBPhotoModeCameraType> CameraType;
    
    UPROPERTY(EditAnywhere)
    FString AssetPath;
    
    UPROPERTY(EditAnywhere)
    FString EyesPosition;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBPhotoModeFacialAnimationTableProperty();
};


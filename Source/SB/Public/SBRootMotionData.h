#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "SBExtractRootMotionData.h"
#include "SBRootMotionData.generated.h"

UCLASS()
class SB_API USBRootMotionData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSBExtractRootMotionData> RootMotionDataArray;
    
    UPROPERTY(EditAnywhere)
    float TotalLength;
    
    UPROPERTY(EditAnywhere)
    float FrameRate;
    
    UPROPERTY(EditAnywhere)
    FName TimeBasedAnimationName;
    
    UPROPERTY(EditAnywhere)
    FVector BaseMeshScale;
    
    USBRootMotionData();

};


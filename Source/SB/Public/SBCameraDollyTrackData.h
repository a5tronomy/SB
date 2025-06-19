#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBCameraDollyFovData.h"
#include "SBCameraDollyPitchData.h"
#include "SBCameraDollyPositionData.h"
#include "SBCameraDollyYawData.h"
#include "SBCameraDollyTrackData.generated.h"

UCLASS()
class SB_API USBCameraDollyTrackData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBCameraDollyFovData FovData;
    
    UPROPERTY(EditAnywhere)
    FSBCameraDollyPitchData PitchData;
    
    UPROPERTY(EditAnywhere)
    FSBCameraDollyYawData YawData;
    
    UPROPERTY(EditAnywhere)
    FSBCameraDollyPositionData PositionData;
    
    USBCameraDollyTrackData();

};


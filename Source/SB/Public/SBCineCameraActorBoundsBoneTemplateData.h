#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBCineCameraActorBoundsBoneData.h"
#include "SBCineCameraActorBoundsBoneTemplateData.generated.h"

UCLASS()
class SB_API USBCineCameraActorBoundsBoneTemplateData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSBCineCameraActorBoundsBoneData> ActorBoneNameArray;
    
    USBCineCameraActorBoundsBoneTemplateData();

};


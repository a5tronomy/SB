#pragma once
#include "CoreMinimal.h"
#include "MovieSceneObjectBindingID.h"
#include "SBCineCameraActorBoundsBoneData.h"
#include "SBLevelSequenceCameraActorBoundsSectionData.generated.h"

class USBCineCameraActorBoundsBoneTemplateData;

USTRUCT(BlueprintType)
struct FSBLevelSequenceCameraActorBoundsSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FMovieSceneObjectBindingID> ActorBindingArray;
    
    UPROPERTY(EditAnywhere)
    USBCineCameraActorBoundsBoneTemplateData* ActorBoneTemplateData;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBCineCameraActorBoundsBoneData> ActorBoneNameArray;
    
    UPROPERTY(EditAnywhere)
    int32 TrackingUpdateCount;
    
    UPROPERTY(EditAnywhere)
    bool bEveryTracking;
    
    SB_API FSBLevelSequenceCameraActorBoundsSectionData();
};


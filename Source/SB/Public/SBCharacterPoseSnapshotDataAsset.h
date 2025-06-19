#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBCharacterPoseSnapshotData.h"
#include "SBCharacterPoseSnapshotDataAsset.generated.h"

UCLASS()
class SB_API USBCharacterPoseSnapshotDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSBCharacterPoseSnapshotData> PoseSnapshotDataAray;
    
    UPROPERTY(EditAnywhere)
    bool bPonytail;
    
    UPROPERTY(EditAnywhere)
    bool bHair;
    
    UPROPERTY(EditAnywhere)
    bool bTachyWing;
    
    USBCharacterPoseSnapshotDataAsset();

};


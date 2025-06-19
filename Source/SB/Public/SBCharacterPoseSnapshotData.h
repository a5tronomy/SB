#pragma once
#include "CoreMinimal.h"
#include "Animation/PoseSnapshot.h"
#include "SBCharacterPoseSnapshotCloth.h"
#include "SBCharacterPoseSnapshotData.generated.h"

USTRUCT(BlueprintType)
struct FSBCharacterPoseSnapshotData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY()
    TArray<FSBCharacterPoseSnapshotCloth> ClothArray;
    
    UPROPERTY()
    FPoseSnapshot BodyPoseSnapshot;
    
    UPROPERTY()
    FPoseSnapshot WeaponPoseSnapshot;
    
    SB_API FSBCharacterPoseSnapshotData();
};


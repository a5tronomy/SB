#pragma once
#include "CoreMinimal.h"
#include "ESBSkelMeshSlot.h"
#include "SBCharacterPoseSnapshotClothSimulData.h"
#include "SBCharacterPoseSnapshotCloth.generated.h"

USTRUCT(BlueprintType)
struct FSBCharacterPoseSnapshotCloth {
    GENERATED_BODY()
public:
    UPROPERTY()
    TEnumAsByte<ESBSkelMeshSlot> MeshSlot;
    
    UPROPERTY()
    TArray<FSBCharacterPoseSnapshotClothSimulData> ClothSimulDataArray;
    
    SB_API FSBCharacterPoseSnapshotCloth();
};


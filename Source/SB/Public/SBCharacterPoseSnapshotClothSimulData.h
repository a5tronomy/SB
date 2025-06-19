#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SBCharacterPoseSnapshotClothSimulData.generated.h"

USTRUCT(BlueprintType)
struct FSBCharacterPoseSnapshotClothSimulData {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 MapIndex;
    
    UPROPERTY()
    TArray<FVector> Positions;
    
    UPROPERTY()
    TArray<FVector> Normals;
    
    UPROPERTY()
    FTransform Transform;
    
    UPROPERTY()
    FTransform ComponentRelativeTransform;
    
    SB_API FSBCharacterPoseSnapshotClothSimulData();
};


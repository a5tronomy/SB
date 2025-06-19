#pragma once
#include "CoreMinimal.h"
#include "SBSliceSkeletalMeshBone.h"
#include "SBSliceSkeletalMeshLOD.generated.h"

USTRUCT(BlueprintType)
struct FSBSliceSkeletalMeshLOD {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 LOD;
    
    UPROPERTY(VisibleAnywhere)
    int32 NumVertices;
    
    UPROPERTY(VisibleAnywhere)
    int32 NumIndices;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBSliceSkeletalMeshBone> Bones;
    
    SB_API FSBSliceSkeletalMeshLOD();
};


#pragma once
#include "CoreMinimal.h"
#include "SkelMeshMergeUVTransform.h"
#include "SkelMeshMergeUVTransformMapping.generated.h"

USTRUCT(BlueprintType)
struct SB_API FSkelMeshMergeUVTransformMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSkelMeshMergeUVTransform> UVTransformsPerMesh;
    
    FSkelMeshMergeUVTransformMapping();
};


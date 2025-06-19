#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SkelMeshMergeUVTransform.generated.h"

USTRUCT(BlueprintType)
struct SB_API FSkelMeshMergeUVTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FTransform> UVTransforms;
    
    FSkelMeshMergeUVTransform();
};


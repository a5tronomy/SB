#pragma once
#include "CoreMinimal.h"
#include "SkelMeshMergeSectionMapping_BP.h"
#include "SkelMeshMergeUVTransformMapping.h"
#include "SkeletalMeshMergeParams.generated.h"

class USkeletalMesh;
class USkeleton;

USTRUCT(BlueprintType)
struct SB_API FSkeletalMeshMergeParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSkelMeshMergeSectionMapping_BP> MeshSectionMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSkelMeshMergeUVTransformMapping> UVTransformsPerMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<USkeletalMesh*> MeshesToMerge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 StripTopLODS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bNeedsCpuAccess: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bSkeletonBefore: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USkeleton* Skeleton;
    
    FSkeletalMeshMergeParams();
};


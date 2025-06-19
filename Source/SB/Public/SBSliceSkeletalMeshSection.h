#pragma once
#include "CoreMinimal.h"
#include "SBSliceSkeletalMeshTriangle.h"
#include "SBSliceSkeletalMeshSection.generated.h"

USTRUCT(BlueprintType)
struct FSBSliceSkeletalMeshSection {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 BaseIndex;
    
    UPROPERTY(VisibleAnywhere)
    int32 NumTriangles;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBSliceSkeletalMeshTriangle> Triangles;
    
    SB_API FSBSliceSkeletalMeshSection();
};


#pragma once
#include "CoreMinimal.h"
#include "SBSliceSkeletalMeshSection.h"
#include "SBSliceSkeletalMeshBone.generated.h"

USTRUCT(BlueprintType)
struct FSBSliceSkeletalMeshBone {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName BoneName;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBSliceSkeletalMeshSection> Sections;
    
    SB_API FSBSliceSkeletalMeshBone();
};


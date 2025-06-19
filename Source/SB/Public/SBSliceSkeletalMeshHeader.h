#pragma once
#include "CoreMinimal.h"
#include "SBSliceSkeletalMeshHeader.generated.h"

USTRUCT(BlueprintType)
struct FSBSliceSkeletalMeshHeader {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 Version;
    
    UPROPERTY(VisibleAnywhere)
    FString PathName;
    
    SB_API FSBSliceSkeletalMeshHeader();
};


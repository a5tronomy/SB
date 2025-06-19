#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBMeshClipingInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBMeshClipingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    bool bApplyValue;
    
    UPROPERTY(Transient)
    TArray<FVector> MaterialVectorParamList;
    
    SB_API FSBMeshClipingInfo();
};


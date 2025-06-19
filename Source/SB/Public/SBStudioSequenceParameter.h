#pragma once
#include "CoreMinimal.h"
#include "SBStudioSequenceParameter.generated.h"

USTRUCT(BlueprintType)
struct FSBStudioSequenceParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBlendCamera;
    
    SB_API FSBStudioSequenceParameter();
};


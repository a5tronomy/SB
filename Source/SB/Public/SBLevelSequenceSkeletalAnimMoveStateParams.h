#pragma once
#include "CoreMinimal.h"
#include "SBLevelSequenceSkeletalAnimMoveStateParams.generated.h"

class UBlendSpaceBase;

USTRUCT(BlueprintType)
struct FSBLevelSequenceSkeletalAnimMoveStateParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UBlendSpaceBase> MoveStateBlendSpace;
    
    SB_API FSBLevelSequenceSkeletalAnimMoveStateParams();
};


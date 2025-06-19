#pragma once
#include "CoreMinimal.h"
#include "MotionBoneTackID.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FMotionBoneTackID {
    GENERATED_BODY()
public:
    UPROPERTY()
    UAnimSequence* Sequence;
    
    UPROPERTY()
    int32 RefBoneIndex;
    
    SBANIMATION_API FMotionBoneTackID();
};
FORCEINLINE uint32 GetTypeHash(const FMotionBoneTackID) { return 0; }


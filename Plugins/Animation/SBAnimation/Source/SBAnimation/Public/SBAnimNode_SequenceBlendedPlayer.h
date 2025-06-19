#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNode_AssetPlayerBase.h"
#include "SubSequences.h"
#include "SBAnimNode_SequenceBlendedPlayer.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct SBANIMATION_API FSBAnimNode_SequenceBlendedPlayer : public FAnimNode_AssetPlayerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SBNodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendTimeWithSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> SkipTransformBoneArray;
    
    UPROPERTY(Transient)
    TArray<UAnimSequence*> PlaySequences;
    
    UPROPERTY(Transient)
    TArray<FSubSequences> PlaySubSequences;
    
    UPROPERTY(Transient)
    TArray<float> DynamicMoveWeight;
    
    FSBAnimNode_SequenceBlendedPlayer();
};


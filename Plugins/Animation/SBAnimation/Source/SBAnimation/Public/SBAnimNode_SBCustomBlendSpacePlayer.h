#pragma once
#include "CoreMinimal.h"
#include "AnimNodes/AnimNode_BlendSpacePlayer.h"
#include "ESBCustomBlendSpaceParamType.h"
#include "SBAnimNode_SBCustomBlendSpacePlayer.generated.h"

USTRUCT(BlueprintType)
struct SBANIMATION_API FSBAnimNode_SBCustomBlendSpacePlayer : public FAnimNode_BlendSpacePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SBNodeName;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBCustomBlendSpaceParamType> InputParamType1;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBCustomBlendSpaceParamType> InputParamType2;
    
    FSBAnimNode_SBCustomBlendSpacePlayer();
};


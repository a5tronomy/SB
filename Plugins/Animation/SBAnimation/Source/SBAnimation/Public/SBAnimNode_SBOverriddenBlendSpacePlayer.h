#pragma once
#include "CoreMinimal.h"
#include "AnimNodes/AnimNode_BlendSpacePlayer.h"
#include "ESBAnimNodeBlendSpaceSlot.h"
#include "SBAnimNode_SBOverriddenBlendSpacePlayer.generated.h"

USTRUCT(BlueprintType)
struct SBANIMATION_API FSBAnimNode_SBOverriddenBlendSpacePlayer : public FAnimNode_BlendSpacePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESBAnimNodeBlendSpaceSlot> BlendSpaceType;
    
    FSBAnimNode_SBOverriddenBlendSpacePlayer();
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBAnimNodeBlendSpaceSlot.h"
#include "ESBCharacterAnimChannel.h"
#include "SBLastSetBlendSpace.generated.h"

class UBlendSpaceBase;

USTRUCT(BlueprintType)
struct FSBLastSetBlendSpace {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TEnumAsByte<ESBCharacterAnimChannel> Channel;
    
    UPROPERTY(Transient)
    FString LowerBlendSpaceResource;
    
    UPROPERTY(Transient)
    FString UpperBlendSpaceResource;
    
    UPROPERTY(Transient)
    FGuid LastOverlapGUID;
    
    UPROPERTY(Transient)
    bool bLowerOverlap;
    
    UPROPERTY(Transient)
    bool bUpperOverlap;
    
    UPROPERTY(Transient)
    bool bUpperOnly;
    
    UPROPERTY(Transient)
    float PlayRate;
    
    UPROPERTY(Transient)
    int32 Priority;
    
    UPROPERTY(Transient)
    bool bStopWhenJump;
    
    UPROPERTY(Transient)
    bool bBlockPlayTransitAnim;
    
    UPROPERTY(Transient)
    bool bNeedApply;
    
    UPROPERTY(Transient)
    bool bNeedRemove;
    
    UPROPERTY(Transient)
    bool bResetPlayTime;
    
    UPROPERTY(Transient)
    float DelayTime;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBAnimNodeBlendSpaceSlot> Slot;
    
    UPROPERTY(Transient)
    UBlendSpaceBase* pBlendSpaceAsset;
    
    SB_API FSBLastSetBlendSpace();
};


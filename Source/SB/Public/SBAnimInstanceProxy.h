#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "SBAnimInstanceProxy.generated.h"

class UAnimSequence;
class UBlendSpaceBase;

USTRUCT()
struct SB_API FSBAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<UAnimSequence*> AnimSlotSequence;
    
    UPROPERTY(Transient)
    TArray<UAnimSequence*> AnimSlotSequence_Lower;
    
    UPROPERTY(Transient)
    TArray<UBlendSpaceBase*> BlendSpaceSlot;
    
    UPROPERTY(Transient)
    TArray<UBlendSpaceBase*> BlendSpaceSlot_Lower;
    
    FSBAnimInstanceProxy();
};


#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNode_SequencePlayer.h"
#include "ESBAnimNodeSequenceSlot.h"
#include "PrevSeqSampleData.h"
#include "SBAnimNode_SBSequencePlayer.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct SBANIMATION_API FSBAnimNode_SBSequencePlayer : public FAnimNode_SequencePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UAnimSequenceBase* PrevSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESBAnimNodeSequenceSlot> AnimSlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseAnimSlotNameSequenceOverrride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PrevSampleBlendingTime;
    
    UPROPERTY(Transient)
    TArray<FPrevSeqSampleData> PrevSampleData;
    
    UPROPERTY(Transient)
    float PrevBlendTotalWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotateRootX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotateRootY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRotateRootBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName RotateRootBooneName;
    
    FSBAnimNode_SBSequencePlayer();
};


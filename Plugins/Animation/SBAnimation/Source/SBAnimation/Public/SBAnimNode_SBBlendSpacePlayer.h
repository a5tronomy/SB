#pragma once
#include "CoreMinimal.h"
#include "AnimNodes/AnimNode_BlendSpacePlayer.h"
#include "UObject/NoExportTypes.h"
#include "ESBAnimNodeBlendSpaceSlot.h"
#include "PrevBlendSpaceSampleData.h"
#include "SBAnimNode_SBBlendSpacePlayer.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct SBANIMATION_API FSBAnimNode_SBBlendSpacePlayer : public FAnimNode_BlendSpacePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseBlendSpaceSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESBAnimNodeBlendSpaceSlot> BlendSpaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PrevSampleBlendingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotateRootX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotateRootY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRotateRootBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName RotateRootBooneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector RotateRootTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector CurrentRotateRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotateRootRotDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseRotateRootRotDeltaCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* RotateRootRotDeltaCurve;
    
    UPROPERTY(Transient)
    float CurrentRotDeltaCurveTime;
    
    UPROPERTY(Transient)
    TArray<FPrevBlendSpaceSampleData> PrevSampleData;
    
    UPROPERTY(Transient)
    float PrevBlendTotalWeight;
    
    FSBAnimNode_SBBlendSpacePlayer();
};


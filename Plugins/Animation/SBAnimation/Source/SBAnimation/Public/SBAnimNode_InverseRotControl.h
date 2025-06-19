#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BoneContainer.h"
#include "SBAnimNode_InverseRotControl.generated.h"

USTRUCT(BlueprintType)
struct SBANIMATION_API FSBAnimNode_InverseRotControl : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBoneReference TargetBone;
    
    UPROPERTY(EditAnywhere)
    FName BaseBoneName;
    
    UPROPERTY(EditAnywhere)
    float AttenuationFromBaseBoneRotScale;
    
    UPROPERTY(EditAnywhere)
    float DeaccellationRotPerSec;
    
    UPROPERTY(EditAnywhere)
    float ThreshHoldRotValue;
    
    UPROPERTY(EditAnywhere)
    float MaxTotalRotValue;
    
    UPROPERTY(EditAnywhere)
    float MaxDeltaRotValue;
    
    UPROPERTY(EditAnywhere)
    bool bUseLocationControl;
    
    UPROPERTY(EditAnywhere)
    float AttenuationFromBaseBoneLocScale;
    
    UPROPERTY(EditAnywhere)
    float DeaccellationLocPerSec;
    
    UPROPERTY(EditAnywhere)
    FVector ThreshHoldLocValue;
    
    UPROPERTY(EditAnywhere)
    FVector MaxTotalLocValue;
    
    UPROPERTY(EditAnywhere)
    FVector MaxDeltaLocValue;
    
    UPROPERTY(EditAnywhere)
    FVector AccumulateLocSensitivity;
    
    UPROPERTY(EditAnywhere)
    bool bDynamicDisableLocControl;
    
    UPROPERTY(EditAnywhere)
    float DynamicDisableLocBlendSpeed;
    
    UPROPERTY(EditAnywhere)
    float DynamicDisableLocMinAlpha;
    
    UPROPERTY(Transient)
    float DynamicDisableLocAlpha;
    
    UPROPERTY(Transient)
    float BeforeAlpha;
    
    UPROPERTY(Transient)
    FTransform BoneWorldLastTM;
    
    UPROPERTY(Transient)
    FTransform BaseBoneWorldLastTM;
    
    UPROPERTY(Transient)
    FRotator AccumulateRotDelta;
    
    UPROPERTY(Transient)
    FVector AccumulateLocDelta;
    
    UPROPERTY(Transient)
    FRotator ActualAccumulateRotDelta;
    
    UPROPERTY(Transient)
    FVector ActualAccumulateLocDelta;
    
    UPROPERTY(EditAnywhere)
    float AccumulateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AlphaBlendSpeed;
    
    FSBAnimNode_InverseRotControl();
};


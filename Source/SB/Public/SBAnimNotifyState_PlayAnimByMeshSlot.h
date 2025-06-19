#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ESBShowActorTarget.h"
#include "ESBSkelMeshSlot.h"
#include "SBAnimNotifyState_PlayAnimByMeshSlot.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SB_API USBAnimNotifyState_PlayAnimByMeshSlot : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkelMeshSlot> MeshSlot;
    
    UPROPERTY(EditAnywhere)
    FString AnimResourcePath;
    
    UPROPERTY(EditAnywhere)
    float PlayRate;
    
    UPROPERTY(EditAnywhere)
    float PlayStartTime;
    
    UPROPERTY(EditAnywhere)
    float PlayEndTime;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowActorTarget> Target;
    
    UPROPERTY(EditAnywhere)
    int32 TargetIndex;
    
    UPROPERTY(EditAnywhere)
    float PlayBlendInTime;
    
    UPROPERTY(EditAnywhere)
    float PlayBlendOutTime;
    
    UPROPERTY(EditAnywhere)
    int32 Priority;
    
    UPROPERTY(EditAnywhere)
    bool bPlayLoop;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreStopAnimationWhenEnd;
    
    USBAnimNotifyState_PlayAnimByMeshSlot();

};


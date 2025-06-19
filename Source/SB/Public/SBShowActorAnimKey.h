#pragma once
#include "CoreMinimal.h"
#include "ESBShowActorTarget.h"
#include "ESBSkelMeshSlot.h"
#include "SBShowKey.h"
#include "SBShowActorAnimKey.generated.h"

class UAnimSequence;

UCLASS(EditInlineNew)
class SB_API USBShowActorAnimKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ComponentTag;
    
    UPROPERTY(EditAnywhere)
    bool bUseMeshSlot;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkelMeshSlot> MeshSlot;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAnimSequence> AnimResource;
    
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
    bool bPlayLoop;
    
    UPROPERTY(EditAnywhere)
    int32 LoopCount;
    
    UPROPERTY(EditAnywhere)
    float Priority;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreStopAnimationWhenEnd;
    
    UPROPERTY(EditAnywhere)
    bool bClearAllAnim;
    
    USBShowActorAnimKey();

};


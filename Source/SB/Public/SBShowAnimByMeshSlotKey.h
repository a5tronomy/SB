#pragma once
#include "CoreMinimal.h"
#include "ESBShowActorTarget.h"
#include "ESBSkelMeshSlot.h"
#include "SBShowKey.h"
#include "SBShowAnimByMeshSlotKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowAnimByMeshSlotKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkelMeshSlot> MeshSlot;
    
    UPROPERTY(EditAnywhere)
    bool bAbsoluteResourcePath;
    
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
    
    UPROPERTY(EditAnywhere)
    bool bActiveJali;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreShowAnimAsyncLoadLog;
    
    USBShowAnimByMeshSlotKey();

};


#pragma once
#include "CoreMinimal.h"
#include "ESBObjectState.h"
#include "SBAliasCondition.h"
#include "SBAliasConditionGroup.h"
#include "SBAliasEffectVolume.h"
#include "SBDataNodeBase.h"
#include "SBToolDataNode_EventEffectVolumeControl.generated.h"

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_EventEffectVolumeControl : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasEffectVolume EffectVolume;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBObjectState> Activate;
    
    UPROPERTY(EditAnywhere)
    FSBAliasCondition EventCondition;
    
    UPROPERTY(EditAnywhere)
    FSBAliasConditionGroup EventConditionGroup;
    
    UPROPERTY()
    float EventDelayTime;
    
    UPROPERTY()
    float EventDelayMinTime;
    
    UPROPERTY()
    float EventDelayMaxTime;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    USBToolDataNode_EventEffectVolumeControl();

};


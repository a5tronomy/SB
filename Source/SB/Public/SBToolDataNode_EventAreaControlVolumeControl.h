#pragma once
#include "CoreMinimal.h"
#include "ESBObjectState.h"
#include "SBAliasAreaControlVolume.h"
#include "SBAliasCondition.h"
#include "SBAliasConditionGroup.h"
#include "SBDataNodeBase.h"
#include "SBToolDataNode_EventAreaControlVolumeControl.generated.h"

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_EventAreaControlVolumeControl : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasAreaControlVolume AreaControlVolume1;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasAreaControlVolume AreaControlVolume2;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasAreaControlVolume AreaControlVolume3;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasAreaControlVolume AreaControlVolume4;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasAreaControlVolume AreaControlVolume5;
    
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
    
    USBToolDataNode_EventAreaControlVolumeControl();

};


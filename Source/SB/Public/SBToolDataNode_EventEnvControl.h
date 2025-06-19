#pragma once
#include "CoreMinimal.h"
#include "ESBObjectState.h"
#include "ESBZoneEnvControlType.h"
#include "SBAliasCondition.h"
#include "SBAliasConditionGroup.h"
#include "SBAliasZoneCamp.h"
#include "SBAliasZoneEnvSpawn.h"
#include "SBDataNodeBase.h"
#include "SBToolDataNode_EventEnvControl.generated.h"

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_EventEnvControl : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasZoneEnvSpawn EnvSpawnAlias;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBZoneEnvControlType> EnvControlType;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasZoneCamp TargetCampAlias;
    
    UPROPERTY(VisibleAnywhere)
    FName TagName;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBObjectState> Activate;
    
    UPROPERTY(EditAnywhere)
    int32 AddProgressValue;
    
    UPROPERTY(EditAnywhere)
    int32 SetStateProgressValue;
    
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
    
    UPROPERTY(VisibleAnywhere)
    int32 ProgressSlotIndex;
    
    UPROPERTY(VisibleAnywhere)
    float ProgressSpeed;
    
    UPROPERTY(VisibleAnywhere)
    float ProgressSpeedInterpTime;
    
    UPROPERTY(VisibleAnywhere)
    float CurrentProgressValue;
    
    UPROPERTY(VisibleAnywhere)
    float StartProgressValue;
    
    UPROPERTY(VisibleAnywhere)
    float EndProgressValue;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    USBToolDataNode_EventEnvControl();

};


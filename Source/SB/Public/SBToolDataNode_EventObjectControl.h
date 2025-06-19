#pragma once
#include "CoreMinimal.h"
#include "ESBLevelObjectType.h"
#include "ESBObjectState.h"
#include "ESBZoneObjControlActionType.h"
#include "SBAliasCondition.h"
#include "SBAliasConditionGroup.h"
#include "SBAliasLevelTargetFilter.h"
#include "SBDataNodeBase.h"
#include "SBToolDataNode_EventObjectControl.generated.h"

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_EventObjectControl : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(VisibleAnywhere)
    FName TargetDataAlias;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasLevelTargetFilter TargetFilter;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBLevelObjectType> ObjectType;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBObjectState> Activate;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneObjControlActionType> ObjectControlActionType;
    
    UPROPERTY(EditAnywhere)
    FName RetargetSpawnPointName;
    
    UPROPERTY(EditAnywhere)
    bool bWithStorage;
    
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
    
    USBToolDataNode_EventObjectControl();

};


#pragma once
#include "CoreMinimal.h"
#include "ESBObjectState.h"
#include "ESBZoneEffectLeaveState.h"
#include "ESBZoneEffectTargetType.h"
#include "ESBZoneNpcTransitType.h"
#include "ESBZoneType.h"
#include "SBAliasCondition.h"
#include "SBAliasConditionGroup.h"
#include "SBAliasEffect.h"
#include "SBAliasMultiPlayRule.h"
#include "SBAliasWorld.h"
#include "SBAliasZoneEvent.h"
#include "SBAliasZoneLayer.h"
#include "SBDataNodeBase.h"
#include "SBTransitZoneInfo.h"
#include "SBToolDataNode_ZoneData.generated.h"

class UWorld;

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_ZoneData : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName StartPointAlias;
    
    UPROPERTY(EditAnywhere)
    FSBAliasWorld WorldData;
    
    UPROPERTY(EditAnywhere)
    FName IsolatedAreaAlias;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideIsolatedAreaWithWorldMap;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneType> ZoneType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneNpcTransitType> NpcTransitType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBObjectState> InitActive;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBAliasZoneLayer> EnterResetZoneLayerList;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBAliasZoneLayer> LeaveResetZoneLayerList;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEffectTargetType> EnterZoneEffectTargetType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEffectLeaveState> EnterZoneEffectAtLeaveState;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBAliasEffect> EnterZoneEffects;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBAliasZoneEvent> EnterZoneEvent;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBAliasZoneEvent> LeaveZoneEvent;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBAliasZoneEvent> ActiveZoneEvent;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBAliasZoneEvent> DeactiveZoneEvent;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBAliasZoneEvent> ZoneSpawnEvent;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasMultiPlayRule PlayRule;
    
    UPROPERTY(EditAnywhere)
    float OverrideEnterZoneFadeInDelayTime;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> AdditiveDesignLevel;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBTransitZoneInfo> TransitZone;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UWorld>> LoadLevels;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UWorld>> UnloadLevels;
    
    UPROPERTY(EditAnywhere)
    bool bRestoreLevelWhenLeave;
    
    UPROPERTY(EditAnywhere)
    FSBAliasCondition SpiritRoomEscapeCondition;
    
    UPROPERTY(EditAnywhere)
    FSBAliasConditionGroup SpiritRoomEscapeConditionGroup;
    
    UPROPERTY(EditAnywhere)
    bool bSpiritRoom_ChoiceOpenPopup;
    
    UPROPERTY(EditAnywhere)
    FName LevelGraphicsOptionsAlias;
    
    USBToolDataNode_ZoneData();

};


#pragma once
#include "CoreMinimal.h"
#include "ESBObjectState.h"
#include "ESBZoneEffectLeaveState.h"
#include "ESBZoneEffectTargetType.h"
#include "ESBZoneNpcTransitType.h"
#include "ESBZoneType.h"
#include "SBTablePropertyBase.h"
#include "SBZoneTableProperty.generated.h"

USTRUCT()
struct FSBZoneTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName WorldAlias;
    
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
    FName TrainningRoom;
    
    UPROPERTY(EditAnywhere)
    FString StartPointAlias;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EnterZoneResetLayerList;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> LeaveZoneResetLayerList;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EnterEvents;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> LeaveEvents;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ActiveEvents;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> DeactiveEvents;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ZoneSpawnEvents;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEffectTargetType> EnterZoneEffectTargetType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEffectLeaveState> EnterZoneEffectAtLeaveState;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EnterZoneEffects;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> TransitAchievement;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> TransitZone;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> LoadLevels;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> UnloadLevels;
    
    UPROPERTY(EditAnywhere)
    bool bRestoreLevelWhenLeave;
    
    UPROPERTY(EditAnywhere)
    FName PlayRule;
    
    UPROPERTY(EditAnywhere)
    FName SpiritRoomEscapeCondition;
    
    UPROPERTY(EditAnywhere)
    FName SpiritRoomEscapeConditionGroup;
    
    UPROPERTY(EditAnywhere)
    bool bSpiritRoom_ChoiceOpenPopup;
    
    UPROPERTY(EditAnywhere)
    FName LevelGraphicsOptionsAlias;
    
    UPROPERTY(EditAnywhere)
    float OverrideEnterZoneFadeInDelayTime;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> AdditiveDesignLevel;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBZoneTableProperty();
};


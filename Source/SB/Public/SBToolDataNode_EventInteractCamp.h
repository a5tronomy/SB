#pragma once
#include "CoreMinimal.h"
#include "ESBInteractCampType.h"
#include "ESBZoneEventInteractSaveType.h"
#include "SBAliasCondition.h"
#include "SBAliasConditionGroup.h"
#include "SBAliasSoundEvent.h"
#include "SBAliasZoneEnvSpawn.h"
#include "SBDataNodeBase.h"
#include "SBToolDataNode_EventInteractCamp.generated.h"

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_EventInteractCamp : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasZoneEnvSpawn EnvSpawnAlias;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBInteractCampType> InteractType;
    
    UPROPERTY(EditAnywhere)
    FSBAliasCondition EventCondition;
    
    UPROPERTY(EditAnywhere)
    FSBAliasConditionGroup EventConditionGroup;
    
    UPROPERTY(EditAnywhere)
    bool bShowResetZoneUI;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEventInteractSaveType> DoingSaveType;
    
    UPROPERTY(EditAnywhere)
    FSBAliasSoundEvent SoundEventAlias;
    
    USBToolDataNode_EventInteractCamp();

};


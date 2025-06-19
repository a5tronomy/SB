#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaPlayerEventHeader.h"
#include "SBWebJobSchemaSpawnItemEvent.generated.h"

USTRUCT()
struct FSBWebJobSchemaSpawnItemEvent : public FSBWebJobSchemaPlayerEventHeader {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString event_type;
    
    UPROPERTY()
    FString spawn_type;
    
    UPROPERTY()
    FString item_alias;
    
    UPROPERTY()
    uint32 item_amount;
    
    UPROPERTY()
    FString zone_env_spawn_alias;
    
    UPROPERTY()
    FString zone_env_alias;
    
    UPROPERTY()
    FString npc_alias;
    
    UPROPERTY()
    FString event_spawn_alias;
    
    UPROPERTY()
    FString zone_event_actor_table_alias;
    
    UPROPERTY()
    FString zone_event_actor_name;
    
    UPROPERTY()
    FString fish_alias;
    
    SB_API FSBWebJobSchemaSpawnItemEvent();
};


#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaPlayerEventHeader.h"
#include "SBWebJobSchemaGainCoreEvent.generated.h"

USTRUCT()
struct FSBWebJobSchemaGainCoreEvent : public FSBWebJobSchemaPlayerEventHeader {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString event_type;
    
    UPROPERTY()
    FString item_id;
    
    UPROPERTY()
    FString zone_env_spawn_id;
    
    UPROPERTY()
    FString zone_env_id;
    
    SB_API FSBWebJobSchemaGainCoreEvent();
};


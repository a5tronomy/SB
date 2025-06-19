#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaPlayerEventHeader.h"
#include "SBWebJobSchemaPlayerDeadEvent.generated.h"

USTRUCT()
struct FSBWebJobSchemaPlayerDeadEvent : public FSBWebJobSchemaPlayerEventHeader {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString event_type;
    
    UPROPERTY()
    FString boss_id;
    
    UPROPERTY()
    FString entity_type;
    
    SB_API FSBWebJobSchemaPlayerDeadEvent();
};


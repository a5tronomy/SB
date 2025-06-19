#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaPlayerEventHeader.h"
#include "SBWebJobSchemaLevelUpEvent.generated.h"

USTRUCT()
struct FSBWebJobSchemaLevelUpEvent : public FSBWebJobSchemaPlayerEventHeader {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString event_type;
    
    UPROPERTY()
    FString level_type;
    
    UPROPERTY()
    FString item_id;
    
    UPROPERTY()
    int32 current_level;
    
    SB_API FSBWebJobSchemaLevelUpEvent();
};


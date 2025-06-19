#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaPlayerEventHeader.h"
#include "SBWebJobSchemaQuestEvent.generated.h"

USTRUCT()
struct FSBWebJobSchemaQuestEvent : public FSBWebJobSchemaPlayerEventHeader {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString event_type;
    
    UPROPERTY()
    FString quest_id;
    
    UPROPERTY()
    FString quest_type;
    
    UPROPERTY()
    FString quest_state;
    
    SB_API FSBWebJobSchemaQuestEvent();
};


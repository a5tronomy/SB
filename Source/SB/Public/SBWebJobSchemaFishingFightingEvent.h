#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaPlayerEventHeader.h"
#include "SBWebJobSchemaFishingFightingEvent.generated.h"

USTRUCT()
struct FSBWebJobSchemaFishingFightingEvent : public FSBWebJobSchemaPlayerEventHeader {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString event_type;
    
    UPROPERTY()
    FString fish_alias;
    
    SB_API FSBWebJobSchemaFishingFightingEvent();
};


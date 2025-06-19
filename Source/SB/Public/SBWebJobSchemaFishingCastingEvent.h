#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaPlayerEventHeader.h"
#include "SBWebJobSchemaFishingCastingEvent.generated.h"

USTRUCT()
struct FSBWebJobSchemaFishingCastingEvent : public FSBWebJobSchemaPlayerEventHeader {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString event_type;
    
    UPROPERTY()
    FString lure_alias;
    
    SB_API FSBWebJobSchemaFishingCastingEvent();
};


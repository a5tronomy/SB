#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaPlayerEventHeader.h"
#include "SBWebJobSchemaFishingResultEvent.generated.h"

USTRUCT()
struct FSBWebJobSchemaFishingResultEvent : public FSBWebJobSchemaPlayerEventHeader {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString event_type;
    
    UPROPERTY()
    FString fish_alias;
    
    UPROPERTY()
    int32 fishing_attack_power;
    
    SB_API FSBWebJobSchemaFishingResultEvent();
};


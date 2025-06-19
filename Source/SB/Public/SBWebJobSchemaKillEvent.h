#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaPlayerEventHeader.h"
#include "SBWebJobSchemaKillEvent.generated.h"

USTRUCT()
struct FSBWebJobSchemaKillEvent : public FSBWebJobSchemaPlayerEventHeader {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString event_type;
    
    UPROPERTY()
    FString character_alias;
    
    SB_API FSBWebJobSchemaKillEvent();
};


#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaPlayerEventHeader.h"
#include "SBWebJobSchemaActivityEvent.generated.h"

USTRUCT()
struct FSBWebJobSchemaActivityEvent : public FSBWebJobSchemaPlayerEventHeader {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString event_type;
    
    UPROPERTY()
    FString activity_id;
    
    UPROPERTY()
    FString activity_state;
    
    SB_API FSBWebJobSchemaActivityEvent();
};


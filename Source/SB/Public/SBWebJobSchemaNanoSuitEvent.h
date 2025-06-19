#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaPlayerEventHeader.h"
#include "SBWebJobSchemaNanoSuitEvent.generated.h"

USTRUCT()
struct FSBWebJobSchemaNanoSuitEvent : public FSBWebJobSchemaPlayerEventHeader {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString event_type;
    
    UPROPERTY()
    FString item_id;
    
    UPROPERTY()
    FString item_category;
    
    SB_API FSBWebJobSchemaNanoSuitEvent();
};


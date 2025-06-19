#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaPlayerEventHeader.h"
#include "SBWebJobSchemaAcquireItemEvent.generated.h"

USTRUCT()
struct FSBWebJobSchemaAcquireItemEvent : public FSBWebJobSchemaPlayerEventHeader {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString event_type;
    
    UPROPERTY()
    FString item_id;
    
    UPROPERTY()
    FString item_category;
    
    UPROPERTY()
    int32 change_amount;
    
    UPROPERTY()
    int32 current_amount;
    
    SB_API FSBWebJobSchemaAcquireItemEvent();
};


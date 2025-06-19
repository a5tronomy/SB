#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaPlayerEventHeader.h"
#include "SBWebJobSchemaConsumeItemEvent.generated.h"

USTRUCT()
struct FSBWebJobSchemaConsumeItemEvent : public FSBWebJobSchemaPlayerEventHeader {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString event_type;
    
    UPROPERTY()
    FString boss_id;
    
    UPROPERTY()
    FString item_id;
    
    UPROPERTY()
    int32 change_amount;
    
    UPROPERTY()
    int32 current_amount;
    
    SB_API FSBWebJobSchemaConsumeItemEvent();
};


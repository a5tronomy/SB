#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaPlayerEventHeader.h"
#include "SBWebJobSchemaChangeCoinEvent.generated.h"

USTRUCT()
struct FSBWebJobSchemaChangeCoinEvent : public FSBWebJobSchemaPlayerEventHeader {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString event_type;
    
    UPROPERTY()
    int32 coin_change_amount;
    
    UPROPERTY()
    int32 coin_current_amount;
    
    SB_API FSBWebJobSchemaChangeCoinEvent();
};


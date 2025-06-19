#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaPlayerEventHeader.h"
#include "SBWebJobSchemaChangeGoldEvent.generated.h"

USTRUCT()
struct FSBWebJobSchemaChangeGoldEvent : public FSBWebJobSchemaPlayerEventHeader {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString event_type;
    
    UPROPERTY()
    int32 gold_change_amount;
    
    UPROPERTY()
    int32 gold_current_amount;
    
    SB_API FSBWebJobSchemaChangeGoldEvent();
};


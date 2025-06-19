#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaPlayerEventHeader.h"
#include "SBWebJobSchemaChangeSPExpEvent.generated.h"

USTRUCT()
struct FSBWebJobSchemaChangeSPExpEvent : public FSBWebJobSchemaPlayerEventHeader {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString event_type;
    
    UPROPERTY()
    int32 spexp_change_amount;
    
    UPROPERTY()
    int32 spexp_current_amount;
    
    UPROPERTY()
    int32 splevel_current_amount;
    
    UPROPERTY()
    int32 sp_current_amount;
    
    SB_API FSBWebJobSchemaChangeSPExpEvent();
};


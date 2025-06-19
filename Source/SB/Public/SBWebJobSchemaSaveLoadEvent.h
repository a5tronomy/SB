#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaPlayerEventHeader.h"
#include "SBWebJobSchemaSaveLoadEvent.generated.h"

USTRUCT()
struct FSBWebJobSchemaSaveLoadEvent : public FSBWebJobSchemaPlayerEventHeader {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString event_type;
    
    UPROPERTY()
    FString saveload_type;
    
    SB_API FSBWebJobSchemaSaveLoadEvent();
};


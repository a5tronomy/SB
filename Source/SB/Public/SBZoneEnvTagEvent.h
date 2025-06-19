#pragma once
#include "CoreMinimal.h"
#include "SBAliasZoneEvent.h"
#include "SBZoneEnvTagEvent.generated.h"

USTRUCT(BlueprintType)
struct FSBZoneEnvTagEvent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName StateTagName;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBAliasZoneEvent> EventList;
    
    SB_API FSBZoneEnvTagEvent();
};


#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaBase.h"
#include "SBWebJobSchemaMatchRequest.generated.h"

USTRUCT()
struct FSBWebJobSchemaMatchRequest : public FSBWebJobSchemaBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString TicketId;
    
    SB_API FSBWebJobSchemaMatchRequest();
};


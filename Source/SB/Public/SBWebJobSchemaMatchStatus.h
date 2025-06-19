#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaBase.h"
#include "SBWebJobSchemaMatchStatus.generated.h"

USTRUCT()
struct FSBWebJobSchemaMatchStatus : public FSBWebJobSchemaBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString IpAddress;
    
    UPROPERTY()
    int32 Port;
    
    UPROPERTY()
    FString PlayerSessionId;
    
    UPROPERTY()
    FString Status;
    
    SB_API FSBWebJobSchemaMatchStatus();
};


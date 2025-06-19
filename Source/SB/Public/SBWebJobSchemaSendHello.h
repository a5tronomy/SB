#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaBase.h"
#include "SBWebJobSchemaSendHello.generated.h"

USTRUCT()
struct FSBWebJobSchemaSendHello : public FSBWebJobSchemaBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Event;
    
    UPROPERTY()
    FString Output;
    
    UPROPERTY()
    FString Timestamp;
    
    SB_API FSBWebJobSchemaSendHello();
};


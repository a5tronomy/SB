#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaBase.h"
#include "SBWebJobSchemaMatchResult.generated.h"

USTRUCT()
struct FSBWebJobSchemaMatchResult : public FSBWebJobSchemaBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString PlayerName;
    
    UPROPERTY()
    FString MatchResult;
    
    SB_API FSBWebJobSchemaMatchResult();
};


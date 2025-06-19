#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaBase.h"
#include "SBWebJobSchemaJiraCommon.generated.h"

USTRUCT()
struct FSBWebJobSchemaJiraCommon : public FSBWebJobSchemaBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 ID;
    
    UPROPERTY()
    FString Self;
    
    UPROPERTY()
    FString Key;
    
    SB_API FSBWebJobSchemaJiraCommon();
};


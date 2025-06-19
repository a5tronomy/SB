#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaBase.h"
#include "SBWebJobSchemaMatchStop.generated.h"

USTRUCT()
struct FSBWebJobSchemaMatchStop : public FSBWebJobSchemaBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Status;
    
    SB_API FSBWebJobSchemaMatchStop();
};


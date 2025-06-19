#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaBase.h"
#include "SBWebJobSchemaGetNetCommand.generated.h"

USTRUCT()
struct FSBWebJobSchemaGetNetCommand : public FSBWebJobSchemaBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString NetCommand;
    
    SB_API FSBWebJobSchemaGetNetCommand();
};


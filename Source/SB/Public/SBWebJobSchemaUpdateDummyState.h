#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaBase.h"
#include "SBWebJobSchemaUpdateDummyState.generated.h"

USTRUCT()
struct FSBWebJobSchemaUpdateDummyState : public FSBWebJobSchemaBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString DummyState;
    
    SB_API FSBWebJobSchemaUpdateDummyState();
};


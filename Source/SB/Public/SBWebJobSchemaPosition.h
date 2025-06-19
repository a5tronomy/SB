#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaBase.h"
#include "SBWebJobSchemaPosition.generated.h"

USTRUCT(BlueprintType)
struct FSBWebJobSchemaPosition : public FSBWebJobSchemaBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 X;
    
    UPROPERTY()
    int32 Y;
    
    UPROPERTY()
    int32 Z;
    
    SB_API FSBWebJobSchemaPosition();
};


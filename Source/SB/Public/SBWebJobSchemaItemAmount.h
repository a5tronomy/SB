#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaBase.h"
#include "SBWebJobSchemaItemAmount.generated.h"

USTRUCT(BlueprintType)
struct FSBWebJobSchemaItemAmount : public FSBWebJobSchemaBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString item_id;
    
    UPROPERTY()
    int32 item_amount;
    
    SB_API FSBWebJobSchemaItemAmount();
};


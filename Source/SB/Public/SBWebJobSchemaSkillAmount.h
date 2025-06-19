#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaBase.h"
#include "SBWebJobSchemaSkillAmount.generated.h"

USTRUCT(BlueprintType)
struct FSBWebJobSchemaSkillAmount : public FSBWebJobSchemaBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString skill_id;
    
    UPROPERTY()
    int32 skill_amount;
    
    SB_API FSBWebJobSchemaSkillAmount();
};


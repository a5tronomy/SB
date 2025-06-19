#pragma once
#include "CoreMinimal.h"
#include "ESBSkillEnergyType.h"
#include "SBTablePropertyBase.h"
#include "SBItemConsumableTableProperty.generated.h"

USTRUCT()
struct FSBItemConsumableTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName ConditionGroup;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EffectAliasArray;
    
    UPROPERTY(EditAnywhere)
    bool ConsumeImmidiate;
    
    UPROPERTY(EditAnywhere)
    int32 ConsumeCoolTime;
    
    UPROPERTY(EditAnywhere)
    FName ConsumeSkillAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkillEnergyType> ConsumeEnergyType;
    
    UPROPERTY(EditAnywhere)
    float ConsumeEnergyAmount;
    
    UPROPERTY(EditAnywhere)
    bool NotRemoveItem;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBItemConsumableTableProperty();
};


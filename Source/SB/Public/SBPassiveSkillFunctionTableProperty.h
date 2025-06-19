#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBPassiveSkillFunctionTableProperty.generated.h"

USTRUCT()
struct FSBPassiveSkillFunctionTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> PassiveSkillEffectAliasArray;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBPassiveSkillFunctionTableProperty();
};


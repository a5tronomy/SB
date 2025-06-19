#pragma once
#include "CoreMinimal.h"
#include "ESBSkillSlotType.h"
#include "SBTablePropertyBase.h"
#include "SBSkillPriorityTableProperty.generated.h"

USTRUCT()
struct FSBSkillPriorityTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkillSlotType> SkillSlotType;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> SkillAliasArray;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBSkillPriorityTableProperty();
};


#pragma once
#include "CoreMinimal.h"
#include "SBSkillNavigationPath.generated.h"

USTRUCT(BlueprintType)
struct FSBSkillNavigationPath {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName SkillTreeSlotName;
    
    UPROPERTY(EditAnywhere)
    FName SkillSlotName;
    
    SB_API FSBSkillNavigationPath();
};


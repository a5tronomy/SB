#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ESBAISkillComboType.h"
#include "SBBTTask_SbUseSkill.generated.h"

UCLASS()
class SB_API USBBTTask_SbUseSkill : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bSubTarget;
    
    UPROPERTY(EditAnywhere)
    bool bRageSkill;
    
    UPROPERTY(EditAnywhere)
    bool bUseSkillCommand;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> SkillName;
    
    UPROPERTY(EditAnywhere)
    bool bUsePostStep;
    
    UPROPERTY(EditAnywhere)
    bool bAutoTarget;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBAISkillComboType::Type> SkillComboType;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> SkillComboName;
    
    UPROPERTY(EditAnywhere)
    FString TargetingPointName;
    
    USBBTTask_SbUseSkill();

};


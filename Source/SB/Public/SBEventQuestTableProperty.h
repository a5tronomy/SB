#pragma once
#include "CoreMinimal.h"
#include "ESBQuestEventTargetType.h"
#include "SBTablePropertyBase.h"
#include "SBEventQuestTableProperty.generated.h"

USTRUCT()
struct FSBEventQuestTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName Quest;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBQuestEventTargetType> TargetType;
    
    UPROPERTY(EditAnywhere)
    FName EventCondition;
    
    UPROPERTY(EditAnywhere)
    FName EventConditionGroup;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBEventQuestTableProperty();
};


#pragma once
#include "CoreMinimal.h"
#include "ESBZoneEventActorTarget.h"
#include "SBTablePropertyBase.h"
#include "SBEventGuideActionTableProperty.generated.h"

USTRUCT()
struct FSBEventGuideActionTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEventActorTarget> ToTarget;
    
    UPROPERTY(EditAnywhere)
    FName TargetTagName;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> FollowerTagNameArray;
    
    UPROPERTY(EditAnywhere)
    float FollowerStartDelayTime;
    
    UPROPERTY(EditAnywhere)
    bool StopGuideAction;
    
    UPROPERTY(EditAnywhere)
    FName GuideActionAlias;
    
    UPROPERTY(EditAnywhere)
    FName EventCondition;
    
    UPROPERTY(EditAnywhere)
    FName EventConditionGroup;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBEventGuideActionTableProperty();
};


#pragma once
#include "CoreMinimal.h"
#include "ESBMetaAIEventType.h"
#include "ESBMetaAIThink.h"
#include "ESBZoneEventActorTarget.h"
#include "SBTablePropertyBase.h"
#include "SBEventMetaAITableProperty.generated.h"

USTRUCT()
struct FSBEventMetaAITableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEventActorTarget> ToTarget;
    
    UPROPERTY(EditAnywhere)
    FName TargetTagName;
    
    UPROPERTY(EditAnywhere)
    FName EventConditionGroup;
    
    UPROPERTY(EditAnywhere)
    FName EventCondition;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMetaAIEventType> MetaAIEventType;
    
    UPROPERTY(EditAnywhere)
    FName SpecialBehaviorTag;
    
    UPROPERTY(EditAnywhere)
    FName AddTag;
    
    UPROPERTY(EditAnywhere)
    ESBMetaAIThink ForceThink;
    
    UPROPERTY(EditAnywhere)
    FName ForceThink_BehaviorAlias;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBEventMetaAITableProperty();
};


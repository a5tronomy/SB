#pragma once
#include "CoreMinimal.h"
#include "ESBZoneEventActorTarget.h"
#include "SBAliasEffect.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_ConditionActorEffect.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_ConditionActorEffect : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSBInteractionExecPinInfo ExecInput;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasEffect EffectAlias;
    
    UPROPERTY(VisibleAnywhere)
    bool CompareAttachedEffect;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBZoneEventActorTarget> TargetActorType;
    
    UPROPERTY(VisibleAnywhere)
    FName TargetTagName;
    
    UPROPERTY()
    FSBInteractionExecPinInfo OutputTrueExec;
    
    UPROPERTY()
    FSBInteractionExecPinInfo OutputFalseExec;
    
    UPROPERTY()
    bool ResultValue;
    
    USBInteractionNode_ConditionActorEffect();

};


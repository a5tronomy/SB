#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBBlackboardVarType.h"
#include "SBAliasCondition.h"
#include "SBAliasConditionGroup.h"
#include "SBAliasLevelTargetFilter.h"
#include "SBDataNodeBase.h"
#include "SBToolDataNode_EventAIDecorator.generated.h"

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_EventAIDecorator : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasLevelTargetFilter TargetFilter;
    
    UPROPERTY(EditAnywhere)
    FName ValueKey;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBBlackboardVarType::Type> ValueType;
    
    UPROPERTY(EditAnywhere)
    FVector CustomVectorValue;
    
    UPROPERTY(EditAnywhere)
    FSBAliasCondition EventCondition;
    
    UPROPERTY(EditAnywhere)
    FSBAliasConditionGroup EventConditionGroup;
    
    UPROPERTY()
    float EventDelayTime;
    
    UPROPERTY()
    float EventDelayMinTime;
    
    UPROPERTY()
    float EventDelayMaxTime;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    USBToolDataNode_EventAIDecorator();

};


#pragma once
#include "CoreMinimal.h"
#include "ESBQuestMissionType.h"
#include "ESBQuestTaskDescriptionUIType.h"
#include "ESBQuestTaskUIType.h"
#include "SBAliasConditionGroup.h"
#include "SBQuestNode.h"
#include "SBQuestTaskNode.generated.h"

UCLASS(Abstract, EditInlineNew)
class SB_API USBQuestTaskNode : public USBQuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName TaskAlias;
    
    UPROPERTY(VisibleAnywhere)
    uint32 ID;
    
    UPROPERTY(VisibleAnywhere)
    FText Description;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBQuestTaskUIType> UIType;
    
    UPROPERTY(VisibleAnywhere)
    ESBQuestTaskDescriptionUIType DescriptionUIType;
    
    UPROPERTY(VisibleAnywhere)
    bool HideHUD;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FName> TrackingTargetFilters;
    
    UPROPERTY(EditAnywhere)
    FSBAliasConditionGroup TrackingConditionGroup;
    
    UPROPERTY()
    TEnumAsByte<ESBQuestMissionType> MissionType;
    
    USBQuestTaskNode();

};


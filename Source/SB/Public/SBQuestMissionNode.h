#pragma once
#include "CoreMinimal.h"
#include "SAliasBRestartRule.h"
#include "SBQuestNode.h"
#include "SBQuestTaskContainer.h"
#include "SBQuestWarpNodeData.h"
#include "SBQuestMissionNode.generated.h"

UCLASS(EditInlineNew)
class SB_API USBQuestMissionNode : public USBQuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName TaskGroupAlias;
    
    UPROPERTY(VisibleAnywhere)
    uint32 ID;
    
    UPROPERTY(VisibleAnywhere)
    FText Description;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FName> ActivateActionArray;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FName> ProgressActionArray;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FName> CompleteActionArray;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBQuestTaskContainer> TaskContainerArray;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FName> QuestPathStartNodes;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FString> QuestPathWorlds;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FString> QuestPathAreas;
    
    UPROPERTY(EditAnywhere)
    FSAliasBRestartRule RestartRuleData;
    
    UPROPERTY()
    FSBQuestWarpNodeData WarpWhenComplete;
    
    UPROPERTY(EditAnywhere)
    bool bShowGreenDot;
    
    USBQuestMissionNode();

};


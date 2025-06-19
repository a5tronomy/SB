#pragma once
#include "CoreMinimal.h"
#include "ESBConditionEventType.h"
#include "ESBConditionResultType.h"
#include "ESBQuestType.h"
#include "ESBQuestUIType.h"
#include "SBAliasAchievement.h"
#include "SBAliasConditionGroup.h"
#include "SBAliasQuest.h"
#include "SBQuestEventActionDataInfo.h"
#include "SBQuestPinType.h"
#include "SBQuestRootNode.h"
#include "SBTableIndexRewardGroup.h"
#include "SBQuestElementNode.generated.h"

UCLASS(EditInlineNew)
class SB_API USBQuestElementNode : public USBQuestRootNode {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName QuestAlias;
    
    UPROPERTY(VisibleAnywhere)
    uint32 ID;
    
    UPROPERTY()
    FString TitleName;
    
    UPROPERTY(VisibleAnywhere)
    FText TitleName_;
    
    UPROPERTY()
    FString QuestDescription;
    
    UPROPERTY(VisibleAnywhere)
    FText QuestDescription_;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBQuestType> QuestType;
    
    UPROPERTY(VisibleAnywhere)
    ESBQuestUIType QuestUIType;
    
    UPROPERTY(VisibleAnywhere)
    FSBTableIndexRewardGroup RewardGroupIndex;
    
    UPROPERTY(EditAnywhere)
    FSBAliasQuest NextQuest;
    
    UPROPERTY(EditAnywhere)
    FSBAliasAchievement FailAchievementCondition;
    
    UPROPERTY(EditAnywhere)
    FSBAliasConditionGroup FailConditionGroup;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionEventType> FailConditionEventType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionResultType> FailConditionResultType;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FName> RequiredQuestArray;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FName> AcquireActionArray;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FName> CompleteActionArray;
    
    UPROPERTY()
    FSBQuestPinType PrevQuestPin;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FName> TaskGroupArray;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FName> QuestPathStartNodes;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FString> QuestPathWorlds;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBQuestEventActionDataInfo> AcquireEventActionList;
    
    USBQuestElementNode();

};


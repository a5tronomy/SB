#pragma once
#include "CoreMinimal.h"
#include "ESBConditionEventType.h"
#include "ESBConditionResultType.h"
#include "ESBDisplayRequestBoardType.h"
#include "ESBQuestRequestType.h"
#include "ESBQuestUIType.h"
#include "ESBSequencerSubtitleType.h"
#include "SBAliasAchievement.h"
#include "SBAliasConditionGroup.h"
#include "SBQuestEventActionDataInfo.h"
#include "SBQuestRootNode.h"
#include "SBTableIndexRewardGroup.h"
#include "SBQuestRequestNode.generated.h"

class USoundBase;

UCLASS(EditInlineNew)
class SB_API USBQuestRequestNode : public USBQuestRootNode {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName Alias;
    
    UPROPERTY(VisibleAnywhere)
    uint32 ID;
    
    UPROPERTY(VisibleAnywhere)
    FText title;
    
    UPROPERTY()
    FText Description;
    
    UPROPERTY(EditAnywhere)
    FText RequestDescription;
    
    UPROPERTY(EditAnywhere)
    FText Report;
    
    UPROPERTY(EditAnywhere)
    FText GameMenuReport;
    
    UPROPERTY(EditAnywhere)
    ESBQuestRequestType RequestType;
    
    UPROPERTY(EditAnywhere)
    ESBQuestUIType UIType;
    
    UPROPERTY(EditAnywhere)
    ESBDisplayRequestBoardType DisplayRequestBoardType;
    
    UPROPERTY(EditAnywhere)
    FSBTableIndexRewardGroup RewardGroupIndex;
    
    UPROPERTY(EditAnywhere)
    FSBAliasAchievement FailAchievementCondition;
    
    UPROPERTY(EditAnywhere)
    FSBAliasConditionGroup FailConditionGroup;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionEventType> FailConditionEventType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionResultType> FailConditionResultType;
    
    UPROPERTY(EditAnywhere)
    FSBAliasConditionGroup AvailableConditionGroup;
    
    UPROPERTY(EditAnywhere)
    FSBAliasConditionGroup ValidConditionGroup;
    
    UPROPERTY(EditAnywhere)
    USoundBase* AcquireSound;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBSequencerSubtitleType> AcquireSubtitleType;
    
    UPROPERTY(EditAnywhere)
    float AcquireSubtitleDuration;
    
    UPROPERTY(EditAnywhere)
    FText AcquireSubtitleTitle;
    
    UPROPERTY(EditAnywhere)
    FText AcquireSubtitleMessage;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FName> AcquireActionArray;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FName> CompleteActionArray;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FName> TaskGroupArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBQuestEventActionDataInfo> AcquireEventActionList;
    
    UPROPERTY(EditAnywhere)
    bool bMaintainNewGamePlus;
    
    USBQuestRequestNode();

};


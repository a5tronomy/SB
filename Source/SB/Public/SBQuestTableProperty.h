#pragma once
#include "CoreMinimal.h"
#include "ESBConditionEventType.h"
#include "ESBConditionResultType.h"
#include "ESBDisplayRequestBoardType.h"
#include "ESBQuestRequestType.h"
#include "ESBQuestTaskEventActionType.h"
#include "ESBQuestType.h"
#include "ESBQuestUIType.h"
#include "ESBSequencerSubtitleType.h"
#include "SBTablePropertyBase.h"
#include "SBQuestTableProperty.generated.h"

USTRUCT()
struct FSBQuestTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBQuestType> QuestType;
    
    UPROPERTY(EditAnywhere)
    ESBQuestUIType QuestUIType;
    
    UPROPERTY(EditAnywhere)
    ESBQuestRequestType RequestType;
    
    UPROPERTY(EditAnywhere)
    ESBDisplayRequestBoardType DisplayRequestBoardType;
    
    UPROPERTY(EditAnywhere)
    FName NextQuest;
    
    UPROPERTY(EditAnywhere)
    FText TitleName_;
    
    UPROPERTY(EditAnywhere)
    FText Description_;
    
    UPROPERTY(EditAnywhere)
    FText RequestDescription;
    
    UPROPERTY(EditAnywhere)
    FText Report;
    
    UPROPERTY(EditAnywhere)
    FName reward;
    
    UPROPERTY(EditAnywhere)
    FName FailAchievementCondition;
    
    UPROPERTY(EditAnywhere)
    FName FailConditionGroup;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionEventType> FailConditionEventType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionResultType> FailConditionResultType;
    
    UPROPERTY(EditAnywhere)
    FName AvailableConditionGroup;
    
    UPROPERTY(EditAnywhere)
    FName ValidConditionGroup;
    
    UPROPERTY(EditAnywhere)
    FString AcquireSound;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSequencerSubtitleType> AcquireSubtitleType;
    
    UPROPERTY(EditAnywhere)
    float AcquireSubtitleDuration;
    
    UPROPERTY(EditAnywhere)
    FText AcquireSubtitleTitle;
    
    UPROPERTY(EditAnywhere)
    FText AcquireSubtitleMessage;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> RequiredQuestArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> TaskGroupAlias;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> AcquireEventArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> CompleteEventArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> QuestPathStartNodes;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> QuestPathWorlds;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<ESBQuestTaskEventActionType>> AcquireEventActionTypeList;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> AcquireEventActionAliasList;
    
    UPROPERTY(EditAnywhere)
    bool bMaintainNewGamePlus;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBQuestTableProperty();
};


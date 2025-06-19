#pragma once
#include "CoreMinimal.h"
#include "ESBQuestMissionType.h"
#include "ESBQuestTaskDescriptionUIType.h"
#include "ESBQuestTaskEventActionType.h"
#include "ESBQuestTaskUIType.h"
#include "ESBUITaskConditionDisplayType.h"
#include "SBTablePropertyBase.h"
#include "SBQuestTaskTableProperty.generated.h"

USTRUCT()
struct FSBQuestTaskTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FText Description;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBQuestMissionType> MissionType;
    
    UPROPERTY(EditAnywhere)
    FName OwnerFilter;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> TargetFilter;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> TrackingTargetFilter;
    
    UPROPERTY(EditAnywhere)
    FName TrackingConditionGroup;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> CustomNameArray;
    
    UPROPERTY(EditAnywhere)
    FString CustomStr;
    
    UPROPERTY(EditAnywhere)
    FString CustomStr2;
    
    UPROPERTY(EditAnywhere)
    int32 CustomInt;
    
    UPROPERTY(EditAnywhere)
    int32 CustomInt2;
    
    UPROPERTY(EditAnywhere)
    float CustomFloat;
    
    UPROPERTY(EditAnywhere)
    int32 ConditionCount;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBQuestTaskUIType> UIType;
    
    UPROPERTY(EditAnywhere)
    ESBQuestTaskDescriptionUIType DescriptionUIType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBUITaskConditionDisplayType> TaskConditionUIType;
    
    UPROPERTY(EditAnywhere)
    bool HideHUD;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<ESBQuestTaskEventActionType>> TaskStartEventTypeList;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> TaskStartEventSpawnAliasList;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<ESBQuestTaskEventActionType>> TaskCompleteEventTypeList;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> TaskCompleteEventSpawnAliasList;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<ESBQuestTaskEventActionType>> TaskProgressEventTypeList;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> TaskProgressEventProgressCountList;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> TaskProgressEventSpawnAliasList;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBQuestTaskTableProperty();
};


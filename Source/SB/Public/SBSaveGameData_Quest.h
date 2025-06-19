#pragma once
#include "CoreMinimal.h"
#include "ESBUIWorldMapTargetType.h"
#include "SBSaveGameData_CustomPinContainer.h"
#include "SBSaveGameData_QuestCustomTracking.h"
#include "SBSaveGameData_QuestObject.h"
#include "SBSaveGameData_Quest.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_Quest {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSBSaveGameData_QuestObject> ProgressQuestList;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBSaveGameData_QuestObject> CompleteQuestList;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBSaveGameData_QuestObject> FailedQuestList;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> TrackingQuestAliases;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBSaveGameData_QuestCustomTracking> CustomTrackingList;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBSaveGameData_CustomPinContainer> CustomPinContainerList;
    
    UPROPERTY(EditAnywhere)
    FName CustomTrackingTargetAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBUIWorldMapTargetType> CustomTrackingTargetType;
    
    UPROPERTY(EditAnywhere)
    FName CustomTrackingTargetWorldAlias;
    
    UPROPERTY(EditAnywhere)
    FName CustomTrackingTargetAreaAlias;
    
    UPROPERTY(EditAnywhere)
    FName TrackingQuestAlias;
    
    SB_API FSBSaveGameData_Quest();
};


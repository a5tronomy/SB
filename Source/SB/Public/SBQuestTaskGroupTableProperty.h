#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESBQuestWarpType.h"
#include "SBQuestTaskContainer.h"
#include "SBTablePropertyBase.h"
#include "SBQuestTaskGroupTableProperty.generated.h"

USTRUCT()
struct FSBQuestTaskGroupTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FText Description;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBQuestTaskContainer> TaskContainerArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ActivateEvent;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ProgressEvent;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> CompleteEvent;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> QuestPathStartNodes;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> QuestPathWorlds;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> QuestPathAreas;
    
    UPROPERTY(EditAnywhere)
    FName RestartRule;
    
    UPROPERTY(EditAnywhere)
    bool bShowGreenDot;
    
    UPROPERTY(EditAnywhere)
    ESBQuestWarpType WarpType;
    
    UPROPERTY(EditAnywhere)
    FText WarpUIDescription;
    
    UPROPERTY(EditAnywhere)
    FName WarpConditionGroup;
    
    UPROPERTY(EditAnywhere)
    FName WarpTargetCamp;
    
    UPROPERTY(EditAnywhere)
    FName WarpTargetWorld;
    
    UPROPERTY(EditAnywhere)
    FVector WarpTargetLocation;
    
    UPROPERTY(EditAnywhere)
    FRotator WarpTargetRotation;
    
    UPROPERTY(EditAnywhere)
    FName WarpTargetSpawnPoint;
    
    UPROPERTY(EditAnywhere)
    FName WarpChoiceYesPlayTheater;
    
    UPROPERTY(EditAnywhere)
    FName WarpChoiceNoPlayTheater;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBQuestTaskGroupTableProperty();
};


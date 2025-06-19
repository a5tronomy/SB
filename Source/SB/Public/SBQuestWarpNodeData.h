#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESBQuestWarpType.h"
#include "SBAliasEventTheater.h"
#include "SBAliasSpawnPoint.h"
#include "SBAliasWorld.h"
#include "SBAliasZoneCamp.h"
#include "SBQuestWarpNodeData.generated.h"

USTRUCT(BlueprintType)
struct FSBQuestWarpNodeData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ESBQuestWarpType WarpType;
    
    UPROPERTY(EditAnywhere)
    FText WarpUIDescription;
    
    UPROPERTY(EditAnywhere)
    FName ConditionGroup;
    
    UPROPERTY(EditAnywhere)
    FSBAliasZoneCamp TargetCamp;
    
    UPROPERTY(EditAnywhere)
    FSBAliasWorld TargetWorld;
    
    UPROPERTY(EditAnywhere)
    FVector TargetLocation;
    
    UPROPERTY(EditAnywhere)
    FRotator TargetRotation;
    
    UPROPERTY(EditAnywhere)
    FSBAliasSpawnPoint TargetSpawnPoint;
    
    UPROPERTY(EditAnywhere)
    FSBAliasEventTheater WarpChoiceYesPlayTheater;
    
    UPROPERTY(EditAnywhere)
    FSBAliasEventTheater WarpChoiceNoPlayTheater;
    
    SB_API FSBQuestWarpNodeData();
};


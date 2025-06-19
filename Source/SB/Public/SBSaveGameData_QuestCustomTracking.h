#pragma once
#include "CoreMinimal.h"
#include "ESBUIWorldMapTargetType.h"
#include "SBSaveGameData_QuestCustomTracking.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_QuestCustomTracking {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName TargetAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBUIWorldMapTargetType> TargetType;
    
    UPROPERTY(EditAnywhere)
    FName TargetWorldAlias;
    
    UPROPERTY(EditAnywhere)
    FName TargetAreaAlias;
    
    UPROPERTY(EditAnywhere)
    int32 TargetPinIndex;
    
    SB_API FSBSaveGameData_QuestCustomTracking();
};


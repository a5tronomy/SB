#pragma once
#include "CoreMinimal.h"
#include "SBAliasAchievement.h"
#include "SBAliasZoneEnvSpawn.h"
#include "SBQuestEventActionDataInfo.h"
#include "SBQuestTaskNode.h"
#include "SBQuestTaskTypeEnvState.generated.h"

UCLASS(EditInlineNew)
class SB_API USBQuestTaskTypeEnvState : public USBQuestTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FSBAliasZoneEnvSpawn ZoneEnvSpawn;
    
    UPROPERTY(VisibleAnywhere)
    FName EnvStateTagName;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBQuestEventActionDataInfo> StartEventList;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBQuestEventActionDataInfo> UpdateEventList;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBQuestEventActionDataInfo> CompleteEventList;
    
    UPROPERTY()
    FSBAliasAchievement Achievement;
    
    USBQuestTaskTypeEnvState();

};


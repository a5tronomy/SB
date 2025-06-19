#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SBAliasCondition.h"
#include "SBAliasConditionGroup.h"
#include "SBAliasWorld.h"
#include "SBAliasZoneCamp.h"
#include "SBDataNodeBase.h"
#include "SBToolDataNode_EventZoneWarp.generated.h"

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_EventZoneWarp : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasCondition EventCondition;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasConditionGroup EventConditionGroup;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasWorld World;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasZoneCamp ZoneCamp;
    
    UPROPERTY(VisibleAnywhere)
    FName TargetSpawnPoint;
    
    UPROPERTY(EditAnywhere)
    FVector WarpToLocation;
    
    UPROPERTY(EditAnywhere)
    FRotator WarpToRotation;
    
    UPROPERTY(EditAnywhere)
    bool bUseRecoveryItems;
    
    UPROPERTY(EditAnywhere)
    float WarpDelayTime;
    
    UPROPERTY(EditAnywhere)
    float FadeOutTime;
    
    UPROPERTY(EditAnywhere)
    bool bUseCampCustomTargetPoint;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    USBToolDataNode_EventZoneWarp();

};


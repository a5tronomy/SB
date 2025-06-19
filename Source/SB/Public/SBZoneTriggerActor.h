#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NavigationObjectBase.h"
#include "ESBZoneTriggerDoingType.h"
#include "ESBZoneTriggerType.h"
#include "SBActorSectorInfo.h"
#include "SBAliasConditionGroup.h"
#include "SBAliasZoneEvent.h"
#include "SBZoneTriggerActor.generated.h"

class AActor;

UCLASS()
class SB_API ASBZoneTriggerActor : public ANavigationObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool bActiveTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName TriggerAlias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* SBTriggerParentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUsePlayerCameraDirectionTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator MinCameraRotationRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator MaxCameraRotationRange;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FName ZoneAlias;
    
    UPROPERTY(VisibleAnywhere)
    bool bInOutTrigger;
    
    UPROPERTY(VisibleAnywhere)
    FVector BoxExtent;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasConditionGroup ConditionGroup;
    
    UPROPERTY(VisibleAnywhere)
    bool bIgnoreDoingCount;
    
    UPROPERTY(Transient)
    bool bSetProperty;
    
    UPROPERTY(VisibleAnywhere)
    int32 EventID;
    
    UPROPERTY(VisibleAnywhere)
    int32 LeaveEventId;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBAliasZoneEvent> SubZoneEvents;
    
    UPROPERTY(EditAnywhere)
    bool bUseCaptureParentTM;
    
    UPROPERTY(VisibleAnywhere)
    FTransform CaptureRelativeParentTM;
    
    UPROPERTY(Transient)
    FTransform RelativeParentTM;
    
    UPROPERTY(VisibleAnywhere)
    int32 InitialDoingCount;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBZoneTriggerDoingType> DoingType;
    
    UPROPERTY(VisibleAnywhere)
    float ActiveRange;
    
    UPROPERTY(Transient)
    bool bPendingCheck;
    
    UPROPERTY(Transient)
    FName BindZoneAlias;
    
    UPROPERTY(Transient)
    FName BindTriggerAlias;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBZoneTriggerType> TriggerType;
    
    UPROPERTY(Transient)
    FSBActorSectorInfo ActorSectorInfo;
    
    UPROPERTY(Transient)
    int32 PendingEventIndex;
    
    ASBZoneTriggerActor(const FObjectInitializer& ObjectInitializer);

};


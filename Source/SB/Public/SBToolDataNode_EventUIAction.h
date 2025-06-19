#pragma once
#include "CoreMinimal.h"
#include "ESBEventUIActionType.h"
#include "ESBUILogicType.h"
#include "ESBZoneEventEventorType.h"
#include "SBAliasCondition.h"
#include "SBAliasConditionGroup.h"
#include "SBDataNodeBase.h"
#include "SBTableIndexUIActionRequest.h"
#include "SBToolDataNode_EventUIAction.generated.h"

class USBTableIndexController;

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_EventUIAction : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBEventUIActionType> UIActionType;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBUILogicType> UILogicType;
    
    UPROPERTY(VisibleAnywhere)
    FSBTableIndexUIActionRequest UIActionRequestIndex;
    
    UPROPERTY(EditAnywhere)
    FSBAliasCondition EventCondition;
    
    UPROPERTY(EditAnywhere)
    FSBAliasConditionGroup EventConditionGroup;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEventEventorType> EventorType;
    
    UPROPERTY(EditAnywhere)
    FString Notify_AlbumAlias;
    
    UPROPERTY(EditAnywhere)
    FString SendUIWidgetEventString;
    
    UPROPERTY()
    float EventDelayTime;
    
    UPROPERTY()
    float EventDelayMinTime;
    
    UPROPERTY()
    float EventDelayMaxTime;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    UPROPERTY(EditAnywhere)
    bool bHUDInputLock;
    
    UPROPERTY(EditAnywhere)
    bool bGameMenuInputLock;
    
    UPROPERTY(Transient)
    USBTableIndexController* TableIndexController;
    
    USBToolDataNode_EventUIAction();

};


#pragma once
#include "CoreMinimal.h"
#include "ESBObjectState.h"
#include "SBAliasCondition.h"
#include "SBAliasConditionGroup.h"
#include "SBDataNodeBase.h"
#include "SBToolDataNode_EventLaserControl.generated.h"

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_EventLaserControl : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName LaserUniqueName;
    
    UPROPERTY(EditAnywhere)
    FName LaserGroupName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBObjectState> Activate;
    
    UPROPERTY(EditAnywhere)
    FSBAliasCondition EventCondition;
    
    UPROPERTY(EditAnywhere)
    FSBAliasConditionGroup EventConditionGroup;
    
    UPROPERTY(EditAnywhere)
    float EventDelayTime;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    USBToolDataNode_EventLaserControl();

};


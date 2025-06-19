#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ESBMoveState.h"
#include "SBBTTask_SbMountingEquipment.generated.h"

UCLASS()
class SB_API USBBTTask_SbMountingEquipment : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMoveState> MoveState;
    
    UPROPERTY(EditAnywhere)
    FString FindTargetFilterAlias;
    
    UPROPERTY(EditAnywhere)
    float MoveToDistanceOfApproach;
    
    USBBTTask_SbMountingEquipment();

};


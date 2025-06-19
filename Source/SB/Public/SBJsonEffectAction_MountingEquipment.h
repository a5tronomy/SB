#pragma once
#include "CoreMinimal.h"
#include "ESBEquipmentType.h"
#include "SBJsonEffectAction_MountingEquipment.generated.h"

USTRUCT()
struct FSBJsonEffectAction_MountingEquipment {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    TEnumAsByte<ESBEquipmentType> EquipmentType;
    
    UPROPERTY(EditAnywhere, Transient)
    FName TargetFilterAlias;
    
    UPROPERTY(EditAnywhere, Transient)
    FName CheckEquipmentAlias;
    
    SB_API FSBJsonEffectAction_MountingEquipment();
};


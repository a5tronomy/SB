#pragma once
#include "CoreMinimal.h"
#include "ESBEquipmentType.h"
#include "SBJsonEffectAction_UnmountingEquipment.generated.h"

USTRUCT()
struct FSBJsonEffectAction_UnmountingEquipment {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    TEnumAsByte<ESBEquipmentType> EquipmentType;
    
    SB_API FSBJsonEffectAction_UnmountingEquipment();
};


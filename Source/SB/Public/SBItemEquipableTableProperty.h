#pragma once
#include "CoreMinimal.h"
#include "ESBGearType.h"
#include "SBTablePropertyBase.h"
#include "SBItemEquipableTableProperty.generated.h"

USTRUCT()
struct FSBItemEquipableTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBGearType> GearType;
    
    UPROPERTY(EditAnywhere)
    FName BaseStatGroupAlias;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBItemEquipableTableProperty();
};


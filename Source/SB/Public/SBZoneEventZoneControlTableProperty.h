#pragma once
#include "CoreMinimal.h"
#include "ESBZoneEventZoneControlTarget.h"
#include "SBTablePropertyBase.h"
#include "SBZoneEventZoneControlTableProperty.generated.h"

USTRUCT()
struct FSBZoneEventZoneControlTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 ID;
    
    UPROPERTY()
    FName ZoneAlias;
    
    UPROPERTY()
    TEnumAsByte<ESBZoneEventZoneControlTarget> ControlType;
    
    UPROPERTY(EditAnywhere)
    FName EventCondition;
    
    UPROPERTY(EditAnywhere)
    FName EventConditionGroup;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBZoneEventZoneControlTableProperty();
};


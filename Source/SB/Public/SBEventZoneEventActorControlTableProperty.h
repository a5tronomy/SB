#pragma once
#include "CoreMinimal.h"
#include "ESBEventZoneEventActorControlType.h"
#include "SBTablePropertyBase.h"
#include "SBEventZoneEventActorControlTableProperty.generated.h"

USTRUCT()
struct FSBEventZoneEventActorControlTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName ZoneEventActorName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEventZoneEventActorControlType> ZoneEventActorControlType;
    
    UPROPERTY(EditAnywhere)
    float DestructionTime;
    
    UPROPERTY(EditAnywhere)
    bool bDisableDestruction;
    
    UPROPERTY(EditAnywhere)
    FName EventCondition;
    
    UPROPERTY(EditAnywhere)
    FName EventConditionGroup;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBEventZoneEventActorControlTableProperty();
};


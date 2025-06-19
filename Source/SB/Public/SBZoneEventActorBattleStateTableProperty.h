#pragma once
#include "CoreMinimal.h"
#include "ESBZoneEventActorTarget.h"
#include "SBTablePropertyBase.h"
#include "SBZoneEventActorBattleStateTableProperty.generated.h"

USTRUCT()
struct FSBZoneEventActorBattleStateTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    bool BattleState;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEventActorTarget> ToTarget;
    
    UPROPERTY(EditAnywhere)
    FName TargetTagName;
    
    UPROPERTY(EditAnywhere)
    bool UseForceFoldWeaponValue;
    
    UPROPERTY(EditAnywhere)
    bool FoldWeaponValue;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBZoneEventActorBattleStateTableProperty();
};


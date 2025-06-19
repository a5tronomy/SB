#pragma once
#include "CoreMinimal.h"
#include "ESBObjectState.h"
#include "SBTablePropertyBase.h"
#include "SBEventEffectVolumeControlTableProperty.generated.h"

USTRUCT()
struct FSBEventEffectVolumeControlTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName EffectVolume;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBObjectState> Activate;
    
    UPROPERTY(EditAnywhere)
    FName EventCondition;
    
    UPROPERTY(EditAnywhere)
    FName EventConditionGroup;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBEventEffectVolumeControlTableProperty();
};


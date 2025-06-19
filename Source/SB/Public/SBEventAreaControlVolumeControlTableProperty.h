#pragma once
#include "CoreMinimal.h"
#include "ESBObjectState.h"
#include "SBTablePropertyBase.h"
#include "SBEventAreaControlVolumeControlTableProperty.generated.h"

USTRUCT()
struct FSBEventAreaControlVolumeControlTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName AreaControlVolume1;
    
    UPROPERTY(EditAnywhere)
    FName AreaControlVolume2;
    
    UPROPERTY(EditAnywhere)
    FName AreaControlVolume3;
    
    UPROPERTY(EditAnywhere)
    FName AreaControlVolume4;
    
    UPROPERTY(EditAnywhere)
    FName AreaControlVolume5;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBObjectState> Activate;
    
    UPROPERTY(EditAnywhere)
    FName EventCondition;
    
    UPROPERTY(EditAnywhere)
    FName EventConditionGroup;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBEventAreaControlVolumeControlTableProperty();
};


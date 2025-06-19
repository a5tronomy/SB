#pragma once
#include "CoreMinimal.h"
#include "ESBObjectState.h"
#include "ESBZoneEnvControlType.h"
#include "SBTablePropertyBase.h"
#include "SBEventEnvControlTableProperty.generated.h"

USTRUCT()
struct FSBEventEnvControlTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName EnvSpawnAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEnvControlType> EnvControlType;
    
    UPROPERTY(EditAnywhere)
    FName TargetCamp;
    
    UPROPERTY(EditAnywhere)
    FName TagName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBObjectState> Activate;
    
    UPROPERTY(EditAnywhere)
    int32 AddProgressValue;
    
    UPROPERTY(EditAnywhere)
    int32 SetStateProgressValue;
    
    UPROPERTY(EditAnywhere)
    int32 ProgressSlotIndex;
    
    UPROPERTY(EditAnywhere)
    float ProgressSpeed;
    
    UPROPERTY(EditAnywhere)
    float ProgressSpeedInterpTime;
    
    UPROPERTY(EditAnywhere)
    float CurrentProgressValue;
    
    UPROPERTY(EditAnywhere)
    float StartProgressValue;
    
    UPROPERTY(EditAnywhere)
    float EndProgressValue;
    
    UPROPERTY(EditAnywhere)
    FName EventCondition;
    
    UPROPERTY(EditAnywhere)
    FName EventConditionGroup;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBEventEnvControlTableProperty();
};


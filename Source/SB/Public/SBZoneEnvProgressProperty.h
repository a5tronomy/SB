#pragma once
#include "CoreMinimal.h"
#include "ESBEnvProgressNotifyFireType.h"
#include "SBZoneEnvProgressNotifyData.h"
#include "SBZoneEnvProgressProperty.generated.h"

USTRUCT(BlueprintType)
struct FSBZoneEnvProgressProperty {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bAlwaysUpdateProgress;
    
    UPROPERTY(EditAnywhere)
    float ProgressMaxValue;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBZoneEnvProgressNotifyData> ProgressNotify;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEnvProgressNotifyFireType> NotifyFireType;
    
    SB_API FSBZoneEnvProgressProperty();
};


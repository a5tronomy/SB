#pragma once
#include "CoreMinimal.h"
#include "ESBEnvProgressNotifyFireType.h"
#include "SBZoneEnvProgressNotifyData.h"
#include "SBZoneEnvProgressInitProperty.generated.h"

USTRUCT(BlueprintType)
struct FSBZoneEnvProgressInitProperty {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float InitProgressValue;
    
    UPROPERTY(EditAnywhere)
    float StartProgressValue;
    
    UPROPERTY(EditAnywhere)
    float EndProgressValue;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEnvProgressNotifyFireType> NotifyFireType;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBZoneEnvProgressNotifyData> ProgressNotify;
    
    SB_API FSBZoneEnvProgressInitProperty();
};


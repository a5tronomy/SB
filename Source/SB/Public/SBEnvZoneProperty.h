#pragma once
#include "CoreMinimal.h"
#include "SBEnvZoneProperty.generated.h"

USTRUCT(BlueprintType)
struct FSBEnvZoneProperty {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 EnvId;
    
    UPROPERTY(EditAnywhere)
    FName EnvAlias;
    
    UPROPERTY(EditAnywhere)
    FName ZoneAlias;
    
    SB_API FSBEnvZoneProperty();
};


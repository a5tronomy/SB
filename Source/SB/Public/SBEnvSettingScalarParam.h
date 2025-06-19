#pragma once
#include "CoreMinimal.h"
#include "SBEnvSettingScalarParam.generated.h"

USTRUCT(BlueprintType)
struct FSBEnvSettingScalarParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ParamName;
    
    UPROPERTY(EditAnywhere)
    float Value;
    
    SB_API FSBEnvSettingScalarParam();
};


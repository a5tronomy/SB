#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBEnvSettingVectorParam.generated.h"

USTRUCT(BlueprintType)
struct FSBEnvSettingVectorParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ParamName;
    
    UPROPERTY(EditAnywhere)
    FLinearColor Value;
    
    SB_API FSBEnvSettingVectorParam();
};


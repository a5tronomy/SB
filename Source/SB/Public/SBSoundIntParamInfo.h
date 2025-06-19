#pragma once
#include "CoreMinimal.h"
#include "SBSoundIntParamInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBSoundIntParamInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ParamName;
    
    UPROPERTY(EditAnywhere)
    int32 ParamValue;
    
    SB_API FSBSoundIntParamInfo();
};


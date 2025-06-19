#pragma once
#include "CoreMinimal.h"
#include "SBEnvSettingTextureParam.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FSBEnvSettingTextureParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ParamName;
    
    UPROPERTY(EditAnywhere)
    UTexture* Value;
    
    SB_API FSBEnvSettingTextureParam();
};


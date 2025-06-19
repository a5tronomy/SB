#pragma once
#include "CoreMinimal.h"
#include "SBCharacterMaterialParamInfo.h"
#include "SBCharacterMaterialParamInfoList.generated.h"

USTRUCT(BlueprintType)
struct FSBCharacterMaterialParamInfoList {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FSBCharacterMaterialParamInfo> Data;
    
    SB_API FSBCharacterMaterialParamInfoList();
};


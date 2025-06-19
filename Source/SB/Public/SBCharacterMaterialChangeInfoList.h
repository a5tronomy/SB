#pragma once
#include "CoreMinimal.h"
#include "SBCharacterMaterialChangeInfo.h"
#include "SBCharacterMaterialChangeInfoList.generated.h"

USTRUCT(BlueprintType)
struct FSBCharacterMaterialChangeInfoList {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FSBCharacterMaterialChangeInfo> Data;
    
    SB_API FSBCharacterMaterialChangeInfoList();
};


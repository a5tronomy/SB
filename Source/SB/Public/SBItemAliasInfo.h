#pragma once
#include "CoreMinimal.h"
#include "SBItemAliasInfo.generated.h"

USTRUCT()
struct FSBItemAliasInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName ItemDataAlias;
    
    UPROPERTY()
    float CoolTime;
    
    UPROPERTY()
    float RemainTime;
    
    SB_API FSBItemAliasInfo();
};


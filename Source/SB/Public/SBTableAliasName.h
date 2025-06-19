#pragma once
#include "CoreMinimal.h"
#include "ESBData.h"
#include "SBTableAliasName.generated.h"

USTRUCT(BlueprintType)
struct FSBTableAliasName {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBData> TableType;
    
    SB_API FSBTableAliasName();
};


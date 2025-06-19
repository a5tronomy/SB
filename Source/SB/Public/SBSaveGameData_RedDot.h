#pragma once
#include "CoreMinimal.h"
#include "ESBUIRedDotState.h"
#include "SBSaveGameData_RedDot.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_RedDot {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName DotAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBUIRedDotState> DotState;
    
    UPROPERTY(EditAnywhere)
    FName ParentDotAlias;
    
    SB_API FSBSaveGameData_RedDot();
};


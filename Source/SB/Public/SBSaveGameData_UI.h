#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_RedDot.h"
#include "SBSaveGameData_UI.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_UI {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSBSaveGameData_RedDot> RedDotArray;
    
    SB_API FSBSaveGameData_UI();
};


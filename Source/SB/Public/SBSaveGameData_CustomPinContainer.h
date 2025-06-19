#pragma once
#include "CoreMinimal.h"
#include "SBSaveGameData_CustomPin.h"
#include "SBSaveGameData_CustomPinContainer.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_CustomPinContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName WorldAlias;
    
    UPROPERTY(EditAnywhere)
    FName AreaAlias;
    
    UPROPERTY(EditAnywhere)
    FName WorldMapAlias;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBSaveGameData_CustomPin> CustomPinList;
    
    SB_API FSBSaveGameData_CustomPinContainer();
};


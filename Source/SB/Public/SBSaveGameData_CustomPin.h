#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBSaveGameData_CustomPin.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveGameData_CustomPin {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 PinIndex;
    
    UPROPERTY(EditAnywhere)
    FVector2D PinWorldLocation;
    
    UPROPERTY(EditAnywhere)
    FName TypeTag;
    
    SB_API FSBSaveGameData_CustomPin();
};


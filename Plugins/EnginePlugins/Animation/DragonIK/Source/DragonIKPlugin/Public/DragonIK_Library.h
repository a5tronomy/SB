#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DragonIK_Library.generated.h"

UCLASS(BlueprintType)
class DRAGONIKPLUGIN_API UDragonIK_Library : public UObject {
    GENERATED_BODY()
public:
    UDragonIK_Library();

    UFUNCTION(BlueprintPure)
    static FTransform QuatLookXatLocation(const FTransform& LookAtFromTransform, const FVector& LookAtTarget);
    
    UFUNCTION(BlueprintPure)
    static FRotator LookAtVector_V2(FVector Source_Location, FVector lookAt, FVector upDirection);
    
    UFUNCTION(BlueprintPure)
    static FRotator LookAtRotation_V3(FVector Source, FVector Target, FVector UpVector);
    
    UFUNCTION(BlueprintPure)
    static FRotator CustomLookRotation(FVector lookAt, FVector upDirection);
    
};


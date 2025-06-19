#pragma once
#include "CoreMinimal.h"
#include "SBScanNavigationUnit.generated.h"

class UDecalComponent;
class UMaterialInstanceDynamic;

USTRUCT()
struct FSBScanNavigationUnit {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UDecalComponent* DecalComp;
    
    UPROPERTY()
    UMaterialInstanceDynamic* DecalMID;
    
    UPROPERTY()
    float FadeTime;
    
    UPROPERTY()
    float RemainingTime;
    
    SB_API FSBScanNavigationUnit();
};


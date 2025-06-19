#pragma once
#include "CoreMinimal.h"
#include "ESBShowEffectTableFieldType.h"
#include "SBAliasEffect.h"
#include "SBEffectTableProperty.h"
#include "SBShowKey.h"
#include "SBShowEffectKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowEffectKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FSBAliasEffect EffectAlias;
    
    UPROPERTY(EditAnywhere)
    FName CreateEffectAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowEffectTableFieldType> TableFieldType;
    
    UPROPERTY(EditAnywhere)
    FSBEffectTableProperty EffectTableProperty;
    
    UPROPERTY(EditAnywhere)
    float OverrideCalculationValue;
    
    UPROPERTY(EditAnywhere)
    bool bVisibleTargetFilter;
    
    USBShowEffectKey();

};


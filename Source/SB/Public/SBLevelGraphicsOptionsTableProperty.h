#pragma once
#include "CoreMinimal.h"
#include "ESBFSR2QualityMode.h"
#include "SBTablePropertyBase.h"
#include "SBLevelGraphicsOptionsTableProperty.generated.h"

USTRUCT()
struct FSBLevelGraphicsOptionsTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBFSR2QualityMode> FSR2QualityMode;
    
    SB_API FSBLevelGraphicsOptionsTableProperty();
};


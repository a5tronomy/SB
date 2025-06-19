#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBKeyMappingRolloverTableProperty.generated.h"

USTRUCT()
struct FSBKeyMappingRolloverTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName FirstKey;
    
    UPROPERTY(EditAnywhere)
    FName SecondKey;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBKeyMappingRolloverTableProperty();
};


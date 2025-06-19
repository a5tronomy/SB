#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBIsolatedAreaTableProperty.generated.h"

USTRUCT()
struct FSBIsolatedAreaTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    SB_API FSBIsolatedAreaTableProperty();
};


#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBMultiMapTableProperty.generated.h"

USTRUCT()
struct FSBMultiMapTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName MapName;
    
    SB_API FSBMultiMapTableProperty();
};


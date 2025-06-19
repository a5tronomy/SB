#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBSPLevelTableProperty.generated.h"

USTRUCT()
struct FSBSPLevelTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    int32 RequiredSPExp;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBSPLevelTableProperty();
};


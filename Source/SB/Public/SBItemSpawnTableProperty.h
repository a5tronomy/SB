#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBItemSpawnTableProperty.generated.h"

USTRUCT()
struct FSBItemSpawnTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName ItemAlias;
    
    UPROPERTY(EditAnywhere)
    int32 ItemCount;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBItemSpawnTableProperty();
};


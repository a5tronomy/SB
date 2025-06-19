#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBDropRateAdjustTableTableProperty.generated.h"

USTRUCT()
struct FSBDropRateAdjustTableTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    int32 RarityCommon;
    
    UPROPERTY(EditAnywhere)
    int32 RarityUncommon;
    
    UPROPERTY(EditAnywhere)
    int32 RarityRare;
    
    UPROPERTY(EditAnywhere)
    int32 RarityEpic;
    
    UPROPERTY(EditAnywhere)
    int32 RarityLegendary;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBDropRateAdjustTableTableProperty();
};


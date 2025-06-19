#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBItemReplacementTableProperty.generated.h"

USTRUCT()
struct FSBItemReplacementTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName ReplacementItemAlias;
    
    UPROPERTY(EditAnywhere)
    int32 ReplacementItemAmount;
    
    UPROPERTY(EditAnywhere)
    bool UseRewardDirectOverride;
    
    UPROPERTY(EditAnywhere)
    bool RewardDirectValue;
    
    UPROPERTY(EditAnywhere)
    bool UseRewardMustAcquisitionOverride;
    
    UPROPERTY(EditAnywhere)
    bool RewardMustAcquisition;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBItemReplacementTableProperty();
};


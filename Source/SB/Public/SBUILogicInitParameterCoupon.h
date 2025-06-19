#pragma once
#include "CoreMinimal.h"
#include "SBUILogicInitParameter.h"
#include "SBUILogicInitParameterCoupon.generated.h"

USTRUCT()
struct FSBUILogicInitParameterCoupon : public FSBUILogicInitParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString CouponEnvSpawnAlias;
    
    SB_API FSBUILogicInitParameterCoupon();
};


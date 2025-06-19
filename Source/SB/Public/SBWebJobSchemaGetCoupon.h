#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaBase.h"
#include "SBWebJobSchemaGetCoupon.generated.h"

USTRUCT()
struct FSBWebJobSchemaGetCoupon : public FSBWebJobSchemaBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString coupon_id;
    
    UPROPERTY()
    FString coupon_code;
    
    UPROPERTY()
    FString coupon_server;
    
    UPROPERTY()
    FString user_id;
    
    UPROPERTY()
    FString Platform;
    
    UPROPERTY()
    int32 response_code;
    
    SB_API FSBWebJobSchemaGetCoupon();
};


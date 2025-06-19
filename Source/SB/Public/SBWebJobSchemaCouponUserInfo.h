#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaBase.h"
#include "SBWebJobSchemaCouponUserInfo.generated.h"

USTRUCT()
struct FSBWebJobSchemaCouponUserInfo : public FSBWebJobSchemaBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString user_id;
    
    UPROPERTY()
    FString created_at;
    
    UPROPERTY()
    FString updated_at;
    
    UPROPERTY()
    int32 play_time;
    
    UPROPERTY()
    FString coupon_id;
    
    UPROPERTY()
    FString coupon_code;
    
    UPROPERTY()
    FString coupon_server;
    
    UPROPERTY()
    int32 response_code;
    
    UPROPERTY()
    FString coupon_issuance_start_time;
    
    UPROPERTY()
    FString coupon_issuance_expiration_time;
    
    UPROPERTY()
    FString coupon_limit_time;
    
    SB_API FSBWebJobSchemaCouponUserInfo();
};


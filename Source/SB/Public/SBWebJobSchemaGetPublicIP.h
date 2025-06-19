#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaBase.h"
#include "SBWebJobSchemaGetPublicIP.generated.h"

USTRUCT()
struct FSBWebJobSchemaGetPublicIP : public FSBWebJobSchemaBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString PublicIP;
    
    SB_API FSBWebJobSchemaGetPublicIP();
};


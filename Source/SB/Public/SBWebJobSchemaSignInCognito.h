#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaBase.h"
#include "SBWebJobSchemaSignInCognito.generated.h"

USTRUCT()
struct FSBWebJobSchemaSignInCognito : public FSBWebJobSchemaBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString ResultCode;
    
    UPROPERTY()
    FString PlayerName;
    
    UPROPERTY()
    FString IdToken;
    
    UPROPERTY()
    FString ErrorMessage;
    
    SB_API FSBWebJobSchemaSignInCognito();
};


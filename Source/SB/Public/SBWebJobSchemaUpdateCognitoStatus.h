#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaBase.h"
#include "SBWebJobSchemaUpdateCognitoStatus.generated.h"

USTRUCT()
struct FSBWebJobSchemaUpdateCognitoStatus : public FSBWebJobSchemaBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString ResultCode;
    
    UPROPERTY()
    FString PlayerName;
    
    UPROPERTY()
    FString IdToken;
    
    UPROPERTY()
    FString CognitoStatus;
    
    UPROPERTY()
    FString ErrorMessage;
    
    SB_API FSBWebJobSchemaUpdateCognitoStatus();
};


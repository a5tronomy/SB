#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaBase.h"
#include "SBWebJobSchemaDefeatBoss.generated.h"

USTRUCT()
struct FSBWebJobSchemaDefeatBoss : public FSBWebJobSchemaBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString PlayerName;
    
    UPROPERTY()
    FString Bossname;
    
    UPROPERTY()
    uint32 DefeatTime;
    
    UPROPERTY()
    FString Result;
    
    SB_API FSBWebJobSchemaDefeatBoss();
};


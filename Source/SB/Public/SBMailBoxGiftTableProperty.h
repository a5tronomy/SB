#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBMailBoxGiftTableProperty.generated.h"

USTRUCT()
struct FSBMailBoxGiftTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FString TitleStringKey;
    
    UPROPERTY(EditAnywhere)
    FString DescStringKey;
    
    UPROPERTY(EditAnywhere)
    FName ReceivableConditionGroup;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EnableMailBoxEnvSpawnList;
    
    UPROPERTY(EditAnywhere)
    FName EventGiftAlias;
    
    UPROPERTY(EditAnywhere)
    FString MailImagePath;
    
    SB_API FSBMailBoxGiftTableProperty();
};


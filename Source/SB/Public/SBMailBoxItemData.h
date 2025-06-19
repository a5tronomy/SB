#pragma once
#include "CoreMinimal.h"
#include "SBMailBoxItemData.generated.h"

USTRUCT(BlueprintType)
struct FSBMailBoxItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName GiftAlias;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString TitleStringKey;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bReceived;
    
    SB_API FSBMailBoxItemData();
};


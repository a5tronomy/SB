#pragma once
#include "CoreMinimal.h"
#include "ESBLocalize.h"
#include "SBUILogicTestTextCorrectTextInfo.generated.h"

USTRUCT()
struct FSBUILogicTestTextCorrectTextInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBLocalize> StringTableType;
    
    UPROPERTY(EditAnywhere)
    FString StringKey;
    
    UPROPERTY(EditAnywhere)
    FString DisplayStringKey;
    
    SB_API FSBUILogicTestTextCorrectTextInfo();
};


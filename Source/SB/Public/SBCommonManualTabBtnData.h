#pragma once
#include "CoreMinimal.h"
#include "SBCommonManualTabBtnData.generated.h"

USTRUCT(BlueprintType)
struct FSBCommonManualTabBtnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName TabAlias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName DotAlias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ParentDotAlias;
    
    SB_API FSBCommonManualTabBtnData();
};


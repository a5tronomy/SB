#pragma once
#include "CoreMinimal.h"
#include "ESBUILogicType.h"
#include "SBCommonTabBtnData.generated.h"

USTRUCT(BlueprintType)
struct FSBCommonTabBtnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESBUILogicType> UILogicType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName DotAlias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ParentDotAlias;
    
    SB_API FSBCommonTabBtnData();
};


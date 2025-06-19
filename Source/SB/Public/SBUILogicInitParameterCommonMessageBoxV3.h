#pragma once
#include "CoreMinimal.h"
#include "ESBUICommonMessageBoxButtonType.h"
#include "SBUILogicInitParameter.h"
#include "SBUILogicInitParameterCommonMessageBoxV3.generated.h"

USTRUCT()
struct FSBUILogicInitParameterCommonMessageBoxV3 : public FSBUILogicInitParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    FText title;
    
    UPROPERTY()
    FText Desc;
    
    UPROPERTY()
    FString TitleTID;
    
    UPROPERTY()
    FString DescTID;
    
    UPROPERTY()
    bool bEnableEmptyInputAction;
    
    UPROPERTY()
    TArray<FString> EffectAliasList;
    
    UPROPERTY()
    ESBUICommonMessageBoxButtonType ButtonType;
    
    SB_API FSBUILogicInitParameterCommonMessageBoxV3();
};


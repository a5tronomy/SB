#pragma once
#include "CoreMinimal.h"
#include "SBUILogicInitParameter.h"
#include "SBUILogicInitParameterNikkeLostArticlePopup.generated.h"

USTRUCT(BlueprintType)
struct FSBUILogicInitParameterNikkeLostArticlePopup : public FSBUILogicInitParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString NikkeLostArticleAlias;
    
    SB_API FSBUILogicInitParameterNikkeLostArticlePopup();
};


#pragma once
#include "CoreMinimal.h"
#include "SBUILogicInitParameterGuideVideoData.generated.h"

USTRUCT(BlueprintType)
struct FSBUILogicInitParameterGuideVideoData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString TitleKey;
    
    UPROPERTY(BlueprintReadOnly)
    FString DescKey;
    
    UPROPERTY(BlueprintReadOnly)
    FString MovieBKAssetPath;
    
    UPROPERTY(BlueprintReadOnly)
    FString ImageAssetPath;
    
    SB_API FSBUILogicInitParameterGuideVideoData();
};


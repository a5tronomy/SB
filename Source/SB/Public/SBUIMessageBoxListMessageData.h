#pragma once
#include "CoreMinimal.h"
#include "ESBUICommonMessageBoxButtonType.h"
#include "ESBUIMessageBoxAppearanceType.h"
#include "SBUIMessageBoxListMessageData.generated.h"

USTRUCT(BlueprintType)
struct FSBUIMessageBoxListMessageData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString title;
    
    UPROPERTY()
    FString Description;
    
    UPROPERTY()
    FText TitleText;
    
    UPROPERTY()
    FText DescriptionText;
    
    UPROPERTY()
    ESBUICommonMessageBoxButtonType ButtonType;
    
    UPROPERTY()
    ESBUIMessageBoxAppearanceType AppearanceType;
    
    SB_API FSBUIMessageBoxListMessageData();
};


#pragma once
#include "CoreMinimal.h"
#include "ESBUIGameMenuType.h"
#include "ESBUILogicType.h"
#include "SBTablePropertyBase.h"
#include "SBUITutorialTableProperty.generated.h"

USTRUCT()
struct FSBUITutorialTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FString TitleStringKey;
    
    UPROPERTY(EditAnywhere)
    FString DescStringKey;
    
    UPROPERTY(EditAnywhere)
    bool bBlockNavigation;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EnableInputAliases;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> BlockingWidgetEventNameList;
    
    UPROPERTY(EditAnywhere)
    FName NextTutorialAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBUILogicType> OpenUILogicType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBUIGameMenuType> OpenUIType;
    
    UPROPERTY(EditAnywhere)
    FName StartConditionGroup;
    
    UPROPERTY(EditAnywhere)
    FName CompleteWidgetEventName;
    
    UPROPERTY(EditAnywhere)
    FName CompleteAchievementAlias;
    
    SB_API FSBUITutorialTableProperty();
};


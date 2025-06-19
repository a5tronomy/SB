#pragma once
#include "CoreMinimal.h"
#include "ESBIndicatorButtonType.h"
#include "ESBUIIndicatorHiddenChannel.h"
#include "ESBUIIndicatorLockChannel.h"
#include "ESBUILogicType.h"
#include "SBIndicatorButtonData.generated.h"

USTRUCT(BlueprintType)
struct FSBIndicatorButtonData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ESBIndicatorButtonType Type;
    
    UPROPERTY(EditAnywhere)
    FText text;
    
    UPROPERTY(EditAnywhere)
    bool IsClickable;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBUILogicType> ButtonTargetLogicType;
    
    UPROPERTY(EditAnywhere)
    FName ResourceAction;
    
    UPROPERTY(EditAnywhere)
    FName ResourceAction2;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ResourceActionArray;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBUIIndicatorLockChannel> LockChannel;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBUIIndicatorHiddenChannel> HiddenChannel;
    
    SB_API FSBIndicatorButtonData();
};


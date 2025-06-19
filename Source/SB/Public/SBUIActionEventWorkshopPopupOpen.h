#pragma once
#include "CoreMinimal.h"
#include "ESBUIWorkshopPopupType.h"
#include "SBUIActionEventBase.h"
#include "SBUIActionEventWorkshopPopupOpen.generated.h"

USTRUCT()
struct FSBUIActionEventWorkshopPopupOpen : public FSBUIActionEventBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    ESBUIWorkshopPopupType PopupType;
    
    UPROPERTY()
    FText TextData;
    
    UPROPERTY()
    FString IconPath;
    
    UPROPERTY()
    int32 PrevValue1;
    
    UPROPERTY()
    int32 NewValue1;
    
    UPROPERTY()
    int32 PrevValue2;
    
    UPROPERTY()
    int32 NewValue2;
    
    SB_API FSBUIActionEventWorkshopPopupOpen();
};


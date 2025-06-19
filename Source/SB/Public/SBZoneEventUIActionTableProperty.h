#pragma once
#include "CoreMinimal.h"
#include "ESBEventUIActionType.h"
#include "ESBUILogicType.h"
#include "ESBZoneEventEventorType.h"
#include "SBTablePropertyBase.h"
#include "SBZoneEventUIActionTableProperty.generated.h"

USTRUCT()
struct FSBZoneEventUIActionTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEventUIActionType> UIActionType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBUILogicType> UILogicType;
    
    UPROPERTY(EditAnywhere)
    FName UIActionRequestIndex;
    
    UPROPERTY(EditAnywhere)
    float DrawDuration;
    
    UPROPERTY(EditAnywhere)
    FString CustomStrValue1;
    
    UPROPERTY(EditAnywhere)
    FString CustomStrValue2;
    
    UPROPERTY(EditAnywhere)
    FName EventCondition;
    
    UPROPERTY(EditAnywhere)
    FName EventConditionGroup;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEventEventorType> EventorType;
    
    UPROPERTY(EditAnywhere)
    bool bHUDInputLock;
    
    UPROPERTY(EditAnywhere)
    bool bGameMenuInputLock;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBZoneEventUIActionTableProperty();
};


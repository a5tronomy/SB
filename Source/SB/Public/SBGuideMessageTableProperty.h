#pragma once
#include "CoreMinimal.h"
#include "ESBActorCondition.h"
#include "ESBFishingModeType.h"
#include "ESBGuideCompleteType.h"
#include "ESBGuideStartType.h"
#include "ESBSkillCommandState.h"
#include "ESBUIGuideMessageDisplayType.h"
#include "ESBUIGuideMessageType.h"
#include "SBTablePropertyBase.h"
#include "SBGuideMessageTableProperty.generated.h"

USTRUCT()
struct FSBGuideMessageTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    int32 Priority;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBUIGuideMessageType> MessageType;
    
    UPROPERTY(EditAnywhere)
    FString StringKey;
    
    UPROPERTY(EditAnywhere)
    float DisplayTime;
    
    UPROPERTY(EditAnywhere)
    float DisplayPositionX;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBUIGuideMessageDisplayType> DisplayType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBGuideStartType> GuideStartType;
    
    UPROPERTY(EditAnywhere)
    int32 StartValue;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBGuideCompleteType> GuideCompleteType;
    
    UPROPERTY(EditAnywhere)
    int32 CompleteValue;
    
    UPROPERTY(EditAnywhere)
    bool CustomBool;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> CustomAliases;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkillCommandState> Command;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBActorCondition> ActorCondition;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBFishingModeType> FishingMode;
    
    UPROPERTY(EditAnywhere)
    FName GuideCompleteAchievementAlias;
    
    UPROPERTY(EditAnywhere)
    FName GuideTimeOutAchievementAlias;
    
    UPROPERTY(EditAnywhere)
    FName GuideSkipAchievementAlias;
    
    UPROPERTY(EditAnywhere)
    FName StartConditionGroup;
    
    UPROPERTY(EditAnywhere)
    FName CancelConditionGroup;
    
    UPROPERTY(EditAnywhere)
    FName UIActionRequestGroup;
    
    UPROPERTY(EditAnywhere)
    bool bAffectedByVisibleOption;
    
    UPROPERTY(EditAnywhere)
    int32 ForceSlotIndex;
    
    UPROPERTY(EditAnywhere)
    bool DontShowInNewGamePlus;
    
    SB_API FSBGuideMessageTableProperty();
};


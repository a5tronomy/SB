#pragma once
#include "CoreMinimal.h"
#include "ESBGameRuleType.h"
#include "SBTablePropertyBase.h"
#include "SBMultiPlayRuleTableProperty.generated.h"

USTRUCT()
struct FSBMultiPlayRuleTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBGameRuleType> GameRuleType;
    
    UPROPERTY(EditAnywhere)
    bool bRandom;
    
    UPROPERTY(EditAnywhere)
    FName TargetQuest;
    
    UPROPERTY(EditAnywhere)
    FString Name;
    
    UPROPERTY(EditAnywhere)
    FString DescContent;
    
    UPROPERTY(EditAnywhere)
    FString DescFunction;
    
    UPROPERTY(EditAnywhere)
    FString ImageAsset2D;
    
    UPROPERTY(EditAnywhere)
    FName UnlockAchievement;
    
    UPROPERTY(EditAnywhere)
    FName Level;
    
    UPROPERTY(EditAnywhere)
    FName RewardItemAlias;
    
    UPROPERTY(EditAnywhere)
    int32 RewardItemCount;
    
    UPROPERTY(EditAnywhere)
    int32 RewardBonusRate;
    
    UPROPERTY(EditAnywhere)
    int32 WaitTimeBeforeStarting;
    
    UPROPERTY(EditAnywhere)
    int32 Duration;
    
    UPROPERTY(EditAnywhere)
    int32 WaitTimeBeforeReturn;
    
    UPROPERTY(EditAnywhere)
    int32 RespawnTime;
    
    UPROPERTY(EditAnywhere)
    int32 LifeCount;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> StartEffectAlias;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ComaEffectAlias;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> InteractionEffectAlias;
    
    UPROPERTY(EditAnywhere)
    float ZoneEventFirstTimer1;
    
    UPROPERTY(EditAnywhere)
    float ZoneEventIntervalTimer1;
    
    UPROPERTY(EditAnywhere)
    FName ZoneEventAlias1;
    
    UPROPERTY(EditAnywhere)
    float ZoneEventFirstTimer2;
    
    UPROPERTY(EditAnywhere)
    float ZoneEventIntervalTimer2;
    
    UPROPERTY(EditAnywhere)
    FName ZoneEventAlias2;
    
    UPROPERTY(EditAnywhere)
    float ZoneEventFirstTimer3;
    
    UPROPERTY(EditAnywhere)
    float ZoneEventIntervalTimer3;
    
    UPROPERTY(EditAnywhere)
    FName ZoneEventAlias3;
    
    SB_API FSBMultiPlayRuleTableProperty();
};


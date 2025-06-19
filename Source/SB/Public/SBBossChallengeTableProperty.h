#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBBossChallengeTableProperty.generated.h"

USTRUCT()
struct FSBBossChallengeTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName StageGroup;
    
    UPROPERTY(EditAnywhere)
    int32 StagePriority;
    
    UPROPERTY(EditAnywhere)
    FName ZoneAlias;
    
    UPROPERTY(EditAnywhere)
    FName SpawnPointAlias;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> UnlockAchievementArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> UnlockEntitlementArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EnemyEventSpawnList;
    
    UPROPERTY(EditAnywhere)
    FName MaximumPresetAlias;
    
    UPROPERTY(EditAnywhere)
    FName MaximumNewGamePlusPresetAlias;
    
    UPROPERTY(EditAnywhere)
    FName MinimumPresetAlias;
    
    UPROPERTY(EditAnywhere)
    FName MaximumPresetAliasStoryMode;
    
    UPROPERTY(EditAnywhere)
    FName MaximumNewGamePlusPresetAliasStoryMode;
    
    UPROPERTY(EditAnywhere)
    FName MinimumPresetAliasStoryMode;
    
    UPROPERTY(EditAnywhere)
    FName MaximumPresetAliasHardMode;
    
    UPROPERTY(EditAnywhere)
    FName MaximumNewGamePlusPresetAliasHardMode;
    
    UPROPERTY(EditAnywhere)
    FName MinimumPresetAliasHardMode;
    
    UPROPERTY(EditAnywhere)
    FString BossStringKey;
    
    UPROPERTY(EditAnywhere)
    FString RegionStringKey;
    
    UPROPERTY(EditAnywhere)
    FString ThumbnailImagePath;
    
    UPROPERTY(EditAnywhere)
    FString ThumbnailIconImagePath;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> ResourceCacheCharacterAliases;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBBossChallengeTableProperty();
};


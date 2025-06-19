#pragma once
#include "CoreMinimal.h"
#include "ESBItemOverrideSaveType.h"
#include "SBItemSpawnCasterInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBItemSpawnCasterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ZoneEnvAlias;
    
    UPROPERTY(EditAnywhere)
    FName CharacterAlias;
    
    UPROPERTY(EditAnywhere)
    FName CharacterEventSpawnAlias;
    
    UPROPERTY(EditAnywhere)
    FName ZoneEventActorTableAlias;
    
    UPROPERTY(EditAnywhere)
    FName ZoneEventActorName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBItemOverrideSaveType> RewardOverrideSaveType;
    
    SB_API FSBItemSpawnCasterInfo();
};


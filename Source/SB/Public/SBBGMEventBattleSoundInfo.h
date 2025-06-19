#pragma once
#include "CoreMinimal.h"
#include "ESBEventBattleConditionType.h"
#include "SBAliasCharacter.h"
#include "SBBGMSoundInfoV2.h"
#include "SBBGMEventBattleSoundInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBBGMEventBattleSoundInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName EventBattleAlias;
    
    UPROPERTY(EditAnywhere)
    ESBEventBattleConditionType ConditionType;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> TargetRankCondition;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBAliasCharacter> TargetCharacterAlias;
    
    UPROPERTY(EditAnywhere)
    FSBBGMSoundInfoV2 BGMInfo;
    
    SB_API FSBBGMEventBattleSoundInfo();
};


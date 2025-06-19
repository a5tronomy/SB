#pragma once
#include "CoreMinimal.h"
#include "SBSaveOptionData_BossChallengeDiary.h"
#include "SBSaveOptionData_BossChallengeStage.generated.h"

USTRUCT(BlueprintType)
struct FSBSaveOptionData_BossChallengeStage {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName StageAlias;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBSaveOptionData_BossChallengeDiary> BestRecordArray;
    
    UPROPERTY(EditAnywhere)
    bool bUnlock;
    
    UPROPERTY(EditAnywhere)
    bool bNoticeUnlock;
    
    SB_API FSBSaveOptionData_BossChallengeStage();
};


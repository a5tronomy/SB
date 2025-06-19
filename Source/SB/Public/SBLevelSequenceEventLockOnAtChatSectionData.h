#pragma once
#include "CoreMinimal.h"
#include "SBLevelSequenceEventLockOnAtChatSectionData.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceEventLockOnAtChatSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName CharacterTag;
    
    UPROPERTY(EditAnywhere)
    bool bUnlockInOutRange;
    
    UPROPERTY(EditAnywhere)
    bool bDisableLockOnCam;
    
    UPROPERTY(EditAnywhere)
    bool bForceUnlock;
    
    SB_API FSBLevelSequenceEventLockOnAtChatSectionData();
};


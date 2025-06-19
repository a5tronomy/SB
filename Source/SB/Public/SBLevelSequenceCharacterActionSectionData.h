#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ESBLevelSequenceCharacterActionType.h"
#include "SBLevelSequenceCharacterActionSectionData.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceCharacterActionSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBLevelSequenceCharacterActionType> ActionType;
    
    UPROPERTY(EditAnywhere)
    bool bEveryUpdate;
    
    UPROPERTY(EditAnywhere)
    bool bUsePlayableLevelSeq;
    
    UPROPERTY(EditAnywhere)
    bool bPlayableLevelSeqValue;
    
    UPROPERTY(EditAnywhere)
    bool bUseChangeMovement;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMovementMode> ChangeMovement;
    
    UPROPERTY(EditAnywhere)
    bool bUseSetDisableRootClothCollision;
    
    UPROPERTY(EditAnywhere)
    bool bDisableRootClothCollision;
    
    UPROPERTY(EditAnywhere)
    bool bUseLockCharacterHiddenInGame;
    
    UPROPERTY(EditAnywhere)
    bool bLockCharacterHiddenInGame;
    
    UPROPERTY(EditAnywhere)
    float ValidLandingLocationZOffset;
    
    UPROPERTY(EditAnywhere)
    bool bUseValidLandgMovement;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMovementMode> ValidLandingMovement;
    
    UPROPERTY(EditAnywhere)
    bool bUseFinishMovement;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMovementMode> FinishMovement;
    
    UPROPERTY(EditAnywhere)
    bool bUseFinishStopActiveMovement;
    
    UPROPERTY(EditAnywhere)
    FName NotifyShowEventTagName;
    
    UPROPERTY(EditAnywhere)
    FName NotifyShowCustomNameValue;
    
    SB_API FSBLevelSequenceCharacterActionSectionData();
};


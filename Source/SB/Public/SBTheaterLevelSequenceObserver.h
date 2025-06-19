#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "SBTheaterLevelSequenceObserver.generated.h"

class ALevelSequenceActor;
class ULevelSequence;
class ULevelSequencePlayer;

UCLASS()
class SB_API USBTheaterLevelSequenceObserver : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName SequenceName;
    
    UPROPERTY()
    TWeakObjectPtr<ULevelSequence> Sequence;
    
    UPROPERTY()
    TWeakObjectPtr<ULevelSequencePlayer> Player;
    
    UPROPERTY()
    TWeakObjectPtr<ALevelSequenceActor> SequenceActor;
    
    UPROPERTY()
    TArray<FName> AttachActorTagNames;
    
    UPROPERTY()
    bool RequireRelease;
    
    UPROPERTY()
    bool fireNotify;
    
    UPROPERTY()
    int32 TakeDataUID;
    
    UPROPERTY()
    FGuid TakeGuid;
    
    UPROPERTY()
    FGuid SceneGuid;
    
    UPROPERTY()
    bool bStopEndFrame;
    
    USBTheaterLevelSequenceObserver();

private:
    UFUNCTION()
    void OnFinishLevelSequence();
    
};


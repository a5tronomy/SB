#pragma once
#include "CoreMinimal.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "Templates/SubclassOf.h"
#include "SBInteractionNode_ActionPlayLevelSeq.generated.h"

class ALevelSequenceActor;
class ULevelSequence;

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_ActionPlayLevelSeq : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName LevelSequenceName;
    
    UPROPERTY(VisibleAnywhere)
    TSoftObjectPtr<ULevelSequence> LevelSequence;
    
    UPROPERTY(VisibleAnywhere)
    TSubclassOf<ALevelSequenceActor> SequenceActorTemplate;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> AttachTagNames;
    
    UPROPERTY(VisibleAnywhere)
    float DelayTime;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBInteractionExecPinInfo> RetrunValue;
    
    USBInteractionNode_ActionPlayLevelSeq();

};


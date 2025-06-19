#pragma once
#include "CoreMinimal.h"
#include "ESBLevelSequenceContentsType.h"
#include "ESBZoneEventEventorType.h"
#include "ESBZoneEventLevelSeqType.h"
#include "SBAliasCondition.h"
#include "SBAliasConditionGroup.h"
#include "SBDataNodeBase.h"
#include "Templates/SubclassOf.h"
#include "SBToolDataNode_EventLevelSequence.generated.h"

class ALevelSequenceActor;
class ULevelSequence;

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_EventLevelSequence : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FString LevelSeqAlias;
    
    UPROPERTY(VisibleAnywhere)
    TSoftObjectPtr<ULevelSequence> LevelSeq;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ALevelSequenceActor> SequenceActorTemplate;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> AttachTagNames;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBZoneEventLevelSeqType> Type;
    
    UPROPERTY(EditAnywhere)
    FSBAliasCondition EventCondition;
    
    UPROPERTY(EditAnywhere)
    FSBAliasConditionGroup EventConditionGroup;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEventEventorType> EventorType;
    
    UPROPERTY()
    float EventDelayTime;
    
    UPROPERTY()
    float EventDelayMinTime;
    
    UPROPERTY()
    float EventDelayMaxTime;
    
    UPROPERTY(EditAnywhere)
    bool StartMovementNone;
    
    UPROPERTY(EditAnywhere)
    bool StopEndFrame;
    
    UPROPERTY(EditAnywhere)
    bool bDontStopResetZone;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBLevelSequenceContentsType> LevelSequenceContentsType;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    UPROPERTY(VisibleAnywhere)
    bool UseRandomSequence;
    
    UPROPERTY(EditAnywhere)
    bool bPendingTheaterByNiike;
    
    UPROPERTY()
    TArray<FName> RandomLevelSeqAliases;
    
    UPROPERTY(VisibleAnywhere)
    TArray<TSoftObjectPtr<ULevelSequence>> RandomLevelSeqs;
    
    USBToolDataNode_EventLevelSequence();

};


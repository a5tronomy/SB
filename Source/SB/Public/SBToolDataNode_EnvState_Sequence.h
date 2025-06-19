#pragma once
#include "CoreMinimal.h"
#include "ESBSequencePlayTransformType.h"
#include "SBDataNodeBase.h"
#include "SBZoneEnvToTargetStateInfo.h"
#include "Templates/SubclassOf.h"
#include "SBToolDataNode_EnvState_Sequence.generated.h"

class ALevelSequenceActor;
class ULevelSequence;
class USBTheaterData;

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_EnvState_Sequence : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY()
    TSoftObjectPtr<USBTheaterData> TransitOut_TheaterData;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<ULevelSequence> TransitOut_LevelSequence;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ALevelSequenceActor> TransitOut_SequenceActorTemplate;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> TransitOut_AttachTagNames;
    
    UPROPERTY()
    TSoftObjectPtr<USBTheaterData> Active_TheaterData;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<ULevelSequence> Active_LevelSequence;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ALevelSequenceActor> Active_SequenceActorTemplate;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> Active_AttachTagNames;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<ULevelSequence> Loop_LevelSequence;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ALevelSequenceActor> Loop_SequenceActorTemplate;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> Loop_AttachTagNames;
    
    UPROPERTY(EditAnywhere)
    bool bDontStopLoopSequenceAtDestory;
    
    UPROPERTY(EditAnywhere)
    bool bWhenChangeStaeLoopSequenceStop;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSequencePlayTransformType> PlayTransformOwnerType;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBZoneEnvToTargetStateInfo> ToTargetStateInfoList;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    USBToolDataNode_EnvState_Sequence();

};


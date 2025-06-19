#pragma once
#include "CoreMinimal.h"
#include "ESBSequencePlayTransformCastType.h"
#include "ESBSequencePlayTransformType.h"
#include "SBAlias.h"
#include "SBAliasSpawnPoint.h"
#include "SBAliasTheaterSelectData.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_ActionTheater.generated.h"

class ULevelSequence;
class USBTheaterData;

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_ActionTheater : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSBAlias RefTableAlias;
    
    UPROPERTY(VisibleAnywhere)
    TSoftObjectPtr<USBTheaterData> TheaterAsset;
    
    UPROPERTY(VisibleAnywhere)
    TSoftObjectPtr<ULevelSequence> SubtitleOnlyLevelSequence;
    
    UPROPERTY(VisibleAnywhere)
    int32 TheaterPriority;
    
    UPROPERTY(VisibleAnywhere)
    float DelayTime;
    
    UPROPERTY(VisibleAnywhere)
    bool bSkipTheater;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBSequencePlayTransformType> SequencePlayTransformType;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBSequencePlayTransformCastType> SequencePlayTransformCastType;
    
    UPROPERTY(VisibleAnywhere)
    bool bCompletePendingLevelStream;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FSBInteractionExecPinInfo> RetrunValue;
    
    UPROPERTY(EditAnywhere)
    bool bFadeInEndTheater;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBAliasTheaterSelectData> TheaterSelectDataList;
    
    UPROPERTY(VisibleAnywhere)
    bool bCheckUIDGreater;
    
    UPROPERTY(VisibleAnywhere)
    float CompleteTheaterPlayDuration;
    
    UPROPERTY()
    FSBAliasSpawnPoint EventSpawnAlias;
    
    USBInteractionNode_ActionTheater();

};


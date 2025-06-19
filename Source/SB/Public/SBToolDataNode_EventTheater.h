#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESBMeshClipingApplyType.h"
#include "ESBSequenceBindTargetType.h"
#include "ESBSequencePlayTransformCastType.h"
#include "ESBSequencePlayTransformType.h"
#include "ESBZoneEventTheaterType.h"
#include "SBAliasCondition.h"
#include "SBAliasConditionGroup.h"
#include "SBAliasSpawnPoint.h"
#include "SBAliasTheaterSelectData.h"
#include "SBDataNodeBase.h"
#include "SBToolDataNode_EventTheater.generated.h"

class ULevelSequence;
class USBTheaterData;

UCLASS(EditInlineNew)
class SB_API USBToolDataNode_EventTheater : public USBDataNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Alias;
    
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(VisibleAnywhere)
    TSoftObjectPtr<USBTheaterData> Theater;
    
    UPROPERTY(VisibleAnywhere)
    TSoftObjectPtr<ULevelSequence> LevelSeq;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBZoneEventTheaterType> ControlType;
    
    UPROPERTY(EditAnywhere)
    FSBAliasCondition EventCondition;
    
    UPROPERTY(EditAnywhere)
    FSBAliasConditionGroup EventConditionGroup;
    
    UPROPERTY()
    float EventDelayTime;
    
    UPROPERTY()
    float EventDelayMinTime;
    
    UPROPERTY()
    float EventDelayMaxTime;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSequencePlayTransformType> SequencePlayTransformType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSequencePlayTransformCastType> SequencePlayTrasnformCastType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSequenceBindTargetType> BindTargetType;
    
    UPROPERTY(EditAnywhere)
    float BindTargetStartFadeOutKeepDuration;
    
    UPROPERTY(EditAnywhere)
    float BindTargetStartFadeInDuration;
    
    UPROPERTY(EditAnywhere)
    bool bSkipFadeOutAtBindTargeType;
    
    UPROPERTY(EditAnywhere)
    FSBAliasSpawnPoint EventSpawnAlias;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> BindZoneEnvAlias;
    
    UPROPERTY(EditAnywhere)
    int32 Priority;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    UPROPERTY(VisibleAnywhere)
    FString TheaterAlias;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBAliasTheaterSelectData> TheaterSelectDataList;
    
    UPROPERTY(EditAnywhere)
    bool bSkipAlreadyPlaySameTheater;
    
    UPROPERTY(EditAnywhere)
    bool bUseStartFadeInScreenForLeveStream;
    
    UPROPERTY(EditAnywhere)
    float StartFadeInDuration;
    
    UPROPERTY(EditAnywhere)
    float StartFadeInTime;
    
    UPROPERTY(EditAnywhere)
    bool bFirstTimeIntro;
    
    UPROPERTY(EditAnywhere)
    bool bUseEndFadeInScreenForLeveStream;
    
    UPROPERTY(EditAnywhere)
    bool bCancelWhenPlayerWarp;
    
    UPROPERTY(EditAnywhere)
    bool bBlockInputByBindSequence;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMeshClipingApplyType> MeshClipingApplyType1;
    
    UPROPERTY(EditAnywhere)
    FVector MeshClipingLocation1;
    
    UPROPERTY(EditAnywhere)
    FRotator MeshClipingRotation1;
    
    UPROPERTY(EditAnywhere)
    FVector MeshClipingScale1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMeshClipingApplyType> MeshClipingApplyType2;
    
    UPROPERTY(EditAnywhere)
    FVector MeshClipingLocation2;
    
    UPROPERTY(EditAnywhere)
    FRotator MeshClipingRotation2;
    
    UPROPERTY(EditAnywhere)
    FVector MeshClipingScale2;
    
    USBToolDataNode_EventTheater();

};


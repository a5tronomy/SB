#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESBMeshClipingApplyType.h"
#include "ESBSequenceBindTargetType.h"
#include "ESBSequencePlayTransformCastType.h"
#include "ESBSequencePlayTransformType.h"
#include "ESBZoneEventTheaterType.h"
#include "SBTablePropertyBase.h"
#include "SBZoneEventTheaterTableProperty.generated.h"

USTRUCT()
struct FSBZoneEventTheaterTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName TheaterAlias;
    
    UPROPERTY(EditAnywhere)
    FString TheaterAssetPath;
    
    UPROPERTY(EditAnywhere)
    FString LevelSeqAssetPath;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEventTheaterType> ControlType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSequencePlayTransformType> SequencePlayTransformType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSequencePlayTransformCastType> SequencePlayTransformCastType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSequenceBindTargetType> BindTargetType;
    
    UPROPERTY(EditAnywhere)
    float BindTargetStartFadeOutKeepDuration;
    
    UPROPERTY(EditAnywhere)
    float BindTargetStartFadeInDuration;
    
    UPROPERTY(EditAnywhere)
    bool bSkipFadeOutAtBindTargeType;
    
    UPROPERTY(EditAnywhere)
    FName EventSpawnAlias;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> BindZoneEnvAlias;
    
    UPROPERTY(EditAnywhere)
    int32 Priority;
    
    UPROPERTY(EditAnywhere)
    FName EventCondition;
    
    UPROPERTY(EditAnywhere)
    FName EventConditionGroup;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> TheaterSelectDataList;
    
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
    
    UPROPERTY(EditAnywhere)
    bool bCancelWhenPlayerWarp;
    
    UPROPERTY(EditAnywhere)
    bool bBlockInputByBindSequence;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBZoneEventTheaterTableProperty();
};


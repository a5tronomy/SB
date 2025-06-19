#pragma once
#include "CoreMinimal.h"
#include "ESBLevelSequenceContentsType.h"
#include "ESBZoneEventEventorType.h"
#include "ESBZoneEventLevelSeqType.h"
#include "SBTablePropertyBase.h"
#include "SBZoneEventLevelSeqTableProperty.generated.h"

USTRUCT()
struct FSBZoneEventLevelSeqTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName LevelSeqAlias;
    
    UPROPERTY(EditAnywhere)
    FString LevelSequencePath;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> AttachTagNames;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEventLevelSeqType> Type;
    
    UPROPERTY(EditAnywhere)
    bool bStopEndFrame;
    
    UPROPERTY(EditAnywhere)
    FString SequenceTemplatePath;
    
    UPROPERTY(EditAnywhere)
    FName EventCondition;
    
    UPROPERTY(EditAnywhere)
    FName EventConditionGroup;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEventEventorType> EventorType;
    
    UPROPERTY(EditAnywhere)
    bool bDontStopResetZone;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBLevelSequenceContentsType> LevelSequenceContentsType;
    
    UPROPERTY(EditAnywhere)
    bool StartMovementNone;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    UPROPERTY(EditAnywhere)
    bool UseRandomSequence;
    
    UPROPERTY(EditAnywhere)
    bool bPendingTheaterByNiike;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> RandomLevelSequencePaths;
    
    SB_API FSBZoneEventLevelSeqTableProperty();
};


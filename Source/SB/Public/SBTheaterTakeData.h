#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBLevelAliasLevelSequence.h"
#include "SBLevelSequenceBookmarkAlias.h"
#include "SBTheaterLevelSequenceSkipFadeParam.h"
#include "Templates/SubclassOf.h"
#include "SBTheaterTakeData.generated.h"

class ALevelSequenceActor;
class ULevelSequence;

UCLASS(DefaultToInstanced, EditInlineNew)
class SB_API USBTheaterTakeData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 TakeUID;
    
    UPROPERTY(VisibleAnywhere)
    TArray<int32> NextTakeUIDs;
    
    UPROPERTY(VisibleAnywhere)
    bool bTransitTake;
    
    UPROPERTY(EditAnywhere)
    FName TakeAlias;
    
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceBookmarkAlias BookmarkAlias;
    
    UPROPERTY(EditAnywhere)
    FName FinishEvent;
    
    UPROPERTY(EditAnywhere)
    bool bSkipAllow;
    
    UPROPERTY(EditAnywhere)
    int32 SkipTakeIndexWhenCompleteTheater;
    
    UPROPERTY(EditAnywhere)
    bool bSubtitleJumpAllow;
    
    UPROPERTY(EditAnywhere)
    bool bSkipBlockWhenFirstPlay;
    
    UPROPERTY(EditAnywhere)
    bool bSkipAllowNewGamePlus;
    
    UPROPERTY(EditAnywhere)
    bool bSkipAllowClearSB;
    
    UPROPERTY(EditAnywhere)
    bool bSkipAllowBossChallenge;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreSkipComplete;
    
    UPROPERTY(EditAnywhere)
    bool bBlockStreamingVolumeUpdate;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> AttachActorTagNames;
    
    UPROPERTY(EditAnywhere)
    FSBLevelAliasLevelSequence LevelActorName;
    
    UPROPERTY(EditAnywhere)
    ULevelSequence* TemplateSequence;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, ULevelSequence*> CultureTemplateSequenceMap;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ALevelSequenceActor> TemplateSettingActor;
    
    UPROPERTY(EditAnywhere)
    bool bStartMovementNone;
    
    UPROPERTY(EditAnywhere)
    bool bEnablePhysicsReset;
    
    UPROPERTY(EditAnywhere)
    bool bForcePhysicsReset;
    
    UPROPERTY(EditAnywhere)
    bool bDroneControlAI;
    
    UPROPERTY(EditAnywhere)
    bool bDroneGunUnequip;
    
    UPROPERTY(EditAnywhere)
    bool bClearEventMove;
    
    UPROPERTY(EditAnywhere)
    bool bStopEndFrame;
    
    UPROPERTY(EditAnywhere)
    bool bSubtitleForceVisible;
    
    UPROPERTY(EditAnywhere)
    bool bAllowSkipEndSubtitle;
    
    UPROPERTY(EditAnywhere)
    FSBTheaterLevelSequenceSkipFadeParam FinishFade;
    
    UPROPERTY(EditAnywhere)
    bool bControlVisibleActor;
    
    UPROPERTY(EditAnywhere)
    bool bZoneEventObserve;
    
    UPROPERTY(EditAnywhere)
    bool bZoneEventCheckFinish;
    
    UPROPERTY(EditAnywhere)
    int32 FinishAttachActorDelayFrameCount;
    
    UPROPERTY(EditAnywhere)
    int32 LastTakeFinishAttachActorDelayFrameCount;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreMatineeSlomoRestore;
    
    UPROPERTY(EditAnywhere)
    bool bAllowCropAspectRatio;
    
    UPROPERTY(EditAnywhere)
    bool bCropAspectRatioViewport;
    
    UPROPERTY(EditAnywhere)
    float CropAspectRatioViewportLess;
    
    UPROPERTY(EditAnywhere)
    bool FilmbackSensorHeightVerticalScaling;
    
    USBTheaterTakeData();

};


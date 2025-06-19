#pragma once
#include "CoreMinimal.h"
#include "ESBInteractionCancelFilterType.h"
#include "ESBInteractionConditionCheckType.h"
#include "ESBInteractionHoldDurationType.h"
#include "ESBInteractionOwnerRotationType.h"
#include "ESBPhotoModeInteractionAllowType.h"
#include "SBAliasCondition.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_Root.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_Root : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FSBInteractionExecPinInfo> RootExec;
    
    UPROPERTY()
    TArray<FSBInteractionExecPinInfo> InputConditions;
    
    UPROPERTY(VisibleAnywhere)
    bool bForceFoldWeapon;
    
    UPROPERTY(VisibleAnywhere)
    bool bOperateNonCombat;
    
    UPROPERTY(VisibleAnywhere)
    bool bOperateNonDialogue;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBInteractionConditionCheckType> ConditionCheckType;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBInteractionHoldDurationType> HoldDurationType;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBInteractionOwnerRotationType> OwnerRotationType;
    
    UPROPERTY(VisibleAnywhere)
    bool bUseCasterEffect;
    
    UPROPERTY(VisibleAnywhere)
    bool bUseCancelOutOfRange;
    
    UPROPERTY(VisibleAnywhere)
    bool bModeDialogue;
    
    UPROPERTY(VisibleAnywhere)
    bool bPauseMetaAI;
    
    UPROPERTY(VisibleAnywhere)
    bool bPendingHUDEvent;
    
    UPROPERTY(VisibleAnywhere)
    bool bStopCasterShowAtFinish;
    
    UPROPERTY(VisibleAnywhere)
    bool bHideInteractionUI;
    
    UPROPERTY(VisibleAnywhere)
    bool bBlockPhotoMode;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBInteractionCancelFilterType> CancelFilterType;
    
    UPROPERTY()
    bool bSaveGame;
    
    UPROPERTY()
    bool bEndSaveGame;
    
    UPROPERTY()
    bool bBlockEndSaveGame;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBPhotoModeInteractionAllowType> PhotoModeAllowType;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasCondition ExecCheckCondition;
    
    USBInteractionNode_Root();

};


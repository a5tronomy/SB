#pragma once
#include "CoreMinimal.h"
#include "ESBInteractCampType.h"
#include "ESBInteractShowPlayRuleType.h"
#include "ESBInteractionMoveType.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_InteractCamp.generated.h"

class USBShowData;

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_InteractCamp : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSBInteractionExecPinInfo ExecInput;
    
    UPROPERTY()
    TEnumAsByte<ESBInteractCampType> InteractType;
    
    UPROPERTY(VisibleAnywhere)
    bool bUseSaveGame;
    
    UPROPERTY(VisibleAnywhere)
    USBShowData* OwnerShow;
    
    UPROPERTY(VisibleAnywhere)
    USBShowData* CasterShow;
    
    UPROPERTY(VisibleAnywhere)
    TSoftObjectPtr<USBShowData> CasterLoopShowAsset;
    
    UPROPERTY(VisibleAnywhere)
    int32 ShowLoopCount;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBInteractShowPlayRuleType> ShowPlayRuleType;
    
    UPROPERTY(VisibleAnywhere)
    bool bShowResetZoneUI;
    
    UPROPERTY()
    float DelayTime;
    
    UPROPERTY()
    bool bActorBlockAll;
    
    UPROPERTY()
    TEnumAsByte<ESBInteractionMoveType> InteractionMoveType;
    
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo OutputExec;
    
    USBInteractionNode_InteractCamp();

};


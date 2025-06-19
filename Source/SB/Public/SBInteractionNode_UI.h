#pragma once
#include "CoreMinimal.h"
#include "ESBInteractShowPlayRuleType.h"
#include "ESBInteractionMoveType.h"
#include "ESBUIGameMenuType.h"
#include "ESBUILogicType.h"
#include "SBAliasUIActionRequest.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_UI.generated.h"

class USBShowData;

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_UI : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSBInteractionExecPinInfo ExecInput;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBUIGameMenuType> OpenUIType;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBUILogicType> OpenUILogicType;
    
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
    
    UPROPERTY()
    float DelayTime;
    
    UPROPERTY()
    bool bActorBlockAll;
    
    UPROPERTY()
    bool bOpenAllMenu;
    
    UPROPERTY()
    TEnumAsByte<ESBInteractionMoveType> InteractionMoveType;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasUIActionRequest UIActionRequestGroup;
    
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo OutputExec;
    
    UPROPERTY(EditAnywhere)
    bool bAllowPresentation;
    
    USBInteractionNode_UI();

};


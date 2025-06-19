#pragma once
#include "CoreMinimal.h"
#include "ESBInteractShowPlayRuleType.h"
#include "ESBInteractionMoveType.h"
#include "ESBInteractionTargetShopData.h"
#include "ESBUIWorkShopType.h"
#include "SBAliasUIActionRequest.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_WorkShopUI.generated.h"

class USBShowData;

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_WorkShopUI : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSBInteractionExecPinInfo ExecInput;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBUIWorkShopType> OpenUIType;
    
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
    TEnumAsByte<ESBInteractionMoveType> InteractionMoveType;
    
    UPROPERTY()
    FString ShopName;
    
    UPROPERTY()
    TEnumAsByte<ESBInteractionTargetShopData> TargetShopDataType;
    
    UPROPERTY()
    int32 TargetShopIndex;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasUIActionRequest UIActionRequestGroup;
    
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo OutputExec;
    
    USBInteractionNode_WorkShopUI();

};


#pragma once
#include "CoreMinimal.h"
#include "ESBInteractionMoveType.h"
#include "ESBInteractionTargetShopData.h"
#include "SBAliasUIActionRequest.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_ShopUI.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_ShopUI : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSBInteractionExecPinInfo ExecInput;
    
    UPROPERTY()
    FString ShopName;
    
    UPROPERTY()
    FString ShopTitleTag;
    
    UPROPERTY()
    float DelayTime;
    
    UPROPERTY()
    bool bActorBlockAll;
    
    UPROPERTY()
    TEnumAsByte<ESBInteractionMoveType> InteractionMoveType;
    
    UPROPERTY()
    TEnumAsByte<ESBInteractionTargetShopData> TargetShopDataType;
    
    UPROPERTY()
    int32 TargetShopIndex;
    
    UPROPERTY()
    bool bStopTheater;
    
    UPROPERTY()
    bool bUseCloseFadeScreen;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasUIActionRequest UIActionRequestGroup;
    
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo OutputExec;
    
    USBInteractionNode_ShopUI();

};


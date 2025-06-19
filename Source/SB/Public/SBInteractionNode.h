#pragma once
#include "CoreMinimal.h"
#include "ESBInteractShowPlayRuleType.h"
#include "ESBInteractionMoveType.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNodeProperty.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode.generated.h"

class USBInteractionNode;
class USBShowData;
class USoundBase;

UCLASS(EditInlineNew)
class SB_API USBInteractionNode : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSBInteractionExecPinInfo DefaultResult;
    
    UPROPERTY()
    FName ConditionAlias;
    
    UPROPERTY()
    FSBInteractionNodeProperty MainAction;
    
    UPROPERTY()
    TArray<FSBInteractionNodeProperty> SubActions;
    
    UPROPERTY(VisibleAnywhere)
    FString OwnerShow;
    
    UPROPERTY(VisibleAnywhere)
    FString CasterShow;
    
    UPROPERTY(VisibleAnywhere)
    TSoftObjectPtr<USBShowData> OwnerShowAsset;
    
    UPROPERTY(VisibleAnywhere)
    TSoftObjectPtr<USBShowData> CasterShowAsset;
    
    UPROPERTY(VisibleAnywhere)
    TSoftObjectPtr<USBShowData> CasterLoopShowAsset;
    
    UPROPERTY(VisibleAnywhere)
    int32 ShowLoopCount;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBInteractShowPlayRuleType> ShowPlayRuleType;
    
    UPROPERTY(VisibleAnywhere)
    float DelayTime;
    
    UPROPERTY(VisibleAnywhere)
    bool bActorBlockAll;
    
    UPROPERTY(VisibleAnywhere)
    bool IgnoreEventByPlayerDead;
    
    UPROPERTY(VisibleAnywhere)
    USoundBase* Success_Sound;
    
    UPROPERTY(VisibleAnywhere)
    USoundBase* Fail_Sound;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBInteractionMoveType> InteractionMoveType;
    
    UPROPERTY()
    FSBInteractionExecPinInfo Result_Fail;
    
    UPROPERTY()
    FName ParentPinName;
    
    UPROPERTY()
    uint32 ParentPinIndex;
    
    UPROPERTY()
    TArray<USBInteractionNode*> ChildNodes;
    
    UPROPERTY()
    TArray<FSBInteractionExecPinInfo> InputActionList;
    
    UPROPERTY(EditAnywhere)
    bool bExitInteraction;
    
    USBInteractionNode();

};


#pragma once
#include "CoreMinimal.h"
#include "ESBConditionResultVisibleType.h"
#include "ESBQuestSymbolUIType.h"
#include "ESBTheaterInteractionDesignType.h"
#include "SBAliasConditionGroup.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_TheaterChoiceData.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_TheaterChoiceData : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<FName> SelectConditions;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasConditionGroup ConditionGroup;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBConditionResultVisibleType> TextVisibleType;
    
    UPROPERTY(VisibleAnywhere)
    FText DisplayText;
    
    UPROPERTY(VisibleAnywhere)
    FName NextTask;
    
    UPROPERTY(VisibleAnywhere)
    FName InteractionGraphExec;
    
    UPROPERTY(VisibleAnywhere)
    int32 SelectDataPriority;
    
    UPROPERTY(VisibleAnywhere)
    bool bForceLock;
    
    UPROPERTY(VisibleAnywhere)
    FText SelectedMessagePopupText;
    
    UPROPERTY(VisibleAnywhere)
    bool bDisableRelevantDot;
    
    UPROPERTY(VisibleAnywhere)
    bool bUseInputCancel;
    
    UPROPERTY(VisibleAnywhere)
    FSBInteractionExecPinInfo Output;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBQuestSymbolUIType> QuestSymbolType;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBAliasConditionGroup> QuestSymbol_VisibilityConditionGorup;
    
    UPROPERTY(Transient)
    FName LinkToSelectDataName;
    
    UPROPERTY(Transient)
    TEnumAsByte<ESBTheaterInteractionDesignType> DesignType;
    
    UPROPERTY(Transient)
    FText TitleMessageText;
    
    USBInteractionNode_TheaterChoiceData();

};


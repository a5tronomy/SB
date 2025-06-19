#pragma once
#include "CoreMinimal.h"
#include "ESBQuestSymbolUIType.h"
#include "ESBTheaterInteractionLineMarkerType.h"
#include "ESBTheaterInteractionSelectType.h"
#include "SBTheaterInteractionLineData.generated.h"

USTRUCT(BlueprintType)
struct FSBTheaterInteractionLineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TEnumAsByte<ESBTheaterInteractionSelectType> SelectType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FText DisplayText;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName TakeAlias;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName InteractionGraphExec;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TEnumAsByte<ESBTheaterInteractionLineMarkerType> MarkerType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TEnumAsByte<ESBQuestSymbolUIType> QuestSymbolUIType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bForceLock;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FText SelectedMsgPopupText;
    
    SB_API FSBTheaterInteractionLineData();
};


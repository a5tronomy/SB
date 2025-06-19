#pragma once
#include "CoreMinimal.h"
#include "ESBConditionResultVisibleType.h"
#include "ESBQuestSymbolUIType.h"
#include "ESBTheaterInteractionDesignType.h"
#include "SBTablePropertyBase.h"
#include "SBTheaterSelectDataTableProperty.generated.h"

USTRUCT()
struct FSBTheaterSelectDataTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName SelectDataName;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> Conditions;
    
    UPROPERTY(EditAnywhere)
    FName ConditionGroup;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBTheaterInteractionDesignType> DesignType;
    
    UPROPERTY(EditAnywhere)
    FText TitleMessageText;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionResultVisibleType> TextVisibleType;
    
    UPROPERTY(EditAnywhere)
    FText DisplayText;
    
    UPROPERTY(EditAnywhere)
    FName NextTaskTagName;
    
    UPROPERTY(EditAnywhere)
    int32 SelectDataPriority;
    
    UPROPERTY(EditAnywhere)
    FName InteractionGraphExec;
    
    UPROPERTY(EditAnywhere)
    bool bUseInputCancel;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBQuestSymbolUIType> QuestSymbolType;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> QuestSymbol_VisibilityConditionGorup;
    
    UPROPERTY(EditAnywhere)
    bool bForceLock;
    
    UPROPERTY(EditAnywhere)
    bool bDisableRelevantDot;
    
    UPROPERTY(EditAnywhere)
    FText SelectedMessagePopupText;
    
    UPROPERTY(EditAnywhere)
    FString Description;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBTheaterSelectDataTableProperty();
};


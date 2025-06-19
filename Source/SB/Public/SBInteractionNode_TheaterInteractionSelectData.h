#pragma once
#include "CoreMinimal.h"
#include "ESBTheaterInteractionDesignType.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_TheaterInteractionSelectData.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_TheaterInteractionSelectData : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName SelectDataName;
    
    UPROPERTY(VisibleAnywhere)
    bool bUseInputCancel;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBTheaterInteractionDesignType> DesignType;
    
    UPROPERTY(VisibleAnywhere)
    FText TitleMessageText;
    
    UPROPERTY(VisibleAnywhere)
    FString Description;
    
    UPROPERTY()
    TArray<FSBInteractionExecPinInfo> InputChoiceDataList;
    
    USBInteractionNode_TheaterInteractionSelectData();

};


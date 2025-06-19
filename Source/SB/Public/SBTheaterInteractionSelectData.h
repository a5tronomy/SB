#pragma once
#include "CoreMinimal.h"
#include "ESBTheaterInteractionDesignType.h"
#include "SBTheaterInteractionLineData.h"
#include "SBTheaterInteractionSelectData.generated.h"

USTRUCT(BlueprintType)
struct FSBTheaterInteractionSelectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TEnumAsByte<ESBTheaterInteractionDesignType> DesignType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName Tag;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FSBTheaterInteractionLineData> SelectionArray;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bUseInputCancel;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FText Message;
    
    SB_API FSBTheaterInteractionSelectData();
};


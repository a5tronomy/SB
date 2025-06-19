#pragma once
#include "CoreMinimal.h"
#include "EdGraph/EdGraphNode.h"
#include "EdGraph/EdGraphPin.h"
#include "ESBData.h"
#include "SBEdGraphNodePinInfo.generated.h"

class UObject;

USTRUCT()
struct SB_API FSBEdGraphNodePinInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    bool bTextWidgetReadOnly;
    
    UPROPERTY(Transient)
    int32 PinIndex;
    
    UPROPERTY()
    FName PinName;
    
    UPROPERTY()
    FName DataCategory;
    
    UPROPERTY()
    FString DefaultValue;
    
    UPROPERTY()
    TEnumAsByte<ESBData> DataTableType;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UObject> SubCategoryObject;
    
    UPROPERTY()
    FEdGraphPinType GraphPinType;
    
    UPROPERTY()
    TEnumAsByte<EEdGraphPinDirection> PinDirectionType;
    
    FSBEdGraphNodePinInfo();
};


#pragma once
#include "CoreMinimal.h"
#include "ESBConditionItemCheckRangeType.h"
#include "ESBItemBucketType.h"
#include "SBAlias.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_PropertyDespawnItem.generated.h"

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_PropertyDespawnItem : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBInteractionExecPinInfo InputExec;
    
    UPROPERTY(EditAnywhere)
    FSBInteractionExecPinInfo OutputExec;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBInteractionExecPinInfo> PropertyData;
    
    UPROPERTY(EditAnywhere)
    int32 ItemCount;
    
    UPROPERTY()
    TEnumAsByte<ESBItemBucketType> ItemBucketType;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBConditionItemCheckRangeType> CheckRange;
    
    UPROPERTY()
    FSBAlias RefTableAlias;
    
    USBInteractionNode_PropertyDespawnItem();

};


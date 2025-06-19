#pragma once
#include "CoreMinimal.h"
#include "ESBItemCategory.h"
#include "ESBQuestRequireItemTaskCheckType.h"
#include "ESBQuestRequireItemTaskCountType.h"
#include "SBAliasItem.h"
#include "SBQuestEventActionDataInfo.h"
#include "SBQuestTaskNode.h"
#include "SBQuestTaskTypeRequireItem.generated.h"

UCLASS(EditInlineNew)
class SB_API USBQuestTaskTypeRequireItem : public USBQuestTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    ESBQuestRequireItemTaskCountType CountType;
    
    UPROPERTY(VisibleAnywhere)
    int32 ConditionCount;
    
    UPROPERTY(VisibleAnywhere)
    ESBQuestRequireItemTaskCheckType CheckItemType;
    
    UPROPERTY(VisibleAnywhere)
    FSBAliasItem ItemAlias;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBItemCategory> CheckItemCategory;
    
    UPROPERTY(VisibleAnywhere)
    FString CheckItemCategoryTag;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBQuestEventActionDataInfo> StartEventList;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBQuestEventActionDataInfo> UpdateEventList;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBQuestEventActionDataInfo> CompleteEventList;
    
    USBQuestTaskTypeRequireItem();

};


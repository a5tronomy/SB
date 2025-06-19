#pragma once
#include "CoreMinimal.h"
#include "SBQuestEventActionDataInfo.h"
#include "SBQuestTaskNode.h"
#include "SBQuestTaskTypeActorInBound.generated.h"

UCLASS(EditInlineNew)
class SB_API USBQuestTaskTypeActorInBound : public USBQuestTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<FName> TargetFilters;
    
    UPROPERTY(VisibleAnywhere)
    FName OwnerFilter;
    
    UPROPERTY(VisibleAnywhere)
    float Radius;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBQuestEventActionDataInfo> StartEventList;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBQuestEventActionDataInfo> UpdateEventList;
    
    UPROPERTY(EditAnywhere)
    TArray<FSBQuestEventActionDataInfo> CompleteEventList;
    
    USBQuestTaskTypeActorInBound();

};


#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SBEventMoveIKData.h"
#include "SBAnimNotify_EventMoveIK.generated.h"

UCLASS(CollapseCategories)
class SB_API USBAnimNotify_EventMoveIK : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSBEventMoveIKData> EventMoveIKData;
    
    USBAnimNotify_EventMoveIK();

};


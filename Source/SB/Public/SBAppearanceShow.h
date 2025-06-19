#pragma once
#include "CoreMinimal.h"
#include "SBAppearanceShow.generated.h"

class USBShowData;

USTRUCT(BlueprintType)
struct FSBAppearanceShow {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Appearance;
    
    UPROPERTY(EditAnywhere)
    USBShowData* BehaviorArriveShow;
    
    UPROPERTY(EditAnywhere)
    USBShowData* BehaviorLeaveShow;
    
    UPROPERTY(EditAnywhere)
    TArray<USBShowData*> BehaviorActiveShowArray;
    
    UPROPERTY(EditAnywhere)
    TArray<USBShowData*> BehaviorIdleShowArray;
    
    SB_API FSBAppearanceShow();
};


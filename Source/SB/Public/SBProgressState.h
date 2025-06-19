#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBProgressState.generated.h"

UCLASS()
class SB_API ASBProgressState : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float Progress;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StartProgress;
    
    UPROPERTY(EditAnywhere)
    float EditorViewProgress;
    
public:
    ASBProgressState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void NotifyChangedProgress(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void ChangeProgress(float InValue);
    
};


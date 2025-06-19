#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Styling/SlateColor.h"
#include "SBUtilLevelNotice.generated.h"

UCLASS()
class ASBUtilLevelNotice : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString textNotice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateColor textNoticeColor;
    
    ASBUtilLevelNotice(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void EventUpdateWidget();
    
};


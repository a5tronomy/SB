#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "SBDevUIStudioPreviewWidget.generated.h"

class UListView;

UCLASS(EditInlineNew)
class USBDevUIStudioPreviewWidget : public USBUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FName TargetStudioTag;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FString> ShowTagTextMap;
    
    UPROPERTY(Instanced, Transient)
    UListView* ListView;
    
public:
    USBDevUIStudioPreviewWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void EventStudioShowPlay(FName inShowTag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventChangeCameraBlend(bool bBlend);
    
};


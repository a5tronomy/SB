#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "Blueprint/UserWidget.h"
#include "SBUtilLevelNoticeWidget.generated.h"

class UTextBlock;

UCLASS(EditInlineNew)
class USBUtilLevelNoticeWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText noticeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateColor noticeTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UTextBlock* TextBlockNotice;
    
    USBUtilLevelNoticeWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void EventUpdateNotify();
    
};


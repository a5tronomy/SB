#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "SBSequencerBackgroundWidget.generated.h"

UCLASS(EditInlineNew)
class USBSequencerBackgroundWidget : public USBUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeIn;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOut;
    
    UPROPERTY(Transient)
    bool bRecordMode;
    
public:
    USBSequencerBackgroundWidget();

};


#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "SBSoundDebuggerWidget.generated.h"

class UListView;
class UVerticalBox;
class UWidget;

UCLASS(EditInlineNew)
class USBSoundDebuggerWidget : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UVerticalBox* SoundFixedLogRoot;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UListView* FixedEventLog_ListView;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UVerticalBox* SoundEventLogRoot;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UListView* EventLogCategory_ListView;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UListView* EventLogDescription_ListView;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UWidget* WorldLogRoot;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USBUserWidget* WorldLog1;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USBUserWidget* WorldLog2;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USBUserWidget* WorldLog3;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USBUserWidget* WorldLog4;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USBUserWidget* WorldLog5;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USBUserWidget* WorldLog6;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USBUserWidget* WorldLog7;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USBUserWidget* WorldLog8;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USBUserWidget* WorldLog9;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UVerticalBox* StatLogRoot;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UVerticalBox* StatSoundsLogRoot;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UListView* StatSoundsIndex_ListView;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UListView* StatSoundsOption_ListView;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UListView* StatSoundsClass_ListView;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UListView* StatSoundsPath_ListView;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UVerticalBox* StatWaveLogRoot;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UListView* StatWaveIndex_ListView;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UListView* StatWaveOption_ListView;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UListView* StatWavePath_ListView;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UVerticalBox* StatCueLogRoot;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UListView* StatCueIndex_ListView;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UListView* StatCueOption_ListView;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UListView* StatCuePath_ListView;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UVerticalBox* StatVibrationLogRoot;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UListView* StatVibrationIndex_ListView;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UListView* StatVibrationOption_ListView;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UListView* StatVibrationPath_ListView;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UVerticalBox* StatForceFeedbackLogRoot;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UListView* StatForceFeedbackIndex_ListView;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UListView* StatForceFeedbackLeftLarge_ListView;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UListView* StatForceFeedbackLeftSmall_ListView;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UListView* StatForceFeedbackRightLarge_ListView;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UListView* StatForceFeedbackRightSmall_ListView;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UListView* StatForceFeedbackPath_ListView;
    
public:
    USBSoundDebuggerWidget();

};


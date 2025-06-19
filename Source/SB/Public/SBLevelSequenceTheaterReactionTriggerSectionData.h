#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "ESBLevelSequenceTheaterReactionTriggerType.h"
#include "SBLevelSequenceTheaterReactionTriggerSectionData.generated.h"

class USBDualSenseTriggerEffectData;

USTRUCT(BlueprintType)
struct FSBLevelSequenceTheaterReactionTriggerSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USBDualSenseTriggerEffectData* DualSenseTriggerData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ESBLevelSequenceTheaterReactionTriggerType> InputKey;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InputPressTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bPressMaxStop;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> ScreenHorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> ScreenVerticalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D ScreenOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool VisibleProgress;
    
    SB_API FSBLevelSequenceTheaterReactionTriggerSectionData();
};


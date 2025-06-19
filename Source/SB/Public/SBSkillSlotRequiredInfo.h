#pragma once
#include "CoreMinimal.h"
#include "SBSkillSlotRequiredInfo.generated.h"

class USBSkillSlotBase;
class USBUserWidget;

USTRUCT(BlueprintType)
struct FSBSkillSlotRequiredInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, VisibleAnywhere)
    TArray<USBSkillSlotBase*> SlotArray;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    TArray<USBUserWidget*> LineArray;
    
    UPROPERTY()
    bool bNewGamePlusSlot;
    
    SB_API FSBSkillSlotRequiredInfo();
};


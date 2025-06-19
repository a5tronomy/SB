#pragma once
#include "CoreMinimal.h"
#include "SBSkillSlotLines.generated.h"

class USBUserWidget;

USTRUCT(BlueprintType)
struct FSBSkillSlotLines {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, VisibleAnywhere)
    TArray<USBUserWidget*> Array;
    
    SB_API FSBSkillSlotLines();
};


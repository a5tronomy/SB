#pragma once
#include "CoreMinimal.h"
#include "SBSkillSlotBases.generated.h"

class USBSkillSlotBase;

USTRUCT(BlueprintType)
struct FSBSkillSlotBases {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, VisibleAnywhere)
    TArray<USBSkillSlotBase*> Array;
    
    SB_API FSBSkillSlotBases();
};


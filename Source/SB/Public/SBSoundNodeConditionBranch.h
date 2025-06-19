#pragma once
#include "CoreMinimal.h"
#include "Sound/SoundNode.h"
#include "ESBSoundNodeConditionBranchType.h"
#include "SBSoundNodeConditionBranch.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class USBSoundNodeConditionBranch : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ESBSoundNodeConditionBranchType ConditionType;
    
    USBSoundNodeConditionBranch();

};


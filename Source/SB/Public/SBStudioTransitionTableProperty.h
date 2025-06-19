#pragma once
#include "CoreMinimal.h"
#include "ESBUIStudioState.h"
#include "SBTablePropertyBase.h"
#include "SBStudioTransitionTableProperty.generated.h"

USTRUCT()
struct FSBStudioTransitionTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBUIStudioState> StartState;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBUIStudioState> TargetState;
    
    UPROPERTY(EditAnywhere)
    FName TransitionShowTag;
    
    UPROPERTY(EditAnywhere)
    FName TransitionSequenceTag;
    
    UPROPERTY(EditAnywhere)
    bool bFade;
    
    SB_API FSBStudioTransitionTableProperty();
};


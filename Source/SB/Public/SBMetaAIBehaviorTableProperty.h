#pragma once
#include "CoreMinimal.h"
#include "ESBEquation.h"
#include "SBTablePropertyBase.h"
#include "SBMetaAIBehaviorTableProperty.generated.h"

USTRUCT()
struct FSBMetaAIBehaviorTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    int32 Priority;
    
    UPROPERTY(EditAnywhere)
    float FindDistance;
    
    UPROPERTY(EditAnywhere)
    float Interval;
    
    UPROPERTY(EditAnywhere)
    float AcitiveProbability;
    
    UPROPERTY(EditAnywhere)
    float TirednessPerSecond;
    
    UPROPERTY(EditAnywhere)
    float Condition_StartTiredness;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEquation> Condition_StartTiredness_OperationType;
    
    UPROPERTY(EditAnywhere)
    float Condition_EndTiredness;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEquation> Condition_EndTiredness_OperationType;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBMetaAIBehaviorTableProperty();
};


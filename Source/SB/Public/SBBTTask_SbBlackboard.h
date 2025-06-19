#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "UObject/NoExportTypes.h"
#include "ESBBlackboardVarType.h"
#include "SBBTTask_SbBlackboard.generated.h"

UCLASS()
class SB_API USBBTTask_SbBlackboard : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bReturnSucceeded;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBBlackboardVarType::Type> VarType;
    
    UPROPERTY(EditAnywhere)
    FName KeyName;
    
    UPROPERTY(EditAnywhere)
    int32 IntValue;
    
    UPROPERTY(EditAnywhere)
    float FloatValue;
    
    UPROPERTY(EditAnywhere)
    FVector VectorValue;
    
    UPROPERTY(EditAnywhere)
    bool bAdditive;
    
    UPROPERTY(EditAnywhere)
    bool bCheckContains;
    
    UPROPERTY(EditAnywhere)
    bool bCheckNoContains;
    
    USBBTTask_SbBlackboard();

};


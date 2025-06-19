#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "UObject/NoExportTypes.h"
#include "ESBAIActorType.h"
#include "ESBBlackboardVarType.h"
#include "ESBCompare.h"
#include "ESBDecoratorBlackboardSetValueType.h"
#include "SBBTDecorator_SbBlackboard.generated.h"

UCLASS()
class USBBTDecorator_SbBlackboard : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBAIActorType::Type> ActorType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBCompare::Type> CompareOP;
    
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
    bool BoolValue;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBDecoratorBlackboardSetValueType::Type> SetValueType;
    
    UPROPERTY(EditAnywhere)
    int32 SetIntValue;
    
    UPROPERTY(EditAnywhere)
    float SetFloatValue;
    
    UPROPERTY(EditAnywhere)
    FVector SetVectorValue;
    
    UPROPERTY(EditAnywhere)
    bool SetBoolValue;
    
    USBBTDecorator_SbBlackboard();

};


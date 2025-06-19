#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBBlackboardVarType.h"
#include "SBShowKey.h"
#include "SBShowSetAIDecoratorKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowSetAIDecoratorKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBBlackboardVarType::Type> SetVarType;
    
    UPROPERTY(EditAnywhere)
    FName VarKey;
    
    UPROPERTY(EditAnywhere)
    float FloatVar;
    
    UPROPERTY(EditAnywhere)
    int32 IntVar;
    
    UPROPERTY(EditAnywhere)
    bool BoolVar;
    
    UPROPERTY(EditAnywhere)
    FVector VectorVar;
    
    UPROPERTY(EditAnywhere)
    bool bSetWhenEndKey;
    
    UPROPERTY(EditAnywhere)
    float SetEnd_FloatVar;
    
    UPROPERTY(EditAnywhere)
    int32 SetEnd_IntVar;
    
    UPROPERTY(EditAnywhere)
    bool SetEnd_BoolVar;
    
    UPROPERTY(EditAnywhere)
    FVector SetEnd_VectorVar;
    
    USBShowSetAIDecoratorKey();

};


#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESBConditionCheckType.h"
#include "SBShowKey.generated.h"

UCLASS(DefaultToInstanced, EditInlineNew)
class SB_API USBShowKey : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FName> CheckShowKeyTag;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> CheckNoneShowKeyTag;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBConditionCheckType> IsBattle;
    
    UPROPERTY(EditAnywhere)
    float StartTime;
    
    UPROPERTY(EditAnywhere)
    bool bKeepPlaying;
    
    UPROPERTY(EditAnywhere)
    bool bCheckHitLevel;
    
    UPROPERTY(EditAnywhere)
    bool bEnable;
    
    UPROPERTY(EditAnywhere)
    bool bNeedsExecutionKey;
    
protected:
    UPROPERTY(EditAnywhere)
    float Duration;
    
public:
    USBShowKey();

};


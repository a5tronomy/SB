#pragma once
#include "CoreMinimal.h"
#include "ESBInteractionEventType.h"
#include "SBInteractionNodeProperty.generated.h"

USTRUCT(BlueprintType)
struct FSBInteractionNodeProperty {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBInteractionEventType> ActionType;
    
    UPROPERTY(EditAnywhere)
    FName EventAlias;
    
    UPROPERTY(EditAnywhere)
    int32 CustomValue;
    
    UPROPERTY(EditAnywhere)
    FName CustomStrValue;
    
    UPROPERTY(EditAnywhere)
    FString OwnerShow;
    
    UPROPERTY(EditAnywhere)
    FString CasterShow;
    
    UPROPERTY(EditAnywhere)
    float DelayTime;
    
    SB_API FSBInteractionNodeProperty();
};


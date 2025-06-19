#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBLevelSequenceTheaterInputCounterActorInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceTheaterInputCounterActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FName> ActorTags;
    
    UPROPERTY(EditAnywhere)
    FName ActorSocketName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D ActorOffset;
    
    SB_API FSBLevelSequenceTheaterInputCounterActorInfo();
};


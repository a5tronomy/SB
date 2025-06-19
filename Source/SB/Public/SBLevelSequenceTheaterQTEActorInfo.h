#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBLevelSequenceTheaterQTEActorInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceTheaterQTEActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FName> ActorTags;
    
    UPROPERTY(EditAnywhere)
    FName ActorSocketName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D ActorOffset;
    
    SB_API FSBLevelSequenceTheaterQTEActorInfo();
};


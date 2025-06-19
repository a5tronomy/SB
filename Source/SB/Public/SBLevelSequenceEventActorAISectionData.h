#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ESBZoneEventActorTarget.h"
#include "SBLevelSequenceEventActorAISectionData.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceEventActorAISectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBZoneEventActorTarget> ActorTarget;
    
    UPROPERTY(EditAnywhere)
    FName ActorTagName;
    
    UPROPERTY(EditAnywhere)
    bool ActiveAI;
    
    UPROPERTY(EditAnywhere)
    bool bControlMovement;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMovementMode> MovementMode;
    
    SB_API FSBLevelSequenceEventActorAISectionData();
};


#pragma once
#include "CoreMinimal.h"
#include "ESBLevelSequencePlayType.h"
#include "SBEnvStateProperty.generated.h"

USTRUCT(BlueprintType)
struct FSBEnvStateProperty {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName EnvStateTagName;
    
    UPROPERTY(EditAnywhere)
    FName LevelSequence_Active;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBLevelSequencePlayType> PlayType_Active;
    
    UPROPERTY(EditAnywhere)
    float StartTime_Active;
    
    UPROPERTY(EditAnywhere)
    bool RestoreActiveSequence;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ActiveAttachTagName;
    
    UPROPERTY(EditAnywhere)
    FName LevelSequence_OutTransit;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBLevelSequencePlayType> PlayType_OutTransit;
    
    UPROPERTY(EditAnywhere)
    float StartTime_OutTransit;
    
    UPROPERTY(EditAnywhere)
    bool RestoreTransitSequence;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> TransitAttachTagName;
    
    SB_API FSBEnvStateProperty();
};


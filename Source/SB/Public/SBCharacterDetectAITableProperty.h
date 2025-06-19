#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBCharacterDetectAITableProperty.generated.h"

USTRUCT()
struct FSBCharacterDetectAITableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float AISightSenseHorizontalAngle;
    
    UPROPERTY(EditAnywhere)
    float AISightSenseVerticalAngle;
    
    UPROPERTY(EditAnywhere)
    float AISightSenseNearDistance;
    
    UPROPERTY(EditAnywhere)
    float AISightSenseVerticalDistance;
    
    UPROPERTY(EditAnywhere)
    bool AISightSenseIgnoreBlocking;
    
    UPROPERTY(EditAnywhere)
    bool AISightSenseIgnoreBlockingWhenDetectTarget;
    
    UPROPERTY(EditAnywhere)
    float AIDetectCheckDistance;
    
    UPROPERTY(EditAnywhere)
    float AIObserveCheckDistance;
    
    UPROPERTY(EditAnywhere)
    float AIPursuitDistance;
    
    UPROPERTY(EditAnywhere)
    float AIPursuitFixedDistance;
    
    UPROPERTY(EditAnywhere)
    float AIPursuitVerticaDistance;
    
    UPROPERTY(EditAnywhere)
    float AIIncreaseAggroGaguePerSecond;
    
    UPROPERTY(EditAnywhere)
    float AIIncreaseDoubtAggroGaguePerSecond;
    
    UPROPERTY(EditAnywhere)
    float AIDecreaseLevel0AggroGaguePerSecond;
    
    UPROPERTY(EditAnywhere)
    float AIDecreaseLevel1AggroGaguePerSecond;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBCharacterDetectAITableProperty();
};


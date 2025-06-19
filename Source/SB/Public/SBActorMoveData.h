#pragma once
#include "CoreMinimal.h"
#include "SBActorMoveData.generated.h"

class ASBCharacter;
class UCurveFloat;
class UCurveVector;

USTRUCT(BlueprintType)
struct FSBActorMoveData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TWeakObjectPtr<ASBCharacter> pAttachCharacter;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ASBCharacter> pRotationTargetCharacter;
    
    UPROPERTY(Transient)
    UCurveFloat* PositionInterpCurveData;
    
    UPROPERTY(Transient)
    UCurveFloat* RotationInterpCurveData;
    
    UPROPERTY(Transient)
    UCurveFloat* StaticMoveZVAlueCurveData;
    
    UPROPERTY(Transient)
    UCurveVector* MoveOffsetCurveData;
    
    SB_API FSBActorMoveData();
};


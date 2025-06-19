#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBCharacterAnimMoveInfoTableProperty.generated.h"

USTRUCT()
struct FSBCharacterAnimMoveInfoTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    float MovingDistance;
    
    UPROPERTY(EditAnywhere)
    float DelayDuration;
    
    UPROPERTY(EditAnywhere)
    float MovingDuration;
    
    UPROPERTY(EditAnywhere)
    float RotationDelayDuration;
    
    UPROPERTY(EditAnywhere)
    float RotationDuration;
    
    UPROPERTY(EditAnywhere)
    bool LinearInterpRotation;
    
    UPROPERTY(EditAnywhere)
    float AnimPlayDuration;
    
    UPROPERTY(EditAnywhere)
    float AnimBlendTime;
    
    UPROPERTY(EditAnywhere)
    float InputBlockDuration;
    
    UPROPERTY(EditAnywhere)
    bool LinearInterpLocation;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideLinearInterpLocation;
    
    UPROPERTY(EditAnywhere)
    int32 RotationDirType;
    
    SB_API FSBCharacterAnimMoveInfoTableProperty();
};


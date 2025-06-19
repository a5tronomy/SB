#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/KismetMathLibrary.h"
#include "SBSplineCameraActor.h"
#include "SBSplineCameraSpringActor.generated.h"

class USpringArmComponent;

UCLASS()
class SB_API ASBSplineCameraSpringActor : public ASBSplineCameraActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseCamControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxCamControlDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WaitInputRollback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RemainRollbackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EEasingFunc::Type> RollbackEasingFunc;
    
private:
    UPROPERTY(Instanced, VisibleAnywhere)
    USpringArmComponent* CameraBoom;
    
    UPROPERTY(Transient)
    float RunningWaitInput;
    
    UPROPERTY(Transient)
    float RunningRemainRollback;
    
    UPROPERTY(Transient)
    FRotator LastBoomRotation;
    
    UPROPERTY(Transient)
    FRotator LastPCRot;
    
public:
    ASBSplineCameraSpringActor(const FObjectInitializer& ObjectInitializer);

};


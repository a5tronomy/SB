#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/NavMovementComponent.h"
#include "SBZoneEnvMovementComponent.generated.h"

class ASBZoneEnvActor;
class UPrimitiveComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SB_API USBZoneEnvMovementComponent : public UNavMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TEnumAsByte<EMovementMode> MovementMode;
    
    UPROPERTY(EditAnywhere)
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NonAccelSpeedArriveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EEasingFunc::Type> NonAccelSpeedEasingFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Deceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TurningBoost;
    
private:
    UPROPERTY(EditAnywhere)
    FVector DefaultBoxExtend;
    
    UPROPERTY(EditAnywhere)
    float SlideBlockingZDist;
    
    UPROPERTY(EditAnywhere)
    float IncorrectMoveDist;
    
    UPROPERTY(EditAnywhere)
    bool bQueryTraceComplex;
    
    UPROPERTY(EditAnywhere)
    float MinFloorDist;
    
    UPROPERTY(EditAnywhere)
    float MaxFloorDist;
    
    UPROPERTY(EditAnywhere)
    float CollisionExtendOffset;
    
    UPROPERTY(EditAnywhere)
    float MaxFloorZ;
    
    UPROPERTY(EditAnywhere)
    bool bConformToSlope;
    
    UPROPERTY(EditAnywhere)
    float MaxStepHeight;
    
    UPROPERTY(EditAnywhere)
    float TraceDownScale;
    
    UPROPERTY(EditAnywhere)
    bool bHasGravity;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ASBZoneEnvActor> ZoneEnvOwner;
    
    UPROPERTY(Transient)
    FHitResult CurrentFloorHit;
    
    UPROPERTY(Transient)
    FHitResult PrevFloorHit;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UPrimitiveComponent> BaseComponent;
    
    UPROPERTY(Transient)
    FVector BaseLocationCurrent;
    
    UPROPERTY(Transient)
    FVector BaseLocationPrevious;
    
    UPROPERTY(Transient)
    FRotator BaseRotationCurrent;
    
    UPROPERTY(Transient)
    FRotator BaseRotationPrevious;
    
    UPROPERTY(Transient)
    FVector ForwardDirection;
    
    UPROPERTY(Transient)
    FVector RightDirection;
    
    UPROPERTY(Transient)
    uint8 bPositionCorrected: 1;
    
    UPROPERTY(Transient)
    FVector LastAcceleration;
    
    UPROPERTY(Transient)
    float NonAccelCurrArriveTime;
    
    UPROPERTY(Transient)
    bool bHoldMove;
    
    UPROPERTY(Transient)
    float AngularDistance;
    
    UPROPERTY(Transient)
    uint8 bCheckPenetratingZ: 1;
    
    UPROPERTY(Transient)
    int32 RemainGrabDeactiveCount;
    
    UPROPERTY(Transient)
    bool bMovementWalked;
    
    UPROPERTY(Transient)
    FVector LastValidLocation;
    
    UPROPERTY(Transient)
    FQuat LastValidRotation;
    
public:
    USBZoneEnvMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    FVector GetPendingInputVector() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLastInputVector() const;
    
    UFUNCTION(BlueprintCallable)
    FVector ConsumeInputVector();
    
    UFUNCTION(BlueprintCallable)
    void AddInputVector(FVector WorldVector, FVector LocalVector, bool bForce);
    
};


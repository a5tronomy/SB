#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "SBShowKey.h"
#include "SBShowCableKey.generated.h"

class UMaterialInterface;

UCLASS(EditInlineNew)
class SB_API USBShowCableKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ThrowTime;
    
    UPROPERTY(EditAnywhere)
    bool bUseThrowTimeCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ThrowTimeCurve;
    
    UPROPERTY(EditAnywhere)
    float RetrieveStartTime;
    
    UPROPERTY(EditAnywhere)
    float RetrieveEndTime;
    
    UPROPERTY(EditAnywhere)
    bool bUseRetrieveTimeCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve RetrieveTimeCurve;
    
    UPROPERTY(EditAnywhere)
    FVector EndLocation;
    
    UPROPERTY(EditAnywhere)
    bool bUseCurveThrowLocation;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ThrowLocationX;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ThrowLocationY;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ThrowLocationZ;
    
    UPROPERTY(EditAnywhere)
    FName StartAttachBoneName;
    
    UPROPERTY(EditAnywhere)
    FVector StartRelativeLocation;
    
    UPROPERTY(EditAnywhere)
    bool bRetrieveWithCableLength;
    
    UPROPERTY(EditAnywhere)
    bool bAttachStart;
    
    UPROPERTY(EditAnywhere)
    bool bAttachEnd;
    
    UPROPERTY(EditAnywhere)
    float CableLength;
    
    UPROPERTY(EditAnywhere)
    int32 NumSegments;
    
    UPROPERTY(EditAnywhere)
    float CableGravityScale;
    
    UPROPERTY(EditAnywhere)
    bool bEnableStiffness;
    
    UPROPERTY(EditAnywhere)
    bool bEnableCollision;
    
    UPROPERTY(EditAnywhere)
    float CollisionFriction;
    
    UPROPERTY(EditAnywhere)
    int32 NumSides;
    
    UPROPERTY(EditAnywhere)
    float CableWidth;
    
    UPROPERTY(EditAnywhere)
    float TileMaterial;
    
    UPROPERTY(EditAnywhere)
    TArray<UMaterialInterface*> CableMaterial;
    
    UPROPERTY(EditAnywhere)
    bool bUseTarget;
    
    UPROPERTY(EditAnywhere)
    bool bFollowTarget;
    
    UPROPERTY(EditAnywhere)
    int32 TargetIndex;
    
    UPROPERTY(EditAnywhere)
    FName TargetAttachBoneName;
    
    UPROPERTY(EditAnywhere)
    FVector TargetRelativeLocation;
    
    USBShowCableKey();

};


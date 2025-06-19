#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "ESBEquipmentType.h"
#include "ESBParticleDynamicInstanceParameterType.h"
#include "ESBShowCharacterParticleTarget.h"
#include "SBShowParticleDynamicInstanceParameter.generated.h"

USTRUCT(BlueprintType)
struct SB_API FSBShowParticleDynamicInstanceParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ParamName;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBParticleDynamicInstanceParameterType::Type> Type;
    
    UPROPERTY(EditAnywhere)
    bool bCurveNormalizedAge;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve Curve1;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve Curve2;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve Curve3;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowCharacterParticleTarget> TargetActor;
    
    UPROPERTY(EditAnywhere)
    int32 TargetIndex;
    
    UPROPERTY(EditAnywhere)
    bool bUseTargetEquipment;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEquipmentType> TargetEquipment;
    
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    FSBShowParticleDynamicInstanceParameter();
};


#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SBLevelSequenceAnimTrailSectionData.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FSBLevelSequenceAnimTrailSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UParticleSystem* PSTemplate;
    
    UPROPERTY(EditAnywhere)
    FName FirstSocketName;
    
    UPROPERTY(EditAnywhere)
    FName SecondSocketName;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> MoreSocketNames;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETrailWidthMode> WidthScaleMode;
    
    UPROPERTY(EditAnywhere)
    FName WidthScaleCurve;
    
    UPROPERTY(EditAnywhere)
    bool bAutoDeactiveAnimChanged;
    
    SB_API FSBLevelSequenceAnimTrailSectionData();
};


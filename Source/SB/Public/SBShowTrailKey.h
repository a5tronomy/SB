#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ESBEquipmentType.h"
#include "ESBMovementTarget.h"
#include "SBShowKey.h"
#include "SBShowTrailKey.generated.h"

class UParticleSystem;

UCLASS(BlueprintType, EditInlineNew)
class SB_API USBShowTrailKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* PSTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName FirstSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SecondSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> MoreSocketNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ETrailWidthMode> WidthScaleMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName WidthScaleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAutoDeactiveAnimChanged;
    
    UPROPERTY(EditAnywhere)
    bool bHiddenWhenAttachHidden;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMovementTarget> Target;
    
    UPROPERTY(EditAnywhere)
    int32 TargetIndex;
    
    UPROPERTY(EditAnywhere)
    bool bUseTargetEquipment;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEquipmentType> TargetEquipment;
    
    UPROPERTY(EditAnywhere)
    FString AttachUniqueName;
    
    USBShowTrailKey();

};


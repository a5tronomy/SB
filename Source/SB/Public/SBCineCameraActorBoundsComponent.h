#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "SBCineCameraActorBoundsComponent.generated.h"

class USBCineCameraActorBoundsBoneTemplateData;

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SB_API USBCineCameraActorBoundsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float ViewDefaultRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FTransform ViewDefaultTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FTransform ViewAdditiveTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FTransform ViewAdditive2Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    USBCineCameraActorBoundsBoneTemplateData* TemplateActorBoneData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool bNotOverrideUseViewTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EEasingFunc::Type> EasingFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EasingAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseMotionBlurAmountZero;
    
    USBCineCameraActorBoundsComponent(const FObjectInitializer& ObjectInitializer);

};


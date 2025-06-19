#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "SBGrabHandInfo.h"
#include "SBZoneEnvGrabComponent.generated.h"

class ASBCharacter;
class ASBZoneEnvActor;
class UArrowComponent;
class USBZoneEnvGrabSet;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SB_API USBZoneEnvGrabComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    USBZoneEnvGrabSet* GrabSet;
    
    UPROPERTY(Transient)
    bool UseAutoSafeMoveCalc;
    
    UPROPERTY(Transient)
    float ManualSafeMoveDist;
    
    UPROPERTY(Transient)
    float ManualSafeMoveRadius;
    
    UPROPERTY(Transient)
    float ManualSafeMoveHeight;
    
    UPROPERTY(Transient)
    bool bFirstGrabed;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ASBZoneEnvActor> ZoneEnvOwner;
    
    UPROPERTY(Export, Transient)
    TArray<TWeakObjectPtr<UArrowComponent>> GrabPointArray;
    
    UPROPERTY(Transient)
    TArray<FSBGrabHandInfo> GrabHandArray;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ASBCharacter> Target;
    
    UPROPERTY(Transient)
    int32 GrabArrowIndex;
    
    UPROPERTY(Transient)
    FVector InputLocalVector;
    
    UPROPERTY(Transient)
    bool bModePivotObject;
    
    UPROPERTY(Transient)
    bool bModeRotateLockObject;
    
    UPROPERTY(Transient)
    float GrabActiveDistXY;
    
public:
    USBZoneEnvGrabComponent(const FObjectInitializer& ObjectInitializer);

};


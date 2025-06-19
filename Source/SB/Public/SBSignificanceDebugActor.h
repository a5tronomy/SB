#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SBSignificanceDebugActor.generated.h"

class USceneComponent;
class UTextRenderComponent;

UCLASS()
class SB_API ASBSignificanceDebugActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    USceneComponent* DummyRoot;
    
    UPROPERTY(EditAnywhere, Instanced)
    UTextRenderComponent* TextRenderComponent;
    
    UPROPERTY(Transient)
    FString PendingText;
    
    UPROPERTY(Transient)
    FVector PendingLocation;
    
    UPROPERTY(Transient)
    FRotator PendingRotation;
    
    UPROPERTY(Transient)
    FVector PendingScale;
    
    UPROPERTY(Transient)
    FColor PendingColor;
    
    UPROPERTY(Transient)
    bool bNeedUpdate;
    
    ASBSignificanceDebugActor(const FObjectInitializer& ObjectInitializer);

};


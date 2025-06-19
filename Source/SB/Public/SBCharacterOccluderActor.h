#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBCharacterOccluderActor.generated.h"

class UBoxComponent;

UCLASS()
class ASBCharacterOccluderActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, VisibleAnywhere)
    UBoxComponent* BoxComponent;
    
    UPROPERTY(EditAnywhere)
    bool bCheckEncompassesPlayer;
    
    UPROPERTY(EditAnywhere)
    bool bRealtime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bActiveOccluder;
    
    UPROPERTY(EditAnywhere)
    bool bKeepCharacterMovementTick;
    
public:
    ASBCharacterOccluderActor(const FObjectInitializer& ObjectInitializer);

};


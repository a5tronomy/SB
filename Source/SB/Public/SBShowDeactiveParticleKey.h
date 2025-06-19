#pragma once
#include "CoreMinimal.h"
#include "ESBSkelMeshSlot.h"
#include "SBShowKey.h"
#include "SBShowDeactiveParticleKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowDeactiveParticleKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkelMeshSlot> MeshSlot;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> SocketNameList;
    
    USBShowDeactiveParticleKey();

};


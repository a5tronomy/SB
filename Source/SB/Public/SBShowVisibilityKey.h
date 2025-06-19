#pragma once
#include "CoreMinimal.h"
#include "ESBSkelMeshSlot.h"
#include "SBShowKey.h"
#include "SBShowVisibilityKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowVisibilityKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bVisible;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSkelMeshSlot> MeshSlot;
    
    USBShowVisibilityKey();

};


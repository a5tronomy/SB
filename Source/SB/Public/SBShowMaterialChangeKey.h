#pragma once
#include "CoreMinimal.h"
#include "ESBMovementTarget.h"
#include "ESBSkelMeshSlot.h"
#include "SBShowKey.h"
#include "SBShowMaterialChangeKey.generated.h"

class UMaterialInterface;

UCLASS(BlueprintType, EditInlineNew)
class SB_API USBShowMaterialChangeKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bUseMaterialArray;
    
    UPROPERTY(EditAnywhere)
    TArray<UMaterialInterface*> pMaterialArray;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* pMaterial;
    
    UPROPERTY(BlueprintReadWrite)
    TEnumAsByte<ESBSkelMeshSlot> ApplyMeshIndex;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<ESBSkelMeshSlot>> ApplyMeshIndexArray;
    
    UPROPERTY(EditAnywhere)
    int32 ApplyMaterialIndex;
    
    UPROPERTY(EditAnywhere)
    int32 LoopCount;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBMovementTarget> Target;
    
    UPROPERTY(EditAnywhere)
    int32 TargetIndex;
    
    USBShowMaterialChangeKey();

};


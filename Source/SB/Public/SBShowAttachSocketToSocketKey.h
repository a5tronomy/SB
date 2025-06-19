#pragma once
#include "CoreMinimal.h"
#include "ESBSkelMeshSlot.h"
#include "SBShowKey.h"
#include "SBShowAttachSocketToSocketKey.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SB_API USBShowAttachSocketToSocketKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName IKBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESBSkelMeshSlot> MySocketSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MySocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESBSkelMeshSlot> TargetSocketSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName TargetSocketName;
    
    USBShowAttachSocketToSocketKey();

};


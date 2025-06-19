#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESBInterpType.h"
#include "ESBShowClientEvent.h"
#include "SBShowKey.h"
#include "SBShowClientEventKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowClientEventKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowClientEvent> ClientEvent;
    
    UPROPERTY(EditAnywhere)
    float EquipmentAttachTime;
    
    UPROPERTY(EditAnywhere)
    bool bFreeMoveMountingEquipment;
    
    UPROPERTY(EditAnywhere)
    FVector FreeMoveMounting_StartControlPointDirection;
    
    UPROPERTY(EditAnywhere)
    FVector FreeMoveMounting_EndControlPointDirection;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBInterpType> FreeMoveMounting_InterpType;
    
    UPROPERTY(EditAnywhere)
    FRotator FreeMoveMounting_Rotation;
    
    USBShowClientEventKey();

};


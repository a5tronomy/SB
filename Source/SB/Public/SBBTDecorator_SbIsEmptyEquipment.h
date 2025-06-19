#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ESBEquipmentType.h"
#include "SBBTDecorator_SbIsEmptyEquipment.generated.h"

UCLASS()
class USBBTDecorator_SbIsEmptyEquipment : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBEquipmentType> EquipmentType;
    
    USBBTDecorator_SbIsEmptyEquipment();

};


#pragma once
#include "CoreMinimal.h"
#include "SBCharacterEventMoveInterface.generated.h"

class ASBCharacterEventMovVolume;
class USBEventMoveDataComponent;

USTRUCT(BlueprintType)
struct FSBCharacterEventMoveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    ASBCharacterEventMovVolume* CurrentVolumeActor;
    
    UPROPERTY(Instanced, Transient)
    USBEventMoveDataComponent* CurrentComponent;
    
    SB_API FSBCharacterEventMoveInterface();
};


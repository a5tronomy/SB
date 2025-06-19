#pragma once
#include "CoreMinimal.h"
#include "Sound/SoundNode.h"
#include "SBSoundNodeProcedural.generated.h"

class USBSoundProcedural;
class USBSoundProceduralAsset;

UCLASS(EditInlineNew, MinimalAPI)
class USBSoundNodeProcedural : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Volume;
    
    UPROPERTY()
    USBSoundProcedural* ProceduralSound;
    
    UPROPERTY(EditAnywhere)
    USBSoundProceduralAsset* ProceduralSoundAsset;
    
    USBSoundNodeProcedural();

};


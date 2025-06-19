#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Sound/SoundGroups.h"
#include "Sound/SoundBase.h"
#include "SBSoundProceduralAsset.generated.h"

class USoundClass;

UCLASS(BlueprintType, EditInlineNew)
class SB_API USBSoundProceduralAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESoundGroup> SoundGroup;
    
    UPROPERTY(EditAnywhere)
    float Volume;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    USoundClass* SoundClassObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EVirtualizationMode VirtualizationMode;
    
    USBSoundProceduralAsset();

};


#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBSoundEquipmentSetTableProperty.generated.h"

USTRUCT()
struct SB_API FSBSoundEquipmentSetTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName EquipmentAlias;
    
    UPROPERTY(EditAnywhere)
    FString CharacterSoundSetOverride;
    
    UPROPERTY(EditAnywhere)
    FString CharacterFootstepSetOverride;
    
    UPROPERTY(EditAnywhere)
    FName SoundEventAlias;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    FSBSoundEquipmentSetTableProperty();
};


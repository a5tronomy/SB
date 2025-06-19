#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBSoundAttenuationEventTableProperty.generated.h"

USTRUCT()
struct SB_API FSBSoundAttenuationEventTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Editor_Description;
    
    UPROPERTY(EditAnywhere)
    FString DialogAttenuationPath;
    
    UPROPERTY(EditAnywhere)
    FString ActionVoiceAttenuationPath;
    
    UPROPERTY(EditAnywhere)
    FString FootstepAttenuationPath;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    FSBSoundAttenuationEventTableProperty();
};


#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBTurntableSoundTableProperty.generated.h"

USTRUCT()
struct FSBTurntableSoundTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName ConditionGroup;
    
    UPROPERTY(EditAnywhere)
    FName NotifyAchievement;
    
    UPROPERTY(EditAnywhere)
    FString MusicPath;
    
    UPROPERTY(EditAnywhere)
    FString NoiseMusicPath;
    
    UPROPERTY(EditAnywhere)
    FString TitleStringKey;
    
    UPROPERTY(EditAnywhere)
    FString ImagePath;
    
    UPROPERTY(EditAnywhere)
    FString QNRTAssetPath;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBTurntableSoundTableProperty();
};


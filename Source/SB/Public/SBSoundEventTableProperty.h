#pragma once
#include "CoreMinimal.h"
#include "ESBSoundBGMStateRule.h"
#include "SBTablePropertyBase.h"
#include "SBSoundEventTableProperty.generated.h"

USTRUCT()
struct SB_API FSBSoundEventTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString MainBGMPath;
    
    UPROPERTY(EditAnywhere)
    FString AmbientBGMPath;
    
    UPROPERTY(EditAnywhere)
    ESBSoundBGMStateRule SoundStateRule;
    
    UPROPERTY(EditAnywhere)
    FName EventBattleState;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, int32> IntParams;
    
    UPROPERTY(EditAnywhere)
    FString SoundBasePath;
    
    UPROPERTY(EditAnywhere)
    FName AttachActorTag;
    
    UPROPERTY(EditAnywhere)
    FName AttachSocket;
    
    UPROPERTY(EditAnywhere)
    FName AttenuationEventAlias;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    FSBSoundEventTableProperty();
};


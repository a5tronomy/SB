#pragma once
#include "CoreMinimal.h"
#include "SBMovieSceneEventKeyStruct.h"
#include "SBMovieSceneEventCharacterSoundSetKeyStruct.generated.h"

class USBCharacterSoundSet;

USTRUCT(BlueprintType)
struct SB_API FSBMovieSceneEventCharacterSoundSetKeyStruct : public FSBMovieSceneEventKeyStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USBCharacterSoundSet* SoundSet;
    
    FSBMovieSceneEventCharacterSoundSetKeyStruct();
};


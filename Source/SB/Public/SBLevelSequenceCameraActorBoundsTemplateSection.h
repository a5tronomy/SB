#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SBLevelSequenceCameraActorBoundsTemplateSectionData.h"
#include "SBLevelSequenceCameraActorBoundsTemplateSection.generated.h"

UCLASS()
class SB_API USBLevelSequenceCameraActorBoundsTemplateSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSBLevelSequenceCameraActorBoundsTemplateSectionData Data;
    
    USBLevelSequenceCameraActorBoundsTemplateSection();

};


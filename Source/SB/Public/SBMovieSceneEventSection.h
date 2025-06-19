#pragma once
#include "CoreMinimal.h"
#include "EntitySystem/IMovieSceneEntityProvider.h"
#include "Sections/MovieSceneEventSectionBase.h"
#include "SBMovieSceneEventSection.generated.h"

UCLASS(Abstract)
class SB_API USBMovieSceneEventSection : public UMovieSceneEventSectionBase, public IMovieSceneEntityProvider {
    GENERATED_BODY()
public:
    USBMovieSceneEventSection();


    // Fix for true pure virtual functions not being implemented
};


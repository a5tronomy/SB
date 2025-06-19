#pragma once
#include "CoreMinimal.h"
#include "SBLevelSequenceCameraActorBoundsTemplateSectionData.generated.h"

class USBCineCameraActorBoundsBoneTemplateData;

USTRUCT(BlueprintType)
struct FSBLevelSequenceCameraActorBoundsTemplateSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USBCineCameraActorBoundsBoneTemplateData* ActorBoneTemplateData;
    
    SB_API FSBLevelSequenceCameraActorBoundsTemplateSectionData();
};


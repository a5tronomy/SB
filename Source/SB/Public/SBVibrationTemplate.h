#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SBVibrationSectionData.h"
#include "SBVibrationTemplate.generated.h"

class USBVibrationSection;

USTRUCT()
struct FSBVibrationTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    USBVibrationSection* VibrationSection;
    
    UPROPERTY()
    FSBVibrationSectionData SectionData;
    
    UPROPERTY()
    FFrameNumber StartFrame;
    
    UPROPERTY()
    FFrameNumber EndFrame;
    
public:
    SB_API FSBVibrationTemplate();
};


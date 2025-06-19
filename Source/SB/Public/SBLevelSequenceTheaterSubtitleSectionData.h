#pragma once
#include "CoreMinimal.h"
#include "ESBSequenceContentType.h"
#include "ESBSequencerSubtitleType.h"
#include "SBLevelSequenceSectionProperty.h"
#include "SBLevelSequenceTheaterSubtitleSectionData.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceTheaterSubtitleSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSequencerSubtitleType> Type;
    
    UPROPERTY(EditAnywhere)
    FText title;
    
    UPROPERTY(EditAnywhere)
    FText Message;
    
    UPROPERTY(EditAnywhere)
    bool bClearSubtitle;
    
    UPROPERTY(EditAnywhere)
    float DelayCloseTime;
    
    UPROPERTY(EditAnywhere)
    bool bSkipAllow;
    
    UPROPERTY(EditAnywhere)
    bool bUseFacialAnimTypeIndex;
    
    UPROPERTY(EditAnywhere)
    FName FacialAnimCharacterTag;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBSequenceContentType> ContentType;
    
    UPROPERTY(VisibleAnywhere)
    FSBLevelSequenceSectionProperty Blank;
    
    SB_API FSBLevelSequenceTheaterSubtitleSectionData();
};


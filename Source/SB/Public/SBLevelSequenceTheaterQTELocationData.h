#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "ESBLevelSequenceTheaterQTELocationType.h"
#include "SBLevelSequenceTheaterQTEActorInfo.h"
#include "SBLevelSequenceTheaterQTELocationData.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceTheaterQTELocationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ESBLevelSequenceTheaterQTELocationType> LocationType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> ScreenHorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> ScreenVerticalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D ScreenOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSBLevelSequenceTheaterQTEActorInfo ActorInfo;
    
    SB_API FSBLevelSequenceTheaterQTELocationData();
};


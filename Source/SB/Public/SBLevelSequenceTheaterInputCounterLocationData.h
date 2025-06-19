#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "ESBLevelSequenceTheaterInputCounterLocationType.h"
#include "SBLevelSequenceTheaterInputCounterActorInfo.h"
#include "SBLevelSequenceTheaterInputCounterLocationData.generated.h"

USTRUCT(BlueprintType)
struct FSBLevelSequenceTheaterInputCounterLocationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ESBLevelSequenceTheaterInputCounterLocationType> LocationType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> ScreenHorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> ScreenVerticalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D ScreenOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSBLevelSequenceTheaterInputCounterActorInfo ActorInfo;
    
    SB_API FSBLevelSequenceTheaterInputCounterLocationData();
};


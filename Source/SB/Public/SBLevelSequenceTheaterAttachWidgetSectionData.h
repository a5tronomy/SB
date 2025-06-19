#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "SBLevelSequenceTheaterAttachWidgetSectionData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FSBLevelSequenceTheaterAttachWidgetSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UObject> WidgetPath;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FString> Arguments;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> ScreenHorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> ScreenVerticalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D ScreenOffset;
    
    SB_API FSBLevelSequenceTheaterAttachWidgetSectionData();
};


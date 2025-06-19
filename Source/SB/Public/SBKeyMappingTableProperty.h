#pragma once
#include "CoreMinimal.h"
#include "ESBKeyMappingAxisScaleType.h"
#include "ESBKeyMappingStrengthType.h"
#include "ESBUIKeyMappingViewerCategoryType.h"
#include "SBTablePropertyBase.h"
#include "SBKeyMappingTableProperty.generated.h"

USTRUCT()
struct FSBKeyMappingTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    ESBKeyMappingStrengthType RecommendationStrength;
    
    UPROPERTY(EditAnywhere)
    FName MappingGroup;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> DuplicateDenyArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> DuplicateAllowArray;
    
    UPROPERTY(EditAnywhere)
    bool bAllowCombinationKey;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> DuplicateCombinationKeyAllowArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ActionNames;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> AxisNames;
    
    UPROPERTY(EditAnywhere)
    ESBKeyMappingAxisScaleType AxisScaleType;
    
    UPROPERTY(EditAnywhere)
    FString SlotName;
    
    UPROPERTY(EditAnywhere)
    FString SlotDesc;
    
    UPROPERTY(EditAnywhere)
    FString MoviePath;
    
    UPROPERTY(EditAnywhere)
    FString ImagePath;
    
    UPROPERTY(EditAnywhere)
    TArray<ESBUIKeyMappingViewerCategoryType> ViewerCategoryTypes;
    
    UPROPERTY(EditAnywhere)
    int32 ViewerPriority;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBKeyMappingTableProperty();
};


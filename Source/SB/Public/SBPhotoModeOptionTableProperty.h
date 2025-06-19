#pragma once
#include "CoreMinimal.h"
#include "ESBPhotoModeCameraType.h"
#include "ESBPhotoModeOptionType.h"
#include "ESBPhotoModeOptionUISlotType.h"
#include "ESBUIPhotoModeTab.h"
#include "SBTablePropertyBase.h"
#include "SBPhotoModeOptionTableProperty.generated.h"

USTRUCT()
struct FSBPhotoModeOptionTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBPhotoModeOptionType> OptionType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBPhotoModeCameraType> CameraType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBPhotoModeOptionUISlotType> UISlotType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBUIPhotoModeTab> PhotoModeUITab;
    
    UPROPERTY(EditAnywhere)
    bool bLocked;
    
    UPROPERTY(EditAnywhere)
    FName UIOperateVariableName;
    
    UPROPERTY(EditAnywhere)
    FString ChangeNoticeStringKey;
    
    UPROPERTY(EditAnywhere)
    float InitialValue;
    
    UPROPERTY(EditAnywhere)
    float DefaultValue;
    
    UPROPERTY(EditAnywhere)
    float MinValue;
    
    UPROPERTY(EditAnywhere)
    float MaxValue;
    
    UPROPERTY(EditAnywhere)
    int32 FloatValueDecimalRoundPoint;
    
    UPROPERTY(EditAnywhere)
    float UIMinValue;
    
    UPROPERTY(EditAnywhere)
    float UIMaxValue;
    
    UPROPERTY(EditAnywhere)
    float UISliderSlotIntervalValue;
    
    UPROPERTY(EditAnywhere)
    float UISliderSlotClickIntervalValue;
    
    UPROPERTY(EditAnywhere)
    float UIErrorTolerance;
    
    UPROPERTY(EditAnywhere)
    FString OptionToUICurvePath;
    
    UPROPERTY(EditAnywhere)
    FString UIToOptionCurvePath;
    
    UPROPERTY(EditAnywhere)
    TArray<TEnumAsByte<ESBPhotoModeOptionType>> DependencyList;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideValueOnLocked;
    
    UPROPERTY(EditAnywhere)
    float OverriddenValueOnLocked;
    
    UPROPERTY(EditAnywhere)
    bool bFreezeCameraOnFocus;
    
    UPROPERTY(EditAnywhere)
    bool bControlActiveLight;
    
    UPROPERTY(EditAnywhere)
    bool bSetDefaultToFinalPostProcessing;
    
    UPROPERTY(EditAnywhere)
    bool bEnableValueSnapToNearestUI;
    
    UPROPERTY(EditAnywhere)
    FName MaterialMaskValue1;
    
    UPROPERTY(EditAnywhere)
    TArray<float> FloatArrayValue1;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> OptionStringArray;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> AliasArrayValue1;
    
    UPROPERTY(EditAnywhere)
    float EditorOnlyStepValue;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBPhotoModeOptionTableProperty();
};


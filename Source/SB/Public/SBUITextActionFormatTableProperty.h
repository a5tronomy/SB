#pragma once
#include "CoreMinimal.h"
#include "ESBGameOptionSwipeShortCutType.h"
#include "ESBGameOptionType.h"
#include "ESBKeyMappingAxisScaleType.h"
#include "SBTablePropertyBase.h"
#include "SBUITextActionFormatTableProperty.generated.h"

USTRUCT()
struct FSBUITextActionFormatTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName Group;
    
    UPROPERTY(EditAnywhere)
    ESBGameOptionType GameOptionType;
    
    UPROPERTY(EditAnywhere)
    FName GameOptionRedirectValue1;
    
    UPROPERTY(EditAnywhere)
    FName GameOptionRedirectValue2;
    
    UPROPERTY(EditAnywhere)
    FName StreamInputRedirectValue;
    
    UPROPERTY(EditAnywhere)
    FName Platform;
    
    UPROPERTY(EditAnywhere)
    FName FallBackGroupAlias;
    
    UPROPERTY(EditAnywhere)
    FString StringTableNamespace;
    
    UPROPERTY(EditAnywhere)
    FString StringTableKey;
    
    UPROPERTY(EditAnywhere)
    FString StringFormat;
    
    UPROPERTY(EditAnywhere)
    FString Action1;
    
    UPROPERTY(EditAnywhere)
    int32 SortAction1;
    
    UPROPERTY(EditAnywhere)
    FString Action2;
    
    UPROPERTY(EditAnywhere)
    int32 SortAction2;
    
    UPROPERTY(EditAnywhere)
    FString Action3;
    
    UPROPERTY(EditAnywhere)
    int32 SortAction3;
    
    UPROPERTY(EditAnywhere)
    FString Action4;
    
    UPROPERTY(EditAnywhere)
    int32 SortAction4;
    
    UPROPERTY(EditAnywhere)
    FString Action5;
    
    UPROPERTY(EditAnywhere)
    int32 SortAction5;
    
    UPROPERTY(EditAnywhere)
    FString InputDefine1;
    
    UPROPERTY(EditAnywhere)
    int32 SortInputDefine1;
    
    UPROPERTY(EditAnywhere)
    FString InputDefine2;
    
    UPROPERTY(EditAnywhere)
    int32 SortInputDefine2;
    
    UPROPERTY(EditAnywhere)
    FString InputDefine3;
    
    UPROPERTY(EditAnywhere)
    int32 SortInputDefine3;
    
    UPROPERTY(EditAnywhere)
    FString InputDefine4;
    
    UPROPERTY(EditAnywhere)
    int32 SortInputDefine4;
    
    UPROPERTY(EditAnywhere)
    FString InputDefine5;
    
    UPROPERTY(EditAnywhere)
    int32 SortInputDefine5;
    
    UPROPERTY(EditAnywhere)
    FString Axis1;
    
    UPROPERTY(EditAnywhere)
    ESBKeyMappingAxisScaleType AxisScale1;
    
    UPROPERTY(EditAnywhere)
    int32 SortAxis1;
    
    UPROPERTY(EditAnywhere)
    FString Axis2;
    
    UPROPERTY(EditAnywhere)
    ESBKeyMappingAxisScaleType AxisScale2;
    
    UPROPERTY(EditAnywhere)
    int32 SortAxis2;
    
    UPROPERTY(EditAnywhere)
    FString Axis3;
    
    UPROPERTY(EditAnywhere)
    ESBKeyMappingAxisScaleType AxisScale3;
    
    UPROPERTY(EditAnywhere)
    int32 SortAxis3;
    
    UPROPERTY(EditAnywhere)
    FString Axis4;
    
    UPROPERTY(EditAnywhere)
    ESBKeyMappingAxisScaleType AxisScale4;
    
    UPROPERTY(EditAnywhere)
    int32 SortAxis4;
    
    UPROPERTY(EditAnywhere)
    FString Axis5;
    
    UPROPERTY(EditAnywhere)
    ESBKeyMappingAxisScaleType AxisScale5;
    
    UPROPERTY(EditAnywhere)
    int32 SortAxis5;
    
    UPROPERTY(EditAnywhere)
    ESBGameOptionSwipeShortCutType SwipeOption;
    
    UPROPERTY(EditAnywhere)
    int32 SortSwipeOption;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    SB_API FSBUITextActionFormatTableProperty();
};


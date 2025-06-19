#pragma once
#include "CoreMinimal.h"
#include "ESBData.h"
#include "ESBInteractionEventType.h"
#include "SBExecCustomStruct.generated.h"

class USBDataNodeBase;

USTRUCT(BlueprintType)
struct SB_API FSBExecCustomStruct {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName DataAlias;
    
    UPROPERTY()
    FString DataAssetPath;
    
    UPROPERTY()
    FName NameValue;
    
    UPROPERTY()
    TEnumAsByte<ESBData> DataTableType;
    
    UPROPERTY()
    TEnumAsByte<ESBInteractionEventType> EventActionType;
    
    UPROPERTY()
    int32 IntValue;
    
    UPROPERTY()
    float FloatValue;
    
    UPROPERTY()
    FString StrValue;
    
    UPROPERTY()
    FString Str2Value;
    
    UPROPERTY()
    FString StrEnumValue;
    
    UPROPERTY()
    bool bBoolValue;
    
    UPROPERTY()
    int32 CustomType;
    
    UPROPERTY()
    TArray<FName> CustomNameList;
    
    UPROPERTY()
    TArray<FString> CustomStringList;
    
    UPROPERTY()
    USBDataNodeBase* LinkNode;
    
    FSBExecCustomStruct();
};


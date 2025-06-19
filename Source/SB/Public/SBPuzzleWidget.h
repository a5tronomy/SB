#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBBufferDataSlot.h"
#include "ESBInputAxisType.h"
#include "SBUserWidget.h"
#include "SBPuzzleWidget.generated.h"

UCLASS(EditInlineNew)
class USBPuzzleWidget : public USBUserWidget {
    GENERATED_BODY()
public:
    USBPuzzleWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void StartPuzzle(const TArray<bool>& ConditionDataArr, const TArray<FString>& StringDataArr, bool IsSuccess);
    
    UFUNCTION(BlueprintCallable)
    void SetVectorBufferData(TEnumAsByte<ESBBufferDataSlot> Slot_, FVector Data);
    
    UFUNCTION(BlueprintCallable)
    void SetStringBufferData(TEnumAsByte<ESBBufferDataSlot> Slot_, const FString& Data);
    
    UFUNCTION(BlueprintCallable)
    void SetPuzzleData(const FString& PuzzleData);
    
    UFUNCTION(BlueprintCallable)
    void SetIntBufferData(TEnumAsByte<ESBBufferDataSlot> Slot_, int32 Data);
    
    UFUNCTION(BlueprintCallable)
    void SetFloatBufferData(TEnumAsByte<ESBBufferDataSlot> Slot_, float Data);
    
    UFUNCTION(BlueprintCallable)
    void SetBoolBufferData(TEnumAsByte<ESBBufferDataSlot> Slot_, bool Data);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InputRightAxisY(float Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InputRightAxisX(float Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InputLeftAxisY(float Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InputLeftAxisX(float Value);
    
    UFUNCTION()
    void InputAxis(float Value, TEnumAsByte<ESBInputAxisType> InputAxisType);
    
    UFUNCTION(BlueprintCallable)
    FVector GetVectorBufferData(TEnumAsByte<ESBBufferDataSlot> Slot_);
    
    UFUNCTION(BlueprintCallable)
    FString GetStringBufferData(TEnumAsByte<ESBBufferDataSlot> Slot_);
    
    UFUNCTION(BlueprintCallable)
    FString GetPuzzleData();
    
    UFUNCTION(BlueprintCallable)
    int32 GetIntBufferData(TEnumAsByte<ESBBufferDataSlot> Slot_);
    
    UFUNCTION(BlueprintCallable)
    float GetFloatBufferData(TEnumAsByte<ESBBufferDataSlot> Slot_);
    
    UFUNCTION(BlueprintCallable)
    bool GetBoolBufferData(TEnumAsByte<ESBBufferDataSlot> Slot_);
    
    UFUNCTION(BlueprintCallable)
    void CompletePuzzle();
    
};


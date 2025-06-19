#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBTypeWriterWidget.generated.h"

class USBTypeWriterTextBlock;

UCLASS(EditInlineNew)
class SB_API USBTypeWriterWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TWeakObjectPtr<USBTypeWriterTextBlock> LineText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LetterPlayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LetterSpacePlayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EndHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinDesiredWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MarginWidth;
    
private:
    UPROPERTY()
    FText CurrentLine;
    
public:
    USBTypeWriterWidget();

    UFUNCTION(BlueprintCallable)
    void SkipToLineEnd();
    
    UFUNCTION(BlueprintCallable)
    void PlayLine(const FText& InLine, float InDuration);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayLetter(bool bLastCharSpace, const FString& inLastCharacter);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLineFinishedPlaying();
    
public:
    UFUNCTION(BlueprintPure)
    bool HasFinishedPlayingLine() const;
    
    UFUNCTION(BlueprintPure)
    void GetCurrentLine(FText& OutLine) const;
    
};


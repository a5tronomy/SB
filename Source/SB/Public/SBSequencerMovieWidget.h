#pragma once
#include "CoreMinimal.h"
#include "SBSequencerBaseWidget.h"
#include "SBSequencerMovieWidget.generated.h"

class UBinkMediaPlayer;

UCLASS(EditInlineNew)
class USBSequencerMovieWidget : public USBSequencerBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UBinkMediaPlayer> BinkMediaPlayerTemplate;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString BKAssetPath;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float FadeInTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    float FadeOutTime;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bMovieAutoDestroy;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UBinkMediaPlayer> BinkMoviePlayer;
    
    USBSequencerMovieWidget();

    UFUNCTION(BlueprintPure)
    UBinkMediaPlayer* SequenceBinkPlayer();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseBinkPlayer();
    
    UFUNCTION(BlueprintCallable)
    bool IsValidBinkPlayer();
    
};


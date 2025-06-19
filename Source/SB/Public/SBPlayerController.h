#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SBAutoGameSavePhase.h"
#include "SBSaveLoadContext.h"
#include "SBPlayerController.generated.h"

class USBPlayerInput;
class USoundBase;
class UUserWidget;

UCLASS()
class SB_API ASBPlayerController : public APlayerController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    USBPlayerInput* InputHandler;
    
    UPROPERTY(Transient)
    bool ShowFirstUI;
    
    UPROPERTY(Instanced, Transient)
    UUserWidget* DebugSystemInfoWidget;
    
public:
    UPROPERTY(Transient)
    TMap<FName, uint8> InputActionStateMap;
    
    UPROPERTY(Transient)
    bool bViewportLostFocused;
    
    UPROPERTY(Transient)
    bool bBlcokControllerInputWhenPlayCameraAnim;
    
protected:
    UPROPERTY(Transient)
    TArray<USoundBase*> SafeHapticSounds;
    
    UPROPERTY(Config)
    bool bUseAutoSave;
    
    UPROPERTY(Config)
    float AutoSaveIntervalSec;
    
    UPROPERTY(Config)
    float AutoSaveRealSaveStartSec;
    
    UPROPERTY(Config)
    float AutoSaveRealSaveDurationSec;
    
    UPROPERTY(Config)
    FString AutoSaveSlotName;
    
    UPROPERTY(Config)
    FString ManualSaveSlotName;
    
    UPROPERTY(Config)
    FString SystemSaveSlotName;
    
    UPROPERTY(Config)
    int32 AutoSaveSlotMaxNum;
    
    UPROPERTY(Config)
    int32 LanguageSlotIndex;
    
    UPROPERTY(Config)
    bool bUseAudioListenerBoneLoc;
    
    UPROPERTY(Config)
    FName AudioListenerBoneName;
    
    UPROPERTY(Transient)
    FSBAutoGameSavePhase AutoSavePhase;
    
    UPROPERTY(Transient)
    FSBSaveLoadContext CurrentSaveContext;
    
    UPROPERTY(Transient)
    FSBSaveLoadContext CurrentLoadContext;
    
    UPROPERTY(Transient)
    TArray<float> DebugInfoTouchTimes;
    
    UPROPERTY(Transient)
    int32 DebugInfoTouchCurIndex;
    
public:
    ASBPlayerController(const FObjectInitializer& ObjectInitializer);

};


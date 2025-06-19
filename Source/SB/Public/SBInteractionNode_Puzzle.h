#pragma once
#include "CoreMinimal.h"
#include "ESBInteractShowPlayRuleType.h"
#include "ESBInteractionMoveType.h"
#include "ESBPuzzleTextType.h"
#include "ESBUILogicType.h"
#include "SBInteractionExecPinInfo.h"
#include "SBInteractionNode_Base.h"
#include "SBInteractionNode_Puzzle.generated.h"

class USBShowData;
class USoundBase;

UCLASS(EditInlineNew)
class SB_API USBInteractionNode_Puzzle : public USBInteractionNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSBInteractionExecPinInfo ExecInput;
    
    UPROPERTY()
    FString PuzzleWidgetPath;
    
    UPROPERTY()
    TEnumAsByte<ESBUILogicType> OpenUIType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBPuzzleTextType> PuzzleInputText;
    
    UPROPERTY(VisibleAnywhere)
    FString OwnerShow;
    
    UPROPERTY(VisibleAnywhere)
    FString CasterShow;
    
    UPROPERTY(VisibleAnywhere)
    TSoftObjectPtr<USBShowData> OwnerShowAsset;
    
    UPROPERTY(VisibleAnywhere)
    TSoftObjectPtr<USBShowData> CasterShowAsset;
    
    UPROPERTY(VisibleAnywhere)
    TSoftObjectPtr<USBShowData> CasterLoopShowAsset;
    
    UPROPERTY(VisibleAnywhere)
    int32 ShowLoopCount;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBInteractShowPlayRuleType> ShowPlayRuleType;
    
    UPROPERTY(VisibleAnywhere)
    USoundBase* Success_Sound;
    
    UPROPERTY(VisibleAnywhere)
    USoundBase* Fail_Sound;
    
    UPROPERTY(VisibleAnywhere)
    float DelayTime;
    
    UPROPERTY(VisibleAnywhere)
    bool bActorBlockAll;
    
    UPROPERTY(VisibleAnywhere)
    bool bCameraLock;
    
    UPROPERTY(VisibleAnywhere)
    bool bWaitFinsiResult;
    
    UPROPERTY(VisibleAnywhere)
    bool bHideGameUI;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<ESBInteractionMoveType> InteractionMoveType;
    
    UPROPERTY()
    FSBInteractionExecPinInfo Result_Success;
    
    UPROPERTY()
    FSBInteractionExecPinInfo Result_Fail;
    
    UPROPERTY()
    TArray<FSBInteractionExecPinInfo> InputConditions;
    
    USBInteractionNode_Puzzle();

};


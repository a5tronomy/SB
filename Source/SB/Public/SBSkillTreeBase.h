#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "ESBSkillTreeUnlockAnimationType.h"
#include "ESBUISkillTreeType.h"
#include "SBSkillSlotBases.h"
#include "SBSkillSlotLines.h"
#include "SBSkillSlotRequiredInfo.h"
#include "SBSkillTresUnlockFinishEventDelegate.h"
#include "SBUserWidget.h"
#include "SBSkillTreeBase.generated.h"

class UCanvasPanel;
class USBSkillSlotBase;
class USoundBase;
class UWidget;

UCLASS(EditInlineNew)
class USBSkillTreeBase : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    USBUserWidget* SkillCategory;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UCanvasPanel* SkillSlotPanel;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UCanvasPanel* SkillLinePanel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESBUISkillTreeType SkillTreeType;
    
    UPROPERTY(BlueprintReadOnly)
    bool bLockTree;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESBSkillTreeUnlockAnimationType UnlockAnimationType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESBSkillTreeUnlockAnimationType NewGamePlusUnlockAnimationType;
    
private:
    UPROPERTY(EditAnywhere)
    USoundBase* SlotFocusChangedSound;
    
    UPROPERTY(VisibleAnywhere)
    TMap<int32, FSBSkillSlotBases> SkillSlotMap;
    
    UPROPERTY(VisibleAnywhere)
    TMap<int32, FSBSkillSlotLines> SkillLineMap;
    
    UPROPERTY(VisibleAnywhere)
    TMap<USBSkillSlotBase*, FSBSkillSlotRequiredInfo> RequiredInfoMap;
    
    UPROPERTY(EditAnywhere)
    FName SkillTreeAlias;
    
public:
    USBSkillTreeBase();

protected:
    UFUNCTION(BlueprintCallable)
    void UnbindToUnlockAnimationFinished();
    
    UFUNCTION(BlueprintCallable)
    void SetUnlockPresentationProgress(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void ReadyUnlockAnimationByNewGamePlus();
    
    UFUNCTION(BlueprintCallable)
    void ReadyUnlockAnimationByAchievement(FName AchievementAlias);
    
    UFUNCTION(BlueprintCallable)
    void PlayUnlockAnimationByNewGamePlus();
    
    UFUNCTION(BlueprintCallable)
    void PlayUnlockAnimationByAchievement(FName AchievementAlias);
    
    UFUNCTION(BlueprintCallable)
    void PlayUnlockAnimation();
    
    UFUNCTION(BlueprintCallable)
    UWidget* NavigationTreeCustom(EUINavigation InNavigation, USBSkillSlotBase* inSkillSlot, int32 InSubNavigationIndex);
    
    UFUNCTION(BlueprintCallable)
    UWidget* NavigationTree(EUINavigation InNavigation);
    
public:
    UFUNCTION(BlueprintPure)
    USBUserWidget* GetSkillCategory() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void BindToUnlockAnimationFinished(FSBSkillTresUnlockFinishEvent Delegate);
    
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineBaseTypes.h"
#include "InputCoreTypes.h"
#include "Types/SlateEnums.h"
#include "Blueprint/UserWidget.h"
#include "ESBTextureStyleType.h"
#include "ESBUIInputAxisType.h"
#include "ESBUILogicType.h"
#include "ESBZoneEventType.h"
#include "SBUserWidgetInputBindInfo.h"
#include "Templates/SubclassOf.h"
#include "SBUserWidget.generated.h"

class UListView;
class UObject;
class UPanelWidget;
class USBTextureStyleSetData;
class USBUserWidget;
class USBUserWidgetEventObserver;
class UTexture2D;
class UTileView;
class UWidget;

UCLASS(Abstract, EditInlineNew)
class SB_API USBUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USBUserWidget* ParentWidget;
    
private:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBUILogicType> TargetUILogic;
    
    UPROPERTY(EditAnywhere)
    bool bUseInputOnly;
    
    UPROPERTY(EditAnywhere)
    bool bInputOnlyWhenAllBlock;
    
    UPROPERTY(EditAnywhere)
    float InputOpenBlockTime;
    
    UPROPERTY(EditAnywhere)
    TSet<FName> Tags;
    
    UPROPERTY(EditAnywhere)
    bool bUseGroupFocus;
    
    UPROPERTY(EditAnywhere)
    bool bUseShowMouseCursor;
    
    UPROPERTY(EditAnywhere)
    bool bMouseCursorVisibleWhenKeyboardInput;
    
    UPROPERTY(EditAnywhere)
    bool bIgnorePause;
    
    UPROPERTY(EditAnywhere)
    bool bTickActive;
    
    UPROPERTY(EditAnywhere)
    bool bAccessSuperClassProperty;
    
    UPROPERTY(Transient)
    int32 RemainInvalidateRootCount;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<USBUserWidget> CachedSBUserWidgetListView;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UListView> CachedWidgetListView;
    
    UPROPERTY(Transient)
    bool bActiveMouseCursor;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UListView> RestoreFocusListView;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UObject> RestoreFocusListViewData;
    
    UPROPERTY(Transient)
    int32 RestoreFocusCheckRemainCount;
    
    UPROPERTY(Transient)
    uint8 bCheckEventWidgetFocusRestore: 1;
    
    UPROPERTY(Transient)
    uint8 bBindEventWidgetFocusRestore: 1;
    
    UPROPERTY(Transient)
    TMap<ESBUIInputAxisType, FSBUserWidgetInputBindInfo> PuzzleInputInfoMap;
    
public:
    USBUserWidget();

    UFUNCTION(BlueprintCallable)
    void SetTickActive(bool bActive);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetEnableAutoDestroy(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SendWidgetInputEvent(FName InActionName, TEnumAsByte<EInputEvent> InInputEvent, TEnumAsByte<ESBUILogicType> InTargetLogicType);
    
public:
    UFUNCTION(BlueprintCallable)
    void SelectItemToListView(UObject* ListViewData, TEnumAsByte<ESBUILogicType> inLogicType);
    
    UFUNCTION(BlueprintCallable)
    void RestoreFocusToListView(UListView* ListView, UObject* ListViewData);
    
    UFUNCTION(BlueprintCallable)
    void RequestWidgetFocus(UWidget* InWidget);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDynamicChildUserWidget(USBUserWidget* InSBUserWidget);
    
    UFUNCTION(BlueprintCallable)
    void RemoveChildSBUserWidget(USBUserWidget* SBUserWidget);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnWidgetFocusRestore();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnInputPuzzleRightAxisY(float Value);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnInputPuzzleRightAxisX(float Value);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnInputPuzzleLeftAxisY(float Value);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnInputPuzzleLeftAxisX(float Value);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnExternalUIChange(bool bInIsOpening, bool bIsSteamInputActive);
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyReleaseToListView(FName inNotifyEvent, UObject* ListViewData, TEnumAsByte<ESBUILogicType> inLogicType);
    
    UFUNCTION(BlueprintCallable)
    void NotifyPressToListView(FName inNotifyEvent, UObject* ListViewData, TEnumAsByte<ESBUILogicType> inLogicType, bool inItemSelection);
    
    UFUNCTION(BlueprintCallable)
    void NotifyDoubleClickToListView(FName inNotifyEvent, UObject* ListViewData, TEnumAsByte<ESBUILogicType> inLogicType, bool inItemSelection);
    
    UFUNCTION(BlueprintCallable)
    void NotifyClientRunEvent(TEnumAsByte<ESBZoneEventType> InEventType, FName InAlias);
    
    UFUNCTION(BlueprintCallable)
    void NotifyClickToListView(FName inNotifyEvent, UObject* ListViewData, TEnumAsByte<ESBUILogicType> inLogicType, bool inItemSelection);
    
    UFUNCTION(BlueprintCallable)
    void NotifyBlueprint(const FString& inEvent);
    
    UFUNCTION(BlueprintCallable)
    void LoadBrushAsyncResourceImageWidgets();
    
    UFUNCTION(BlueprintCallable)
    bool LastFocusActive(bool bRecursiveChild);
    
    UFUNCTION(BlueprintCallable)
    bool KeyReleased(FKey InKey);
    
    UFUNCTION(BlueprintCallable)
    bool KeyPressed(FKey InKey);
    
    UFUNCTION(BlueprintCallable)
    bool IsVisiblityParent(bool bRecursive);
    
    UFUNCTION(BlueprintCallable)
    bool IsTickActive();
    
    UFUNCTION(BlueprintCallable)
    bool IsSameParentGroupFoucs(USBUserWidget* InSBUserWidget, FName inWidgetName);
    
    UFUNCTION(BlueprintCallable)
    bool IsManagedParentGroupFocus();
    
    UFUNCTION(BlueprintCallable)
    bool IsKeyDown(FKey InKey);
    
    UFUNCTION(BlueprintCallable)
    bool IsFocusSBUserWidget();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsAutoDestroy();
    
public:
    UFUNCTION(BlueprintCallable)
    void InvalidationRootWindow();
    
    UFUNCTION(BlueprintCallable)
    void InputWidgetUnbind(FName InActionName, TEnumAsByte<EInputEvent> InInputEvent, USBUserWidget* InReceiveTarget);
    
    UFUNCTION(BlueprintCallable)
    bool InputWidgetBind(USBUserWidget* InReceiveTarget, FName InActionName, int32 InPriority, TEnumAsByte<EInputEvent> InInputEvent);
    
    UFUNCTION(BlueprintCallable)
    bool HasFocusActive(bool bRecursiveChild);
    
    UFUNCTION(BlueprintCallable)
    USBUserWidget* GetUserWidgetFromTileView(UTileView* InListView, UObject* InDataObject);
    
    UFUNCTION(BlueprintCallable)
    USBUserWidget* GetUserWidgetFromListView(UListView* InListView, UObject* InDataObject);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetTextureStyleSetKey(USBTextureStyleSetData* InStyle, FKey InKey, TEnumAsByte<ESBTextureStyleType> InStyleType);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetTextureStyleSetAction(USBTextureStyleSetData* InStyle, FName InAction, TEnumAsByte<ESBTextureStyleType> InStyleType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* GetSBNavigation(EUINavigation InNavigation);
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetRightStickVector();
    
    UFUNCTION(BlueprintPure)
    float GetRenderOpacityParent() const;
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetLeftStickVector();
    
    UFUNCTION(BlueprintCallable)
    FName GenerateEventObserverNameKey(FName inWidgetName, FName inEventTag, const FString& inWidgetPath);
    
    UFUNCTION(BlueprintCallable)
    USBUserWidget* FoundParentWidgetHasUILogicType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* FoundFirstFocusWidget();
    
    UFUNCTION(BlueprintCallable)
    USBUserWidgetEventObserver* FindWidgetEventObserverNameEventTag(FName inNameEventTag);
    
    UFUNCTION(BlueprintCallable)
    USBUserWidget* FindParentSBUserWidget(UWidget* InWidget, TEnumAsByte<ESBUILogicType> inLogicType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventWidgetPaused(bool InPause);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventWidgetGroupFocusDeactive(FName InLastWidgetName, USBUserWidget* InLastUserWidget);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventWidgetGroupFocusChanged(FName InLastWidgetName, USBUserWidget* InLastUserWidget, FName InNextWidgetName, USBUserWidget* InNextUserWidget);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventWidgetGroupFocusActive(FName InNextWidgetName, USBUserWidget* InNextUserWidget);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventWidgetFocusDeactive(FName InWidgetTag, UWidget* InWidget, USBUserWidget* InNextUserWidget, FName InNextWidgetTag, UWidget* InNextWidget);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventWidgetFocusActive(FName InWidgetTag, UWidget* InWidget);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventTileViewObjectUpdate(UObject* Data);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void EventReleaseWidget();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void EventNotification(const FString& inEvent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventListViewObjectUpdate(UObject* Data);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void EventInitWidget();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void EventFocusActivate(bool bActivate);
    
    UFUNCTION(BlueprintImplementableEvent)
    void EventFirstWidgetFocus();
    
    UFUNCTION(BlueprintCallable)
    USBUserWidget* CreateDynamicChildUserWidget(TSubclassOf<USBUserWidget> InWidgetClass, UPanelWidget* InPanelWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ConsumeNotifyBlueprint(const FString& inEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ConsumeInputEvent(USBUserWidget* InUserWidget, FName InActionName, TEnumAsByte<EInputEvent> InInputEvent);
    
    UFUNCTION(BlueprintCallable)
    void CloseSelf();
    
    UFUNCTION(BlueprintCallable)
    void ClearBrushAsyncResourceImageWidgets();
    
    UFUNCTION(BlueprintCallable)
    void AddChildSBUserWidget(USBUserWidget* SBUserWidget, bool InNotRelease);
    
};


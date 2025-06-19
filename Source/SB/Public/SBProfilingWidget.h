#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "SBProfilingWidget.generated.h"

UCLASS(EditInlineNew)
class USBProfilingWidget : public USBUserWidget {
    GENERATED_BODY()
public:
    USBProfilingWidget();

private:
    UFUNCTION()
    void OnClickedUnload();
    
    UFUNCTION()
    void OnClickedObjectToggleStaticVisible();
    
    UFUNCTION()
    void OnClickedObjectToggleSkeletalVisible();
    
    UFUNCTION()
    void OnClickedObjectToggleAllVisible();
    
    UFUNCTION()
    void OnClickedObjectCollect();
    
    UFUNCTION()
    void OnClickedMenu_TextureList();
    
    UFUNCTION()
    void OnClickedMenu_ObjectList();
    
    UFUNCTION()
    void OnClickedMenu_LevelStream();
    
    UFUNCTION()
    void OnClickedLoad();
    
    UFUNCTION()
    void OnClickedCollectTextureList();
    
    UFUNCTION()
    void OnClickedClose();
    
    UFUNCTION()
    void OnClickedAllUnload();
    
    UFUNCTION()
    void OnClickedAllLoad();
    
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/AudioComponent.h"
#include "ESBUILogicType.h"
#include "SBSoundComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBSoundComponent : public UAudioComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bMuteWhenLoading;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bMuteWhenWarp;
    
    USBSoundComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetStopWhenOwnerDestroyed(bool bInStopWhenOwnerDestroyed);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnZoneWarpEvent(const FName& InEventAlias);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStopLevelSequence(const FSoftObjectPath& MovieSceneSequencePath);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayLevelSequence(const FSoftObjectPath& MovieSceneSequencePath);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPendingCreateWidget(TEnumAsByte<ESBUILogicType> UILogicType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDestroyMasterWidget(TEnumAsByte<ESBUILogicType> UILogicType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCreateMasterWidget(TEnumAsByte<ESBUILogicType> UILogicType);
    
};


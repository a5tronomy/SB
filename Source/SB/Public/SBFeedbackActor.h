#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBFeedbackActor.generated.h"

class UBillboardComponent;
class USBUserWidget;
class USBWidgetComponent;
class USceneComponent;
class UTexture2D;

UCLASS()
class SB_API ASBFeedbackActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* SpriteBackLog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* SpriteCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* SpriteProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* SpriteComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* SpriteDestruct;
    
protected:
    UPROPERTY(Transient)
    bool inited;
    
    UPROPERTY(Transient)
    FName IssueName;
    
    UPROPERTY(Instanced, Transient)
    USBWidgetComponent* CacheWidgetComponent;
    
    UPROPERTY(Instanced, Transient)
    UBillboardComponent* CacheBillboardComponent;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<USBUserWidget> CacheWidget;
    
    UPROPERTY(Instanced, Transient)
    TArray<USceneComponent*> WidgetInteractionComps;
    
public:
    ASBFeedbackActor(const FObjectInitializer& ObjectInitializer);

};


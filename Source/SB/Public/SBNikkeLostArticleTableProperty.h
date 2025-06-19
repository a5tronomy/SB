#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBNikkeLostArticleTableProperty.generated.h"

USTRUCT()
struct FSBNikkeLostArticleTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ClearNikkeStageAlias;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> ClearSequencePath;
    
    UPROPERTY(EditAnywhere)
    TArray<float> ClearSequenceUITime;
    
    UPROPERTY(EditAnywhere)
    FName ClearRewardGroupAlias;
    
    UPROPERTY(EditAnywhere)
    FName Category;
    
    UPROPERTY(EditAnywhere)
    FString ImageAssetPath;
    
    UPROPERTY(EditAnywhere)
    FString MusicQNRTAssetPath;
    
    UPROPERTY(EditAnywhere)
    bool bSensibleVisualizer;
    
    UPROPERTY(EditAnywhere)
    FName ItemAlias;
    
    UPROPERTY(EditAnywhere)
    bool bDisplayDescFunction;
    
    UPROPERTY(EditAnywhere)
    float OverrideAutoInteractionDistance;
    
    UPROPERTY(EditAnywhere)
    FName DontDetectConditionGroup;
    
    SB_API FSBNikkeLostArticleTableProperty();
};


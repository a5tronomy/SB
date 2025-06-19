#pragma once
#include "CoreMinimal.h"
#include "ArtifactSettings.generated.h"

USTRUCT(BlueprintType)
struct FArtifactSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString ArtifactName;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FString ClientId;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FString ClientSecret;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FString ProductId;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FString SandboxId;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FString DeploymentId;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FString EncryptionKey;
    
    ONLINESUBSYSTEMEOS_API FArtifactSettings();
};


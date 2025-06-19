#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "ESubstanceInputType.h"
#include "SubstanceFloatInputDesc.h"
#include "SubstanceInstanceDesc.h"
#include "SubstanceIntInputDesc.h"
#include "SubstanceGraphInstance.generated.h"

class UMaterial;
class UMaterialInstanceConstant;
class UMaterialInstanceDynamic;
class USubstanceInstanceFactory;
class USubstanceOutputData;
class UTexture2D;

UCLASS(BlueprintType)
class SUBSTANCECORE_API USubstanceGraphInstance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString PackageURL;
    
    UPROPERTY()
    USubstanceInstanceFactory* ParentFactory;
    
    UPROPERTY()
    TMap<uint32, UTexture2D*> ImageSources;
    
    UPROPERTY(EditAnywhere)
    UMaterial* CreatedMaterial;
    
    UPROPERTY(EditAnywhere)
    UMaterialInstanceConstant* ConstantCreatedMaterial;
    
    UPROPERTY(EditAnywhere)
    UMaterialInstanceDynamic* DynamicCreatedMaterial;
    
    UPROPERTY()
    TMap<int32, FGuid> OutputTextureLinkData;
    
    UPROPERTY()
    TMap<uint32, USubstanceOutputData*> OutputInstances;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsFrozen;
    
    USubstanceGraphInstance();

    UFUNCTION(BlueprintCallable)
    void SetInputString(const FString& Identifier, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetInputInt(const FString& Identifier, const TArray<int32>& InputValues);
    
    UFUNCTION(BlueprintCallable)
    bool SetInputImg(const FString& InputName, UObject* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetInputFloat(const FString& Identifier, const TArray<float>& InputValues);
    
    UFUNCTION(BlueprintCallable)
    void SetInputColor(const FString& Identifier, const FLinearColor& Color);
    
    UFUNCTION(BlueprintCallable)
    void SetInputBool(const FString& Identifier, bool boolean);
    
    UFUNCTION(BlueprintCallable)
    FSubstanceIntInputDesc GetIntInputDesc(const FString& Identifier);
    
    UFUNCTION(BlueprintCallable)
    FSubstanceInstanceDesc GetInstanceDesc();
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<ESubstanceInputType> GetInputType(const FString& InputName);
    
    UFUNCTION(BlueprintCallable)
    FString GetInputString(const FString& Identifier);
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetInputNames();
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetInputInt(const FString& Identifier);
    
    UFUNCTION(BlueprintCallable)
    TArray<float> GetInputFloat(const FString& Identifier);
    
    UFUNCTION(BlueprintCallable)
    FLinearColor GetInputColor(const FString& Identifier);
    
    UFUNCTION(BlueprintCallable)
    bool GetInputBool(const FString& Identifier);
    
    UFUNCTION(BlueprintCallable)
    FSubstanceFloatInputDesc GetFloatInputDesc(const FString& Identifier);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetDynamicMaterialInstance(FName Name, UMaterial* InParentMaterial);
    
};


#pragma once
#include "CoreMinimal.h"
#include "Engine/Texture2DDynamic.h"
#include "Engine/Texture.h"
#include "SubstanceTexture2D.generated.h"

class USubstanceGraphInstance;

UCLASS()
class SUBSTANCECORE_API USubstanceTexture2D : public UTexture2DDynamic {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    USubstanceGraphInstance* ParentInstance;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<TextureAddress> AddressX;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<TextureAddress> AddressY;
    
    UPROPERTY()
    bool bCooked;
    
    USubstanceTexture2D();

};


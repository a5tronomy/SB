#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Texture.h"
#include "Engine/Texture.h"
#include "BinkMediaTexture.generated.h"

class UBinkMediaPlayer;

UCLASS()
class BINKMEDIAPLAYER_API UBinkMediaTexture : public UTexture {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<TextureAddress> AddressX;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<TextureAddress> AddressY;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UBinkMediaPlayer* MediaPlayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EPixelFormat> PixelFormat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool tonemap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OutputNits;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Alpha;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DecodeSRGB;
    
    UBinkMediaTexture();

    UFUNCTION(BlueprintCallable)
    void SetMediaPlayer(UBinkMediaPlayer* InMediaPlayer);
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
};


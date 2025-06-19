#pragma once
#include "CoreMinimal.h"
#include "SBTablePropertyBase.h"
#include "SBArtBookTableProperty.generated.h"

USTRUCT()
struct FSBArtBookTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY(EditAnywhere)
    FName GroupAlias;
    
    UPROPERTY(EditAnywhere)
    FString TitleStringKey;
    
    UPROPERTY(EditAnywhere)
    FString ArtistStringKey;
    
    UPROPERTY(EditAnywhere)
    FString ImagePath;
    
    SB_API FSBArtBookTableProperty();
};


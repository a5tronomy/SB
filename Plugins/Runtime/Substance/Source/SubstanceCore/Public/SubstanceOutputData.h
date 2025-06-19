#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "Materials/MaterialLayersFunctions.h"
#include "SubstanceOutputData.generated.h"

class USubstanceGraphInstance;

UCLASS()
class SUBSTANCECORE_API USubstanceOutputData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UObject* ConnectedObject;
    
    UPROPERTY()
    FMaterialParameterInfo ParamInfo;
    
    UPROPERTY()
    USubstanceGraphInstance* ParentInstance;
    
    UPROPERTY()
    FGuid CacheGuid;
    
    USubstanceOutputData();

};


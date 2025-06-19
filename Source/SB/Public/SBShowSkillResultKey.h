#pragma once
#include "CoreMinimal.h"
#include "ESBShowSkillResultTableFieldType.h"
#include "SBAliasSkillResult.h"
#include "SBShowKey.h"
#include "SBSkillResultTableProperty.h"
#include "SBShowSkillResultKey.generated.h"

UCLASS(EditInlineNew)
class SB_API USBShowSkillResultKey : public USBShowKey {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FSBAliasSkillResult SkillResultAlias;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESBShowSkillResultTableFieldType> TableFieldType;
    
    UPROPERTY(VisibleAnywhere)
    FSBSkillResultTableProperty SkillResultTableProperty;
    
    USBShowSkillResultKey();

};


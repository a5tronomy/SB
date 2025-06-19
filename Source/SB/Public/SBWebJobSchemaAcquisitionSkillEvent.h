#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaPlayerEventHeader.h"
#include "SBWebJobSchemaAcquisitionSkillEvent.generated.h"

USTRUCT()
struct FSBWebJobSchemaAcquisitionSkillEvent : public FSBWebJobSchemaPlayerEventHeader {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString event_type;
    
    UPROPERTY()
    FString skill_id;
    
    UPROPERTY()
    FString skill_category;
    
    UPROPERTY()
    int32 consume_sp;
    
    SB_API FSBWebJobSchemaAcquisitionSkillEvent();
};


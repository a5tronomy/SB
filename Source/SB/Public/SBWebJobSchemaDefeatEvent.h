#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaItemAmount.h"
#include "SBWebJobSchemaPlayerEventHeader.h"
#include "SBWebJobSchemaSkillAmount.h"
#include "SBWebJobSchemaDefeatEvent.generated.h"

USTRUCT()
struct FSBWebJobSchemaDefeatEvent : public FSBWebJobSchemaPlayerEventHeader {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString event_type;
    
    UPROPERTY()
    FString defeat_type;
    
    UPROPERTY()
    FString defeat_id;
    
    UPROPERTY()
    int32 defeat_result;
    
    UPROPERTY()
    int32 defeat_time;
    
    UPROPERTY()
    int32 apply_damage_amount;
    
    UPROPERTY()
    int32 suffer_damage_amount;
    
    UPROPERTY()
    int32 item_stack_recovery_potion;
    
    UPROPERTY()
    int32 max_hp;
    
    UPROPERTY()
    int32 max_shield;
    
    UPROPERTY()
    int32 max_beta_gauge;
    
    UPROPERTY()
    int32 max_burst_gauge;
    
    UPROPERTY()
    int32 physic_attack_power;
    
    UPROPERTY()
    int32 range_attack_power;
    
    UPROPERTY()
    int32 shield_attack_power;
    
    UPROPERTY()
    int32 critical_percentage;
    
    UPROPERTY()
    int32 critical_value_rate;
    
    UPROPERTY()
    TArray<FSBWebJobSchemaItemAmount> item_use_count;
    
    UPROPERTY()
    TArray<FSBWebJobSchemaSkillAmount> damage_by_skill;
    
    UPROPERTY()
    TArray<FSBWebJobSchemaSkillAmount> damaged_by_skill;
    
    UPROPERTY()
    TArray<FSBWebJobSchemaSkillAmount> skill_count;
    
    UPROPERTY()
    TArray<FString> equip_exo_spine_list;
    
    UPROPERTY()
    TArray<FString> equip_gear_list;
    
    UPROPERTY()
    FString equip_nano_suit;
    
    UPROPERTY()
    int32 SPLevel;
    
    UPROPERTY()
    int32 gearslot;
    
    UPROPERTY()
    int32 protectorslot;
    
    SB_API FSBWebJobSchemaDefeatEvent();
};


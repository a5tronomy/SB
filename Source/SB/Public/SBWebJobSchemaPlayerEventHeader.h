#pragma once
#include "CoreMinimal.h"
#include "SBWebJobSchemaBase.h"
#include "SBWebJobSchemaPosition.h"
#include "SBWebJobSchemaPlayerEventHeader.generated.h"

USTRUCT()
struct FSBWebJobSchemaPlayerEventHeader : public FSBWebJobSchemaBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString user_id;
    
    UPROPERTY()
    uint64 time_since_playthrough_newgame;
    
    UPROPERTY()
    FSBWebJobSchemaPosition pos;
    
    UPROPERTY()
    FString level_id;
    
    UPROPERTY()
    FString zone_id;
    
    UPROPERTY()
    FString Difficulty;
    
    UPROPERTY()
    bool new_game_plus;
    
    UPROPERTY()
    FString public_ip;
    
    UPROPERTY()
    FString private_ip;
    
    UPROPERTY()
    FString Tag;
    
    UPROPERTY()
    int32 save_slot_index;
    
    UPROPERTY()
    uint32 total_memory;
    
    UPROPERTY()
    uint32 texture_memory;
    
    UPROPERTY()
    uint32 rander_target_memory;
    
    UPROPERTY()
    FString newgame_create_time;
    
    UPROPERTY()
    FString activity;
    
    UPROPERTY()
    FString activity_list;
    
    UPROPERTY()
    bool qa_branch;
    
    SB_API FSBWebJobSchemaPlayerEventHeader();
};


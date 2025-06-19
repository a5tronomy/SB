#include "SBWebJobSchemaPlayerEventHeader.h"

FSBWebJobSchemaPlayerEventHeader::FSBWebJobSchemaPlayerEventHeader() {
    this->time_since_playthrough_newgame = 0;
    this->new_game_plus = false;
    this->save_slot_index = 0;
    this->total_memory = 0;
    this->texture_memory = 0;
    this->rander_target_memory = 0;
    this->qa_branch = false;
}


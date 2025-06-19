#include "SBSaveGameDataStorage.h"

FSBSaveGameDataStorage::FSBSaveGameDataStorage() {
    this->bValidSaveData = false;
    this->GameDifficulty = ESBGameDifficultyType::NormalMode;
    this->ActionAssist = ESBGameOptionActionAssistType::Disable;
    this->NewGamePlusPlayCount = 0;
    this->bNoticedNewGamePlus = false;
    this->bEnableSnapShot = false;
    this->bFirstTimeTrainingRoom = false;
    this->PlayTime = 0;
    this->NewGameCreateTime = 0;
}


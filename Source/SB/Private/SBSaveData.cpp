#include "SBSaveData.h"

USBSaveData::USBSaveData() {
    this->BaseFilePath = TEXT("../../../SB/Content/System/Waypoint/G03/Shortcut01.sav");
    this->SavFilePath = TEXT("../../../SB/Content/System/Waypoint/G03/Shortcut01.sav");
    this->SavFileVersion = 1;
    this->CSVFilePath = TEXT("../../../SB/Content/System/Waypoint/G03/Shortcut01.sav");
    this->LastInteractCampEnvSpawnAlias = TEXT("SD_10_EnvS_010");
    this->SkillAliases.AddDefaulted(22);
    this->SP = 0;
    this->SPLevel = 1;
}



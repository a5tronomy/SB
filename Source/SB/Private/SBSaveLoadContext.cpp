#include "SBSaveLoadContext.h"

FSBSaveLoadContext::FSBSaveLoadContext() {
    this->SaveGameData = NULL;
    this->OverrideSaveGameData = NULL;
    this->bTickBasedAutoSave = false;
    this->bShowUI = false;
    this->bFillAndPending = false;
    this->bLoadAfterDead = false;
    this->bWriteAndPending = false;
    this->bIsPending = false;
}


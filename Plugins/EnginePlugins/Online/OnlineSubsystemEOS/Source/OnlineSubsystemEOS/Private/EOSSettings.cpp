#include "EOSSettings.h"

UEOSSettings::UEOSSettings() {
    this->CacheDir = TEXT("CacheDir");
    this->DefaultArtifactName = TEXT("SonyLive");
    this->TickBudgetInMilliseconds = 0;
    this->bEnableOverlay = true;
    this->bEnableSocialOverlay = true;
    this->bShouldEnforceBeingLaunchedByEGS = false;
    this->TitleStorageReadChunkLength = 0;
    this->Artifacts.AddDefaulted(6);
    this->bUseEAS = true;
    this->bUseEOSConnect = false;
    this->bMirrorStatsToEOS = true;
    this->bMirrorAchievementsToEOS = true;
    this->bUseEOSSessions = false;
    this->bMirrorPresenceToEAS = true;
}



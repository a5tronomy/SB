#include "SBLevelStreamingContext.h"

USBLevelStreamingContext::USBLevelStreamingContext() {
    this->bRestoreLevelWhenLeave = false;
    this->bVisibleAfterLoad = false;
    this->bPersistentChange = false;
    this->bReserved_Enter = false;
    this->bReserved_Leave = false;
    this->bReserved_AsyncLoadLevels = false;
    this->bReserved_AsyncUnloadLevels = false;
    this->AlwaysLoadedCount = 0;
    this->DynamicLoadedCount = 0;
    this->LoadedCount = 0;
    this->UnloadedCount = 0;
    this->LoadPackageCount = 0;
    this->bIsRunningEnter = false;
    this->bIsRunningLeave = false;
    this->NewWorld = NULL;
}

void USBLevelStreamingContext::OnLevelUnloaded() {
}

void USBLevelStreamingContext::OnLevelShown() {
}

void USBLevelStreamingContext::OnLevelLoaded() {
}



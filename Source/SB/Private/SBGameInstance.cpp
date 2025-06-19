#include "SBGameInstance.h"

USBGameInstance::USBGameInstance() {
    this->bDebugSaveGame = false;
    this->pCharacterOverlapManager = NULL;
    this->SaveObjectManager = NULL;
}

void USBGameInstance::PreLoadMap(const FString& MapName) {
}

void USBGameInstance::PostLoadMap(UWorld* InLoadedWorld) {
}



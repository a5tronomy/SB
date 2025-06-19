#include "SBTheaterTakeData.h"

USBTheaterTakeData::USBTheaterTakeData() {
    this->TakeUID = 0;
    this->bTransitTake = false;
    this->FinishEvent = TEXT("Success");
    this->bSkipAllow = true;
    this->SkipTakeIndexWhenCompleteTheater = -1;
    this->bSubtitleJumpAllow = false;
    this->bSkipBlockWhenFirstPlay = true;
    this->bSkipAllowNewGamePlus = true;
    this->bSkipAllowClearSB = true;
    this->bSkipAllowBossChallenge = true;
    this->bIgnoreSkipComplete = false;
    this->bBlockStreamingVolumeUpdate = false;
    this->TemplateSequence = NULL;
    this->TemplateSettingActor = NULL;
    this->bStartMovementNone = true;
    this->bEnablePhysicsReset = true;
    this->bForcePhysicsReset = true;
    this->bDroneControlAI = true;
    this->bDroneGunUnequip = true;
    this->bClearEventMove = true;
    this->bStopEndFrame = true;
    this->bSubtitleForceVisible = false;
    this->bAllowSkipEndSubtitle = false;
    this->bControlVisibleActor = true;
    this->bZoneEventObserve = true;
    this->bZoneEventCheckFinish = false;
    this->FinishAttachActorDelayFrameCount = 3;
    this->LastTakeFinishAttachActorDelayFrameCount = 0;
    this->bIgnoreMatineeSlomoRestore = false;
    this->bAllowCropAspectRatio = false;
    this->bCropAspectRatioViewport = false;
    this->CropAspectRatioViewportLess = 0.00f;
    this->FilmbackSensorHeightVerticalScaling = false;
}



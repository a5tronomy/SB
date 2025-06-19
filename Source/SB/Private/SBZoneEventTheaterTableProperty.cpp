#include "SBZoneEventTheaterTableProperty.h"

FSBZoneEventTheaterTableProperty::FSBZoneEventTheaterTableProperty() {
    this->ID = 0;
    this->ControlType = ZoneEvent_Theater_Play;
    this->SequencePlayTransformType = ESBSeqPlayTransform_None;
    this->SequencePlayTransformCastType = ESBSequencePlayTransformCastType_None;
    this->BindTargetType = ESBSequenceBindTargetType_None;
    this->BindTargetStartFadeOutKeepDuration = 0.00f;
    this->BindTargetStartFadeInDuration = 0.00f;
    this->bSkipFadeOutAtBindTargeType = false;
    this->Priority = 0;
    this->bSkipAlreadyPlaySameTheater = false;
    this->bUseStartFadeInScreenForLeveStream = false;
    this->StartFadeInDuration = 0.00f;
    this->StartFadeInTime = 0.00f;
    this->bFirstTimeIntro = false;
    this->bUseEndFadeInScreenForLeveStream = false;
    this->MeshClipingApplyType1 = ESBMeshClipingApplyType_None;
    this->MeshClipingApplyType2 = ESBMeshClipingApplyType_None;
    this->bCancelWhenPlayerWarp = false;
    this->bBlockInputByBindSequence = false;
}


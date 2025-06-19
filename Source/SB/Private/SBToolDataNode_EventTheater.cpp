#include "SBToolDataNode_EventTheater.h"

USBToolDataNode_EventTheater::USBToolDataNode_EventTheater() {
    this->ID = 0;
    this->ControlType = ZoneEvent_Theater_Play;
    this->EventDelayTime = 0.00f;
    this->EventDelayMinTime = 0.00f;
    this->EventDelayMaxTime = 0.00f;
    this->SequencePlayTransformType = ESBSeqPlayTransform_None;
    this->SequencePlayTrasnformCastType = ESBSequencePlayTransformCastType_None;
    this->BindTargetType = ESBSequenceBindTargetType_None;
    this->BindTargetStartFadeOutKeepDuration = 0.00f;
    this->BindTargetStartFadeInDuration = 0.00f;
    this->bSkipFadeOutAtBindTargeType = false;
    this->Priority = -1;
    this->bSkipAlreadyPlaySameTheater = false;
    this->bUseStartFadeInScreenForLeveStream = false;
    this->StartFadeInDuration = 0.00f;
    this->StartFadeInTime = 0.00f;
    this->bFirstTimeIntro = false;
    this->bUseEndFadeInScreenForLeveStream = false;
    this->bCancelWhenPlayerWarp = false;
    this->bBlockInputByBindSequence = false;
    this->MeshClipingApplyType1 = ESBMeshClipingApplyType_None;
    this->MeshClipingApplyType2 = ESBMeshClipingApplyType_None;
}



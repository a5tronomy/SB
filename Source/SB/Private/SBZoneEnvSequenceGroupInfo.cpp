#include "SBZoneEnvSequenceGroupInfo.h"

FSBZoneEnvSequenceGroupInfo::FSBZoneEnvSequenceGroupInfo() {
    this->bDontStopLoopSequenceAtDestory = false;
    this->bWhenChangeStaeLoopSequenceStop = false;
    this->UseTemplateTransform = false;
    this->PlayTransformOwnerType = ESBSeqPlayTransform_None;
}


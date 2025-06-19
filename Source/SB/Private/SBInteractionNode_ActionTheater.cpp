#include "SBInteractionNode_ActionTheater.h"

USBInteractionNode_ActionTheater::USBInteractionNode_ActionTheater() {
    this->InteractionNodeType = ESBIANode_Action;
    this->TheaterPriority = -1;
    this->DelayTime = 0.00f;
    this->bSkipTheater = false;
    this->SequencePlayTransformType = ESBSeqPlayTransform_None;
    this->SequencePlayTransformCastType = ESBSequencePlayTransformCastType_None;
    this->bCompletePendingLevelStream = false;
    this->bFadeInEndTheater = false;
    this->bCheckUIDGreater = false;
    this->CompleteTheaterPlayDuration = 0.00f;
}



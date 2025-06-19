#include "SBToolDataNode_EnvState_Sequence.h"

USBToolDataNode_EnvState_Sequence::USBToolDataNode_EnvState_Sequence() {
    this->TransitOut_SequenceActorTemplate = NULL;
    this->Active_SequenceActorTemplate = NULL;
    this->Loop_SequenceActorTemplate = NULL;
    this->bDontStopLoopSequenceAtDestory = false;
    this->bWhenChangeStaeLoopSequenceStop = false;
    this->PlayTransformOwnerType = ESBSeqPlayTransform_Owner;
}



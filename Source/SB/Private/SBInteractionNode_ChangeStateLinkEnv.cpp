#include "SBInteractionNode_ChangeStateLinkEnv.h"

USBInteractionNode_ChangeStateLinkEnv::USBInteractionNode_ChangeStateLinkEnv() {
    this->InteractionNodeType = ESBIANode_ChangeStateLinkEnv;
    this->LinkEnvIndex = ESBEnvLinkIndex_1;
    this->EnvObjState = ESBObject_None;
    this->AddProgressValue = 0;
}



#include "SBInteractionNode_ActionRewardGroup.h"

USBInteractionNode_ActionRewardGroup::USBInteractionNode_ActionRewardGroup() {
    this->InteractionNodeType = ESBIANode_Action;
    this->DelayTime = 0.00f;
    this->RewardGroupSpawnFormation = NULL;
    this->SpawnTargetType = ESBItemBucketType_Zone;
}



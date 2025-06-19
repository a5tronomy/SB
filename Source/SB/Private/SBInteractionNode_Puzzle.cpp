#include "SBInteractionNode_Puzzle.h"

USBInteractionNode_Puzzle::USBInteractionNode_Puzzle() {
    this->InteractionNodeType = ESBIANode_Puzzle;
    this->OpenUIType = ESBUILogicType_NONE;
    this->PuzzleInputText = ESBPuzzleTextType_Text1;
    this->ShowLoopCount = -1;
    this->ShowPlayRuleType = ESBInteractShowPlayRuleType_Static;
    this->Success_Sound = NULL;
    this->Fail_Sound = NULL;
    this->DelayTime = 0.00f;
    this->bActorBlockAll = false;
    this->bCameraLock = true;
    this->bWaitFinsiResult = true;
    this->bHideGameUI = false;
    this->InteractionMoveType = ESBInteractionMove_None;
}



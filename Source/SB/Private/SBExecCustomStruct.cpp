#include "SBExecCustomStruct.h"

FSBExecCustomStruct::FSBExecCustomStruct() {
    this->DataTableType = DATA_Skill;
    this->EventActionType = ESBIAEvent_None;
    this->IntValue = 0;
    this->FloatValue = 0.00f;
    this->bBoolValue = false;
    this->CustomType = 0;
    this->LinkNode = NULL;
}


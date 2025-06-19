#pragma once
#include "CoreMinimal.h"
#include "ESBShowKeyGroupType.generated.h"

UENUM()
enum ESBShowKeyGroupType {
    ShowKeyGroup_Animation,
    ShowKeyGroup_Action,
    ShowKeyGroup_Fx,
    ShowKeyGroup_Sound,
    ShowKeyGroup_Etc,
    ShowKeyGroup_Num,
};


#pragma once
#include "CoreMinimal.h"
#include "ESBUILobbyType.h"
#include "SBUILogicInitParameter.h"
#include "SBUILogicInitParameterLobby.generated.h"

USTRUCT()
struct FSBUILogicInitParameterLobby : public FSBUILogicInitParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    ESBUILobbyType LobbyType;
    
    SB_API FSBUILogicInitParameterLobby();
};


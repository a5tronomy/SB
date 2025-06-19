#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBInteractionGraph.generated.h"

class USBDataNodeBase;
class USBInteractionNode;
class USBInteractionNode_Base;
class USBInteractionNode_GotoLabel;

UCLASS()
class SB_API USBInteractionGraph : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    uint32 Version;
    
    UPROPERTY()
    TArray<USBInteractionNode*> RootInteractionNode;
    
    UPROPERTY()
    TArray<USBInteractionNode*> AllInteractionNode;
    
    UPROPERTY()
    USBInteractionNode_Base* RootInteractionNodeBase;
    
    UPROPERTY()
    USBInteractionNode_Base* CancelInteractionNodeBase;
    
    UPROPERTY()
    USBInteractionNode_Base* TickInteractionNodeBase;
    
    UPROPERTY()
    TArray<USBDataNodeBase*> AllNodeBaseList;
    
    UPROPERTY()
    TArray<USBInteractionNode_Base*> TemplateNodes;
    
    UPROPERTY()
    TArray<USBInteractionNode_GotoLabel*> GotoLabelNodes;
    
    USBInteractionGraph();

};


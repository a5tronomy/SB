#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "SBSkillNavigationPath.h"
#include "SBUserWidget.h"
#include "SBSkillSlotBase.generated.h"

UCLASS(EditInlineNew)
class USBSkillSlotBase : public USBUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TMap<EUINavigation, FSBSkillNavigationPath> SubNavigationInfo;
    
    UPROPERTY(EditAnywhere)
    TMap<EUINavigation, FSBSkillNavigationPath> SubNavigationInfo2;
    
    UPROPERTY(EditAnywhere)
    TMap<EUINavigation, FSBSkillNavigationPath> SubNavigationInfo3;
    
    UPROPERTY(EditAnywhere)
    TMap<EUINavigation, FSBSkillNavigationPath> SubNavigationInfo4;
    
    UPROPERTY(EditAnywhere)
    TMap<EUINavigation, FSBSkillNavigationPath> SubNavigationInfo5;
    
public:
    USBSkillSlotBase();

};


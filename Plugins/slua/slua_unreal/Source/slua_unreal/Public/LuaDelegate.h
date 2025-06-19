#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LuaDelegate.generated.h"

UCLASS(BlueprintType)
class SLUA_UNREAL_API ULuaDelegate : public UObject {
    GENERATED_BODY()
public:
    ULuaDelegate();

    UFUNCTION(BlueprintCallable)
    void EventTrigger();
    
};


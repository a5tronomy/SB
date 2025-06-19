#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LuaBPVar.h"
#include "LuaTableObjectInterface.h"
#include "LuaUserWidget.generated.h"

UCLASS(EditInlineNew)
class SLUA_UNREAL_API ULuaUserWidget : public UUserWidget, public ILuaTableObjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString LuaFilePath;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString LuaStateName;
    
    ULuaUserWidget();

    UFUNCTION(BlueprintCallable)
    FLuaBPVar CallLuaMember(const FString& FunctionName, const TArray<FLuaBPVar>& Args);
    

    // Fix for true pure virtual functions not being implemented
};


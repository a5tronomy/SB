#pragma once
#include "CoreMinimal.h"
#include "SBJsonEffect.h"
#include "SBTablePropertyBase.h"
#include "SBSkillResultTableProperty.generated.h"

USTRUCT(BlueprintType)
struct FSBSkillResultTableProperty : public FSBTablePropertyBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 ID;
    
    UPROPERTY()
    FString ResultSelfCommonEffect;
    
    UPROPERTY()
    FString ResultTargetCommonEffect;
    
    UPROPERTY()
    FString HitLevelResultTargetCommonEffect;
    
    UPROPERTY(EditAnywhere)
    FString ResultSelfCommonShowPath;
    
    UPROPERTY(EditAnywhere)
    FString ResultTargetCommonShowPath;
    
    UPROPERTY(EditAnywhere)
    FName ResultTargetCommonMoveAlias;
    
    UPROPERTY(EditAnywhere)
    FName HitLevelResultTargetCommonMoveAlias;
    
    UPROPERTY()
    FString ResultSelfDownEffect;
    
    UPROPERTY()
    FString ResultTargetDownEffect;
    
    UPROPERTY()
    FString HitLevelResultTargetDownEffect;
    
    UPROPERTY(EditAnywhere)
    FString ResultSelfDownShowPath;
    
    UPROPERTY(EditAnywhere)
    FString ResultTargetDownShowPath;
    
    UPROPERTY(EditAnywhere)
    FName ResultTargetDownMoveAlias;
    
    UPROPERTY(EditAnywhere)
    FName HitLevelResultTargetDownMoveAlias;
    
    UPROPERTY()
    FString ResultSelfGroggyEffect;
    
    UPROPERTY()
    FString ResultTargetGroggyEffect;
    
    UPROPERTY()
    FString HitLevelResultTargetGroggyEffect;
    
    UPROPERTY(EditAnywhere)
    FString ResultSelfGroggyShowPath;
    
    UPROPERTY(EditAnywhere)
    FString ResultTargetGroggyShowPath;
    
    UPROPERTY(EditAnywhere)
    FName ResultTargetGroggyMoveAlias;
    
    UPROPERTY(EditAnywhere)
    FName HitLevelResultTargetGroggyMoveAlias;
    
    UPROPERTY()
    FString ResultSelfAirborneEffect;
    
    UPROPERTY()
    FString ResultTargetAirborneEffect;
    
    UPROPERTY()
    FString HitLevelResultTargetAirborneEffect;
    
    UPROPERTY(EditAnywhere)
    FString ResultSelfAirborneShowPath;
    
    UPROPERTY(EditAnywhere)
    FString ResultTargetAirborneShowPath;
    
    UPROPERTY(EditAnywhere)
    FName ResultTargetAirborneMoveAlias;
    
    UPROPERTY(EditAnywhere)
    FName HitLevelResultTargetAirborneMoveAlias;
    
    UPROPERTY()
    FString ResultSelfAirEffect;
    
    UPROPERTY()
    FString ResultTargetAirEffect;
    
    UPROPERTY()
    FString HitLevelResultTargetAirEffect;
    
    UPROPERTY(EditAnywhere)
    FString ResultSelfAirShowPath;
    
    UPROPERTY(EditAnywhere)
    FString ResultTargetAirShowPath;
    
    UPROPERTY(EditAnywhere)
    FName ResultTargetAirMoveAlias;
    
    UPROPERTY(EditAnywhere)
    FName HitLevelResultTargetAirMoveAlias;
    
    UPROPERTY()
    FString ResultSelfSwimmingEffect;
    
    UPROPERTY()
    FString ResultTargetSwimmingEffect;
    
    UPROPERTY()
    FString HitLevelResultTargetSwimmingEffect;
    
    UPROPERTY(EditAnywhere)
    FString ResultSelfSwimmingShowPath;
    
    UPROPERTY(EditAnywhere)
    FString ResultTargetSwimmingShowPath;
    
    UPROPERTY(EditAnywhere)
    FName ResultTargetSwimmingMoveAlias;
    
    UPROPERTY(EditAnywhere)
    FName HitLevelResultTargetSwimmingMoveAlias;
    
    UPROPERTY()
    FString ResultSelfCriticalEffect;
    
    UPROPERTY()
    FString ResultTargetCriticalEffect;
    
    UPROPERTY(EditAnywhere)
    FString ResultSelfCriticalShowPath;
    
    UPROPERTY(EditAnywhere)
    FString ResultTargetCriticalShowPath;
    
    UPROPERTY()
    FString ResultSelfWeakpointHitEffect;
    
    UPROPERTY()
    FString ResultTargetWeakpointHitEffect;
    
    UPROPERTY()
    FString ResultSelfEventMovingEffect;
    
    UPROPERTY()
    FString ResultTargetEventMovingEffect;
    
    UPROPERTY()
    FString HitLevelResultTargetEventMovingEffect;
    
    UPROPERTY(EditAnywhere)
    FString ResultSelfEventMovingShowPath;
    
    UPROPERTY(EditAnywhere)
    FString ResultTargetEventMovingShowPath;
    
    UPROPERTY(EditAnywhere)
    FName ResultTargetEventMovingMoveAlias;
    
    UPROPERTY(EditAnywhere)
    FName HitLevelResultTargetEventMovingMoveAlias;
    
    UPROPERTY(VisibleAnywhere)
    FName FileSuffix;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> ResultSelfCommonEffectArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> ResultSelfDownEffectArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> ResultSelfGroggyEffectArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> ResultSelfAirborneEffectArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> ResultSelfAirEffectArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> ResultSelfSwimmingEffectArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> ResultSelfEventMovingEffectArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> ResultSelfCriticalEffectArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> ResultSelfWeakpointHitEffectArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> ResultTargetCommonEffectArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> ResultTargetDownEffectArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> ResultTargetGroggyEffectArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> ResultTargetAirborneEffectArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> ResultTargetAirEffectArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> ResultTargetSwimmingEffectArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> ResultTargetEventMovingEffectArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> ResultTargetCriticalEffectArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> ResultTargetWeakpointHitEffectArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> HitLevelResultTargetCommonEffectArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> HitLevelResultTargetDownEffectArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> HitLevelResultTargetGroggyEffectArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> HitLevelResultTargetAirborneEffectArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> HitLevelResultTargetAirEffectArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> HitLevelResultTargetSwimmingEffectArray;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<FSBJsonEffect> HitLevelResultTargetEventMovingEffectArray;
    
    SB_API FSBSkillResultTableProperty();
};


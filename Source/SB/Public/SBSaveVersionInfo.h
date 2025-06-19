#pragma once
#include "CoreMinimal.h"
#include "SBSaveAppContentVersion.h"
#include "SBSaveMajorVersion.h"
#include "SBSaveMinorVersion.h"
#include "SBSavePackageVersion.h"
#include "SBSaveVersionInfo.generated.h"

USTRUCT(BlueprintType)
struct SB_API FSBSaveVersionInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSBSavePackageVersion PackageVersion;
    
    UPROPERTY()
    FSBSaveMajorVersion MajorVersion;
    
    UPROPERTY()
    FSBSaveMinorVersion MinerVersion;
    
    UPROPERTY()
    FSBSaveAppContentVersion AppVersion;
    
public:
    FSBSaveVersionInfo();
};


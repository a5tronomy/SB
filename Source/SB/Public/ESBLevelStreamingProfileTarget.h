#pragma once
#include "CoreMinimal.h"
#include "ESBLevelStreamingProfileTarget.generated.h"

UENUM()
enum ESBLevelStreamingProfileTarget {
    ESBLevelStreamingProfileTarget_Texture,
    ESBLevelStreamingProfileTarget_StaticMeshComponent,
    ESBLevelStreamingProfileTarget_StaticMeshComponent_StaticMesh,
    ESBLevelStreamingProfileTarget_StaticMeshComponent_Material,
};


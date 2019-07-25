// Copyright (C) 2019 Pedro Montoto García - All Rights Reserved

#pragma once

#include "Object.h"
#include "CoreMinimal.h"
#include "LandscapeFilter.h"
#include "Landscape.h"
#include "PerlinNoiseAdderFilter.generated.h"

/**
 * 
 */
UCLASS()
class PROCEDURALTERRAINGENERATOR_API UPerlinNoiseAdderFilter : public ULandscapeFilter
{
	GENERATED_BODY()
public:
	// Inherited via ULandscapeFilter
	virtual bool ModifyHeightMap(TArray<uint16>* RawHeightMapData, FBounds Bounds, FRandomStream* RandomStream) override;
};

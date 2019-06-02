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
class PROCEDURALTERRAINGENERATOR_API UPerlinNoiseAdderFilter : public UObject, public ILandscapeFilter
{
	GENERATED_BODY()
public:
	UPerlinNoiseAdderFilter(const FObjectInitializer& FObjectInitializer);

	// Inherited via ILandscapeFilter
	virtual bool ApplyFilter(ALandscape* Landscape) override;
};

// Copyright (C) 2019 Pedro Montoto García - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LandscapeFilter.h"
#include "FlattenFilter.generated.h"

/**
 * 
 */
UCLASS()
class PROCEDURALTERRAINGENERATOR_API UFlattenFilter : public UObject, public ILandscapeFilter
{
	GENERATED_BODY()

public:
	// Inherited via ILandscapeFilter
	virtual bool ApplyFilter(ALandscape *Landscape);
};

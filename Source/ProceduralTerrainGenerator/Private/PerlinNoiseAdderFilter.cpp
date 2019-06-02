// Copyright (C) 2019 Pedro Montoto García - All Rights Reserved

#include "PerlinNoiseAdderFilter.h"
#include "LandscapeEdit.h"
#include "LandscapeComponent.h"

DEFINE_LOG_CATEGORY(LandscapeFilter);

UPerlinNoiseAdderFilter::UPerlinNoiseAdderFilter(const FObjectInitializer& FObjectInitializer)
	: Super(FObjectInitializer)
{

}

bool UPerlinNoiseAdderFilter::ApplyFilter(ALandscape * Landscape)
{
	UE_LOG(LandscapeFilter, Log, TEXT("PerlinNoiseAdderFilter: Applying filter to Terrain %s"), *(Landscape->GetName()));



	return false;
}

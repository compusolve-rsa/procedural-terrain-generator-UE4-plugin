// Copyright (C) 2019 Pedro Montoto García - All Rights Reserved

#include "FlattenFilter.h"
#include "LandscapeEdit.h"

bool UFlattenFilter::ApplyFilter(ALandscape *Landscape)
{ 
	ULandscapeInfo* LandscapeInfo = Landscape->CreateLandscapeInfo();
	FLandscapeEditDataInterface Editor(LandscapeInfo);
	int32 MinX, MinY, MaxX, MaxY;
	if (LandscapeInfo && LandscapeInfo->GetLandscapeExtent(MinX, MinY, MaxX, MaxY))
	{
		TArray<uint16> Data;
		Data.Init(0xFFFF, (MaxX - MinX + 1) * (MaxY - MinY + 1));
		Editor.SetHeightData(MinX, MinY, MaxX, MaxY, Data.GetData(), 0, true);

		Editor.Flush();

		return true;
	}

	return false;
}

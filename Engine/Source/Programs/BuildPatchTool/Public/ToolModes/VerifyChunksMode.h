// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "ToolMode.h"

namespace BuildPatchTool
{
	class FVerifyChunksToolModeFactory
	{
	public:
		static IToolModeRef Create(IBuildPatchServicesModule& BpsInterface);
	};
}

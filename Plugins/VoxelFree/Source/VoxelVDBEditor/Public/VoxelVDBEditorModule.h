// Copyright 2021 Phyronnaz

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"

class FVoxelVDBEditorModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
};
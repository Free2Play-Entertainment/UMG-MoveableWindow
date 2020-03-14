/**
 * Based on Blueprints created by insthync
 * --
 * Copyright (c) 2017 Bay
 * --
 * https://github.com/insthync/UMG-MoveableWindow
*/
#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FMoveableUMGWindowModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

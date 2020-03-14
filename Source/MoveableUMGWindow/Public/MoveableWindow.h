/**
 * Based on Blueprints created by insthync
 * --
 * Copyright (c) 2017 Bay
 * --
 * https://github.com/insthync/UMG-MoveableWindow
*/

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MoveableWindow.generated.h"

/**
 * 
 */
UCLASS()
class MOVEABLEUMGWINDOW_API UMoveableWindow : public UUserWidget
{
	GENERATED_BODY()

	void Construct();

	bool bIsDragging;

	class UBorder* DraggingArea;
	
	FVector2D CursorOffset;

	void Tick(float DeltaSeconds);

	FVector2D GetOffsetToParent(const FVector2D Position);

};

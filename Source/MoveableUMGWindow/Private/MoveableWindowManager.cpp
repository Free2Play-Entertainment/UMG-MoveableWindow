/**
 * Based on Blueprints created by insthync
 * --
 * Copyright (c) 2017 Bay
 * --
 * https://github.com/insthync/UMG-MoveableWindow
*/


#include "MoveableWindowManager.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Components/CanvasPanelSlot.h"

void UMoveableWindowManager::UpdateOrder(UWidget* Window)
{
    int32 WindowIndex = Children.Find(Window);
    if(WindowIndex == -1)
    {
        UWidgetLayoutLibrary::SlotAsCanvasSlot(Window)->ZOrder = Children.Add(Window) + 1;
        InvalidateLayoutAndVolatility();
    }

    for(int i = 0; i < Children.Num(); i++)
    {
        if(i != WindowIndex)
        {
            if(UWidgetLayoutLibrary::SlotAsCanvasSlot(Children[i])->ZOrder >= UWidgetLayoutLibrary::SlotAsCanvasSlot(Window)->ZOrder)
            {
                UWidgetLayoutLibrary::SlotAsCanvasSlot(Children[i])->ZOrder -= 1;
            }
        }
    }

    UWidgetLayoutLibrary::SlotAsCanvasSlot(Window)->ZOrder = Children.Num();
    InvalidateLayoutAndVolatility();
}
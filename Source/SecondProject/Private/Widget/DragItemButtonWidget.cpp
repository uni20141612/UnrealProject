// Fill out your copyright notice in the Description page of Project Settings.

#include "Widget/DragItemButtonWidget.h"
#include "Widget/ItemInformationWidget.h"

#include "Components/TextBlock.h"
#include "Components/Image.h"

void UDragItemButtonWidget::SetInformation(const FItemInformation* info, const int32& item_Count)
{
	item_Code = info->item_Code;

	TextBlock_ItemName->SetText(FText::FromName(info->item_Name));
	TextBlock_ItemCount->SetText(FText::AsNumber(item_Count));
	TextBlock_ItemDescription->SetText(FText::FromName(info->item_Description));

	Image_ItemImage->SetBrushFromTexture(info->item_Image);
}

void UDragItemButtonWidget::NativeConstruct()
{
}

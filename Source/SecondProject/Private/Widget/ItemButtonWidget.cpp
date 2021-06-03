// Fill out your copyright notice in the Description page of Project Settings.

#include "Widget/ItemButtonWidget.h"
#include "Character/Player/Controller/CustomController.h"
#include "Character/Player/Component/InventoryComponent.h"
#include "Character/Player/PlayerCharacter.h"
#include "Widget/ItemInformationWidget.h"
#include "Widget/ItemMenuWidget.h"
#include "Widget/ToolTipWidget.h"
#include "Widget/InventoryListWidget.h"
#include "Item/ItemActor.h"

#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "Components/Button.h"
#include "Blueprint/WidgetLayoutLibrary.h"

void UItemButtonWidget::SetInformation(const FItemInformation* info, const int32& item_Count)
{
	item_Code = info->item_Code;

	TextBlock_ItemName->SetText(FText::FromName(info->item_Name));
	TextBlock_ItemCount->SetText(FText::AsNumber(item_Count));
	TextBlock_ItemDescription->SetText(FText::FromName(info->item_Description));

	Image_ItemImage->SetBrushFromTexture(info->item_Image);
}

void UItemButtonWidget::UpdateItemCount(const int32& item_Count)
{
	TextBlock_ItemCount->SetText(FText::AsNumber(item_Count));
}

void UItemButtonWidget::SetItemListWidget(UInventoryListWidget* p_widget)
{
	UMG_ItemList = p_widget;
}

void UItemButtonWidget::NativeConstruct()
{
	Super::NativeConstruct();

	Button_Item->OnHovered.AddUniqueDynamic(this, &UItemButtonWidget::OnHoveredButtonItem);
	Button_Item->OnClicked.AddUniqueDynamic(this, &UItemButtonWidget::OnClickedButtonItem);

	if (toolTipWidgetClass != nullptr)
	{
		myToolTipWidget = CreateWidget<UToolTipWidget>(GetOwningPlayer(), toolTipWidgetClass.Get());
		if (myToolTipWidget != nullptr)
		{
			SetToolTip(myToolTipWidget);
		}
	}
}

void UItemButtonWidget::OnHoveredButtonItem()
{
	auto controller = Cast<ACustomController>(GetOwningPlayer());
	if (controller != nullptr)
	{
		auto infoWidget = controller->GetItemInformationWidget();
		if (infoWidget != nullptr)
		{
			infoWidget->SetInformation(item_Code);
		}
	}

	auto player = Cast<APlayerCharacter>(GetOwningPlayerPawn());
	if (player != nullptr)
	{
		auto invenComp = player->GetInventoryComponent();
		if (invenComp != nullptr)
		{
			auto info = invenComp->GetItemInfo(item_Code);
			if (info != nullptr)
			{
				myToolTipWidget->SetText(info->item_Description);
			}
			else
			{
				myToolTipWidget->SetText("There is no Item Description");
			}
		}
	}
}

void UItemButtonWidget::OnClickedButtonItem()
{
	if (UMG_ItemList != nullptr)
	{
		UMG_ItemList->ShowItemMenu(item_Code);
	}
}

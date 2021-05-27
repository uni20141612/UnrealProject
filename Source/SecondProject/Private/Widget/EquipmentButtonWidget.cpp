// Fill out your copyright notice in the Description page of Project Settings.

#include "Widget/EquipmentButtonWidget.h"
#include "Widget/WidgetDragDropOper.h"
#include "Widget/DragItemButtonWidget.h"
#include "Character/Player/Component/InventoryComponent.h"
#include "Character/Player/PlayerCharacter.h"

#include "Components/Image.h"
#include "Components/TextBlock.h"

void UEquipmentButtonWidget::Init()
{

}

void UEquipmentButtonWidget::SetItemInformation(const FItemInformation* info, const int32& itemCount)
{
	if (buttonType == EEquipmentButtonType::Consume)
	{
		Image_Item->SetBrushFromTexture(info->item_Image);
		TextBlock_ItemCount->SetText(FText::AsNumber(itemCount));
	}
}

void UEquipmentButtonWidget::SetItemInformation(const FEquipmentInformation* info)
{
	if (buttonType != EEquipmentButtonType::Consume)
	{
		auto equipType = info->equipmentType;
		switch (buttonType)
		{
		case EEquipmentButtonType::Weapon:
			if(equipType == EEquipmentType::Weapon){ Image_Item->SetBrushFromTexture(info->item_Image); }
			break;
		case EEquipmentButtonType::Shield:
			if (equipType == EEquipmentType::Shield) { Image_Item->SetBrushFromTexture(info->item_Image); }
			break;
		case EEquipmentButtonType::Helmet:
			if (equipType == EEquipmentType::Helmet) { Image_Item->SetBrushFromTexture(info->item_Image); }
			break;
		case EEquipmentButtonType::Gloves:
			if (equipType == EEquipmentType::Gloves) { Image_Item->SetBrushFromTexture(info->item_Image); }
			break;
		case EEquipmentButtonType::Chest:
			if (equipType == EEquipmentType::Chest) { Image_Item->SetBrushFromTexture(info->item_Image); }
			break;
		case EEquipmentButtonType::Legs:
			if (equipType == EEquipmentType::Legs) { Image_Item->SetBrushFromTexture(info->item_Image); }
			break;
		case EEquipmentButtonType::Boots:
			if (equipType == EEquipmentType::Boots) { Image_Item->SetBrushFromTexture(info->item_Image); }
			break;
		default:
			break;
		}
		TextBlock_ItemCount->SetText(FText::GetEmpty());
	}
}

bool UEquipmentButtonWidget::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	Super::NativeOnDrop(InGeometry, InDragDropEvent, InOperation);

	if (InOperation != nullptr)
	{
		auto oper = Cast<UWidgetDragDropOper>(InOperation);
		if (oper != nullptr)
		{
			auto button = Cast<UDragItemButtonWidget>(oper->widgetReference);
			if (button != nullptr)
			{
				item_Code = button->GetItemCode();

				auto invenComp = Cast<APlayerCharacter>(GetOwningPlayerPawn())->GetInventoryComponent();
				auto info = invenComp->GetItemInfo(item_Code);
				auto item = invenComp->GetItem(item_Code);

				if (item != nullptr)
				{
					if (invenComp->GetEquipmentType(item_Code) == EEquipmentType::None)
					{
						SetItemInformation(info, item->item_Count);
					}
					else
					{
						SetItemInformation(invenComp->GetEquipmentInfo(item_Code));
					}

					return true;
				}
			}
		}
	}

	return false;
}

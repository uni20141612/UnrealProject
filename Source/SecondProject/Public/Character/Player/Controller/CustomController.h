// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"

#include "CustomController.generated.h"

/**
 * 
 */
UCLASS()
class SECONDPROJECT_API ACustomController : public APlayerController
{
	GENERATED_BODY()

public:
	void SetLockOnWidgetPos(AActor* target);
	void SetVisibilityLockOnWidget(ESlateVisibility newVisible);
	void ShowInventory();
	class UItemInformationWidget* GetItemInformationWidget();

	class UInventoryWidget* GetInventoryWidget() { return inventoryWidget; }
	
protected:
	virtual void BeginPlay() override;

protected:
	UPROPERTY(EditAnywhere)
		TSubclassOf<class UUserWidget> mainWidgetClass;
	UPROPERTY()
		UUserWidget* mainWidget;

	UPROPERTY(EditAnywhere)
		TSubclassOf<class UUserWidget> lockOnWidgetClass;
	UPROPERTY()
		UUserWidget* lockOnWidget;

	UPROPERTY(EditAnywhere)
		TSubclassOf<class UInventoryWidget> inventoryWidgetClass;
	UPROPERTY()
		UInventoryWidget* inventoryWidget;
};

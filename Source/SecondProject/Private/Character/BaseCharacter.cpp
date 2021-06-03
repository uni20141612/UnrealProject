// Fill out your copyright notice in the Description page of Project Settings.

#include "Character/BaseCharacter.h"
#include "Character/Component/StatusComponent.h"
#include "Components/WidgetComponent.h"

#include "Widget/HeadOnHealthBarWidget.h"
// Sets default values
ABaseCharacter::ABaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	statusComponent = CreateDefaultSubobject<UStatusComponent>(TEXT("stausComponent"));
	widgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("widgetComponent"));
	widgetComponent->SetupAttachment(RootComponent);
}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

float ABaseCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	UE_LOG(LogTemp, Log, TEXT("takedamage"));
	GetStatusComponent()->SetHP(GetStatusComponent()->GetHP() - DamageAmount);
	UpdateHeadOnHPBarWidget();
	return 0.0f;
}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	UpdateHeadOnHPBarWidget();
}

void ABaseCharacter::UpdateHeadOnHPBarWidget()
{
	if (widgetComponent->GetUserWidgetObject() != nullptr)
	{
		UHeadOnHealthBarWidget* headOnWidget = Cast<UHeadOnHealthBarWidget>(widgetComponent->GetUserWidgetObject());
		if (headOnWidget != nullptr)
		{
			headOnWidget->SetHPPercent(statusComponent->GetHPPercent());
		}
	}
}

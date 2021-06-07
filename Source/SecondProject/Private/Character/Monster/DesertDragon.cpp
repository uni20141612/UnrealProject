// Fill out your copyright notice in the Description page of Project Settings.

#include "Character/Monster/DesertDragon.h"

#include "Components/CapsuleComponent.h"

ADesertDragon::ADesertDragon()
{
    GetCapsuleComponent()->SetCollisionProfileName("DummyCapsule");
    GetCapsuleComponent()->SetGenerateOverlapEvents(false);

    GetMesh()->SetCollisionProfileName("Monster");
    GetMesh()->SetGenerateOverlapEvents(true);

    bBoss = true;
}

/*
float ADesertDragon::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
    return 0.0f;
}
*/

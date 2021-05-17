// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Item/ItemTypes.h"

#include "ItemActor.generated.h"//<<반드시 가장 아래.

UCLASS()
class SECONDPROJECT_API AItemActor : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    AItemActor();
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    template<typename T>
    T* GetItemInformation();

    virtual void UseItem(AActor* target) { }

    class UWidgetComponent* GetWidgetComponent() { return widgetComponent; }
    FName GetItemCode() { return item_Code; }
    const int32& GetItemCount() { return item_Count; }
    void SetItemCount(const int32& newCount) { item_Count = newCount; }
    void SetItemCode(const FName& newCode) { item_Code = newCode; }

protected:
    // Called when the game starts or when spawned.
    virtual void BeginPlay() override;

protected:
    UPROPERTY(VisibleAnywhere)
        class USphereComponent* sphereComponent;
    UPROPERTY(VisibleAnywhere)
        class UParticleSystemComponent* particleComponent;
    UPROPERTY(VisibleAnywhere)
        class UWidgetComponent* widgetComponent;

    UPROPERTY(EditAnywhere)
        FName item_Code;
    UPROPERTY(EditAnywhere)
        int32 item_Count = 1;
    UPROPERTY(EditAnywhere)
        class UDataTable* itemTable;

};

template<typename T>
inline T* AItemActor::GetItemInformation()
{
    if (itemTable != nullptr) {
        return itemTable->FindRow<T>(item_Code, "");
    }
    return nullptr;
}
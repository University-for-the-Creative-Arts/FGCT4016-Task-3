// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TestCharacter.generated.h"
#include "InputActionValue.h"

class UInputMappingContext;
class UInputAction;



UCLASS()
class SEM2UNIVERSITYTASKS_API ATestCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATestCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= "Input System")
	UInputMappingContext* DefaultMappingContext;

	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category="Input System")
	UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=" Movement")
	float MovementSpeed = 100.f;

	void Movement(const FInputActionValue & Value);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};

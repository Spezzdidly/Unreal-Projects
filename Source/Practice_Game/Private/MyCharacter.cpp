// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Didnt need this line because of the spring arm, keeping it if we want to implement first person later
	// Camera->bUsePawnControlRotation = true; // sets PawnControlRotation to true inside the camera component

	bUseControllerRotationPitch = false; // sets the controller rotation pitch to false
	GetCharacterMovement()->bOrientRotationToMovement = true; // sets the character movement to orient rotation to movement	
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();


}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	

	// Binds the action "Jump" to a key press (Spacebar) and uses the jump function from the
	// ACharacter class to make the player jump when the key is pressed
	PlayerInputComponent->BindAction( "Jump", IE_Pressed, this, &ACharacter::Jump );
}
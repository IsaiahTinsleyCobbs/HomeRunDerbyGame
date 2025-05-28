// Fill out your copyright notice in the Description page of Project Settings.

#include "Logging.h"
#include "Pitcher.h"

DEFINE_LOG_CATEGORY_STATIC(LogDerby, Log, All);


void APitcher::ThrowBall() {

	float pitchSpeed = FMath::RandRange(60.0f, 105.0f);

	UE_LOG(LogDerby, Log, TEXT("Ball thrown at %f MPH"), pitchSpeed);

	

	if (pitchSpeed < 87.0f) {

		UE_LOG(LogDerby, Log, TEXT("This guy throws kinda slow, no?"));

	}

	if (pitchSpeed <= 0)
	{
		UE_LOG(LogDerby, Error, TEXT("Invalid pitch speed!"));
}

	if(pitchSpeed > 99.9f) {
		
		UE_LOG(LogDerby, Log, TEXT("This is witchcraft"));





// Sets default values
APitcher::APitcher() {
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APitcher::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APitcher::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


// Copyright Epic Games, Inc. All Rights Reserved.

#include "DrasteriaPrototypeGameMode.h"
#include "DrasteriaPrototypeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADrasteriaPrototypeGameMode::ADrasteriaPrototypeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

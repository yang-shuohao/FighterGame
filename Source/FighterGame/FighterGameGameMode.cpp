// Copyright Epic Games, Inc. All Rights Reserved.

#include "FighterGameGameMode.h"
#include "FighterGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFighterGameGameMode::AFighterGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

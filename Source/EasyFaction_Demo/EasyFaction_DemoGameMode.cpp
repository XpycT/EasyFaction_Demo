// Copyright Epic Games, Inc. All Rights Reserved.

#include "EasyFaction_DemoGameMode.h"
#include "EasyFaction_DemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEasyFaction_DemoGameMode::AEasyFaction_DemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

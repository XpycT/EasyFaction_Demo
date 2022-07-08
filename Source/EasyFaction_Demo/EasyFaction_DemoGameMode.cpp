// Copyright Epic Games, Inc. All Rights Reserved.

#include "EasyFaction_DemoGameMode.h"
#include "EasyFaction_DemoCharacter.h"
#include "UI/EFD_HUD.h"
#include "UObject/ConstructorHelpers.h"

AEasyFaction_DemoGameMode::AEasyFaction_DemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/EasyFaction_Demo/Blueprints/Characters/BP_Character"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	HUDClass = AEFD_HUD::StaticClass();
}
